/**
  ******************************************************************************
  * @file    main.c [MNIST on STM32F446 Nucleo-64]
  * @author  Kishwar Kumar
  * @version V1.0
  * @date    28-December-2020
  * @brief   Default main function.
  * @memory  512Kbytes Flash, 128KByte SRAM
  ******************************************************************************
*/


#include "stm32f4xx.h"
#include "hal_uart.h"
#include "terminal.h"
#include "mnist_tflite.h"
#include "test_image.h"
#include <string>
#include "tensorflow/lite/micro/kernels/all_ops_resolver.h"
#include "tensorflow/lite/micro/micro_error_reporter.h"
#include "tensorflow/lite/micro/micro_interpreter.h"
#include "tensorflow/lite/schema/schema_generated.h"
#include "tensorflow/lite/version.h"

void bitmap_to_float_array(float* dest, const unsigned char* bitmap);

int main(void)
{
  //initialise system
  RCC_DeInit();
  SystemCoreClockUpdate();
  hal_uart_config();

  print("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\r");
  print("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\r");

  const tflite::Model* model             = nullptr;
  tflite::MicroInterpreter* interpreter  = nullptr;
  TfLiteTensor* model_input              = nullptr;
  TfLiteTensor* model_output             = nullptr;
  float* input_buffer                    = nullptr;
  constexpr uint32_t kTensorArenaSize    = 16 * 1024;
  uint8_t tensor_arena[kTensorArenaSize] = { 0 };

  print("\n\r5. Loading Model\n\r");
  model = tflite::GetModel(mnist_tflite);

  if(model->version() != TFLITE_SCHEMA_VERSION) {
    print("Model is schema version: ");
    print(model->version());
    print("\n\rSupported schema version is: ");
    print(TFLITE_SCHEMA_VERSION);
    return 0;
  }
  print("\n\rModel loaded successfully..\n\r");

  //Setup  TF runner
  static tflite::ops::micro::AllOpsResolver resolver;
  static tflite::MicroInterpreter static_interpreter(
        model, resolver, tensor_arena, kTensorArenaSize, nullptr);
  interpreter = &static_interpreter;

  //Allocate memory from the tensor_arena for the model's tensors.
  TfLiteStatus allocate_status = interpreter->AllocateTensors();
  if (allocate_status != kTfLiteOk)
  {
     print("\n\rAllocateTensors() failed\n\r");
     return 0;
  }

  //Obtain pointers to the model's input and output tensors.
  model_input = interpreter->input(0);
  model_output = interpreter->output(0);

  //Save the input buffer to put our MNIST images into
  input_buffer = model_input->data.f;
  bitmap_to_float_array(input_buffer, mnist_22);

  //Run the model
  TfLiteStatus invoke_status = interpreter->Invoke();
  if (invoke_status != kTfLiteOk)
  {
    print("\n\rInvoke failed...\n\r");
    return 0;
  }

  float* result = model_output->data.f;
  print("\n\rValue detected: ");
  print(std::distance(result, std::max_element(result, result + 10 )));
  print("\n\r");
}


void bitmap_to_float_array(float* dest, const unsigned char* bitmap) {
  int pixel = 0;
  for(int y = 0; y < 28; y++) {
    for(int x = 0; x < 28; x++) {
      int B = x / 8; // the Byte # of the row
      int b = x % 8; // the Bit # of the Byte
      dest[pixel] = (bitmap[y * 4 + B] >> (7 - b)) &
                        0x1 ? 1.0f : 0.0f;
      pixel++;
    }
  }
}
