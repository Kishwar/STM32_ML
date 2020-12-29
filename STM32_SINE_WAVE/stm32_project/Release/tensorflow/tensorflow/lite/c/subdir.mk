################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../tensorflow/tensorflow/lite/c/common.c 

OBJS += \
./tensorflow/tensorflow/lite/c/common.o 

C_DEPS += \
./tensorflow/tensorflow/lite/c/common.d 


# Each subdirectory must supply rules for building sources it contributes
tensorflow/tensorflow/lite/c/%.o: ../tensorflow/tensorflow/lite/c/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -DSTM32 -DSTM32F4 -DSTM32F446RETx -DNUCLEO_F446RE -DSTM32F446xx -DUSE_STDPERIPH_DRIVER -I"/Users/kishwarkumar/Desktop/STM32_SIN/stm32_project/StdPeriph_Driver/inc" -I"/Users/kishwarkumar/Desktop/STM32_SIN/stm32_project/third_party/gemmlowp" -I"/Users/kishwarkumar/Desktop/STM32_SIN/stm32_project/third_party/flatbuffers/include" -I"/Users/kishwarkumar/Desktop/STM32_SIN/stm32_project/tensorflow/tensorflow" -I"/Users/kishwarkumar/Desktop/STM32_SIN/stm32_project/tensorflow" -I"/Users/kishwarkumar/Desktop/STM32_SIN/stm32_project/third_party/flatbuffers/include" -I"/Users/kishwarkumar/Desktop/STM32_SIN/stm32_project/third_party/ruy" -I"/Users/kishwarkumar/Desktop/STM32_SIN/stm32_project/inc" -I"/Users/kishwarkumar/Desktop/STM32_SIN/stm32_project/CMSIS/device" -I"/Users/kishwarkumar/Desktop/STM32_SIN/stm32_project/CMSIS/core" -O3 -Wall -fmessage-length=0 -ffunction-sections -c -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


