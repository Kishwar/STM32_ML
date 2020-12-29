################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CC_SRCS += \
../tensorflow/tensorflow/lite/micro/memory_helpers.cc \
../tensorflow/tensorflow/lite/micro/micro_allocator.cc \
../tensorflow/tensorflow/lite/micro/micro_error_reporter.cc \
../tensorflow/tensorflow/lite/micro/micro_interpreter.cc \
../tensorflow/tensorflow/lite/micro/micro_optional_debug_tools.cc \
../tensorflow/tensorflow/lite/micro/micro_string.cc \
../tensorflow/tensorflow/lite/micro/micro_time.cc \
../tensorflow/tensorflow/lite/micro/micro_utils.cc \
../tensorflow/tensorflow/lite/micro/simple_memory_allocator.cc \
../tensorflow/tensorflow/lite/micro/test_helpers.cc 

CC_DEPS += \
./tensorflow/tensorflow/lite/micro/memory_helpers.d \
./tensorflow/tensorflow/lite/micro/micro_allocator.d \
./tensorflow/tensorflow/lite/micro/micro_error_reporter.d \
./tensorflow/tensorflow/lite/micro/micro_interpreter.d \
./tensorflow/tensorflow/lite/micro/micro_optional_debug_tools.d \
./tensorflow/tensorflow/lite/micro/micro_string.d \
./tensorflow/tensorflow/lite/micro/micro_time.d \
./tensorflow/tensorflow/lite/micro/micro_utils.d \
./tensorflow/tensorflow/lite/micro/simple_memory_allocator.d \
./tensorflow/tensorflow/lite/micro/test_helpers.d 

OBJS += \
./tensorflow/tensorflow/lite/micro/memory_helpers.o \
./tensorflow/tensorflow/lite/micro/micro_allocator.o \
./tensorflow/tensorflow/lite/micro/micro_error_reporter.o \
./tensorflow/tensorflow/lite/micro/micro_interpreter.o \
./tensorflow/tensorflow/lite/micro/micro_optional_debug_tools.o \
./tensorflow/tensorflow/lite/micro/micro_string.o \
./tensorflow/tensorflow/lite/micro/micro_time.o \
./tensorflow/tensorflow/lite/micro/micro_utils.o \
./tensorflow/tensorflow/lite/micro/simple_memory_allocator.o \
./tensorflow/tensorflow/lite/micro/test_helpers.o 


# Each subdirectory must supply rules for building sources it contributes
tensorflow/tensorflow/lite/micro/%.o: ../tensorflow/tensorflow/lite/micro/%.cc
	@echo 'Building file: $<'
	@echo 'Invoking: MCU G++ Compiler'
	@echo $(PWD)
	arm-none-eabi-g++ -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -DSTM32 -DSTM32F4 -DSTM32F446RETx -DNUCLEO_F446RE -DDEBUG -DSTM32F446xx -DUSE_STDPERIPH_DRIVER -I"/Users/kishwarkumar/Desktop/STM32_SIN/stm32_project/StdPeriph_Driver/inc" -I"/Users/kishwarkumar/Desktop/STM32_SIN/stm32_project/third_party/ruy" -I"/Users/kishwarkumar/Desktop/STM32_SIN/stm32_project/third_party/flatbuffers/include" -I"/Users/kishwarkumar/Desktop/STM32_SIN/stm32_project/third_party/flatbuffers" -I"/Users/kishwarkumar/Desktop/STM32_SIN/stm32_project/third_party" -I"/Users/kishwarkumar/Desktop/STM32_SIN/stm32_project/third_party/gemmlowp" -I"/Users/kishwarkumar/Desktop/STM32_SIN/stm32_project/tensorflow" -I"/Users/kishwarkumar/Desktop/STM32_SIN/stm32_project/tensorflow/tensorflow" -I"/Users/kishwarkumar/Desktop/STM32_SIN/stm32_project/inc" -I"/Users/kishwarkumar/Desktop/STM32_SIN/stm32_project/CMSIS/device" -I"/Users/kishwarkumar/Desktop/STM32_SIN/stm32_project/CMSIS/core" -O0 -g3 -Wall -fmessage-length=0 -ffunction-sections -c -fno-exceptions -fno-rtti -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


