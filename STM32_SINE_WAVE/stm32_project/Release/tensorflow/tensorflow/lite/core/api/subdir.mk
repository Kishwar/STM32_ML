################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CC_SRCS += \
../tensorflow/tensorflow/lite/core/api/error_reporter.cc \
../tensorflow/tensorflow/lite/core/api/flatbuffer_conversions.cc \
../tensorflow/tensorflow/lite/core/api/op_resolver.cc \
../tensorflow/tensorflow/lite/core/api/tensor_utils.cc 

CC_DEPS += \
./tensorflow/tensorflow/lite/core/api/error_reporter.d \
./tensorflow/tensorflow/lite/core/api/flatbuffer_conversions.d \
./tensorflow/tensorflow/lite/core/api/op_resolver.d \
./tensorflow/tensorflow/lite/core/api/tensor_utils.d 

OBJS += \
./tensorflow/tensorflow/lite/core/api/error_reporter.o \
./tensorflow/tensorflow/lite/core/api/flatbuffer_conversions.o \
./tensorflow/tensorflow/lite/core/api/op_resolver.o \
./tensorflow/tensorflow/lite/core/api/tensor_utils.o 


# Each subdirectory must supply rules for building sources it contributes
tensorflow/tensorflow/lite/core/api/%.o: ../tensorflow/tensorflow/lite/core/api/%.cc
	@echo 'Building file: $<'
	@echo 'Invoking: MCU G++ Compiler'
	@echo $(PWD)
	arm-none-eabi-g++ -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -DSTM32 -DSTM32F4 -DSTM32F446RETx -DNUCLEO_F446RE -DSTM32F446xx -DUSE_STDPERIPH_DRIVER -I"/Users/kishwarkumar/Desktop/STM32_SIN/stm32_project/StdPeriph_Driver/inc" -I"/Users/kishwarkumar/Desktop/STM32_SIN/stm32_project/third_party/gemmlowp" -I"/Users/kishwarkumar/Desktop/STM32_SIN/stm32_project/third_party/flatbuffers/include" -I"/Users/kishwarkumar/Desktop/STM32_SIN/stm32_project/tensorflow/tensorflow" -I"/Users/kishwarkumar/Desktop/STM32_SIN/stm32_project/tensorflow" -I"/Users/kishwarkumar/Desktop/STM32_SIN/stm32_project/third_party/flatbuffers/include" -I"/Users/kishwarkumar/Desktop/STM32_SIN/stm32_project/third_party/ruy" -I"/Users/kishwarkumar/Desktop/STM32_SIN/stm32_project/inc" -I"/Users/kishwarkumar/Desktop/STM32_SIN/stm32_project/CMSIS/device" -I"/Users/kishwarkumar/Desktop/STM32_SIN/stm32_project/CMSIS/core" -O3 -Wall -fmessage-length=0 -ffunction-sections -c -fno-exceptions -fno-rtti -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


