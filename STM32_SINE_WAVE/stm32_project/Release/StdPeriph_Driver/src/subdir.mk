################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../StdPeriph_Driver/src/misc.c \
../StdPeriph_Driver/src/stm32f4xx_flash.c \
../StdPeriph_Driver/src/stm32f4xx_flash_ramfunc.c \
../StdPeriph_Driver/src/stm32f4xx_gpio.c \
../StdPeriph_Driver/src/stm32f4xx_rcc.c \
../StdPeriph_Driver/src/stm32f4xx_rtc.c \
../StdPeriph_Driver/src/stm32f4xx_syscfg.c \
../StdPeriph_Driver/src/stm32f4xx_tim.c \
../StdPeriph_Driver/src/stm32f4xx_usart.c 

OBJS += \
./StdPeriph_Driver/src/misc.o \
./StdPeriph_Driver/src/stm32f4xx_flash.o \
./StdPeriph_Driver/src/stm32f4xx_flash_ramfunc.o \
./StdPeriph_Driver/src/stm32f4xx_gpio.o \
./StdPeriph_Driver/src/stm32f4xx_rcc.o \
./StdPeriph_Driver/src/stm32f4xx_rtc.o \
./StdPeriph_Driver/src/stm32f4xx_syscfg.o \
./StdPeriph_Driver/src/stm32f4xx_tim.o \
./StdPeriph_Driver/src/stm32f4xx_usart.o 

C_DEPS += \
./StdPeriph_Driver/src/misc.d \
./StdPeriph_Driver/src/stm32f4xx_flash.d \
./StdPeriph_Driver/src/stm32f4xx_flash_ramfunc.d \
./StdPeriph_Driver/src/stm32f4xx_gpio.d \
./StdPeriph_Driver/src/stm32f4xx_rcc.d \
./StdPeriph_Driver/src/stm32f4xx_rtc.d \
./StdPeriph_Driver/src/stm32f4xx_syscfg.d \
./StdPeriph_Driver/src/stm32f4xx_tim.d \
./StdPeriph_Driver/src/stm32f4xx_usart.d 


# Each subdirectory must supply rules for building sources it contributes
StdPeriph_Driver/src/%.o: ../StdPeriph_Driver/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -DSTM32 -DSTM32F4 -DSTM32F446RETx -DNUCLEO_F446RE -DSTM32F446xx -DUSE_STDPERIPH_DRIVER -I"/Users/kishwarkumar/Desktop/STM32_SIN/stm32_project/StdPeriph_Driver/inc" -I"/Users/kishwarkumar/Desktop/STM32_SIN/stm32_project/third_party/gemmlowp" -I"/Users/kishwarkumar/Desktop/STM32_SIN/stm32_project/third_party/flatbuffers/include" -I"/Users/kishwarkumar/Desktop/STM32_SIN/stm32_project/tensorflow/tensorflow" -I"/Users/kishwarkumar/Desktop/STM32_SIN/stm32_project/tensorflow" -I"/Users/kishwarkumar/Desktop/STM32_SIN/stm32_project/third_party/flatbuffers/include" -I"/Users/kishwarkumar/Desktop/STM32_SIN/stm32_project/third_party/ruy" -I"/Users/kishwarkumar/Desktop/STM32_SIN/stm32_project/inc" -I"/Users/kishwarkumar/Desktop/STM32_SIN/stm32_project/CMSIS/device" -I"/Users/kishwarkumar/Desktop/STM32_SIN/stm32_project/CMSIS/core" -O3 -Wall -fmessage-length=0 -ffunction-sections -c -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


