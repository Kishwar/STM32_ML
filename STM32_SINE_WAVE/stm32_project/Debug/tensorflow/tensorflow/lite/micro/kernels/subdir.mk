################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CC_SRCS += \
../tensorflow/tensorflow/lite/micro/kernels/add.cc \
../tensorflow/tensorflow/lite/micro/kernels/all_ops_resolver.cc \
../tensorflow/tensorflow/lite/micro/kernels/conv.cc \
../tensorflow/tensorflow/lite/micro/kernels/depthwise_conv.cc \
../tensorflow/tensorflow/lite/micro/kernels/floor.cc \
../tensorflow/tensorflow/lite/micro/kernels/fully_connected.cc \
../tensorflow/tensorflow/lite/micro/kernels/l2norm.cc \
../tensorflow/tensorflow/lite/micro/kernels/logistic.cc \
../tensorflow/tensorflow/lite/micro/kernels/maximum_minimum.cc \
../tensorflow/tensorflow/lite/micro/kernels/mul.cc \
../tensorflow/tensorflow/lite/micro/kernels/pad.cc \
../tensorflow/tensorflow/lite/micro/kernels/prelu.cc \
../tensorflow/tensorflow/lite/micro/kernels/round.cc \
../tensorflow/tensorflow/lite/micro/kernels/softmax.cc \
../tensorflow/tensorflow/lite/micro/kernels/sub.cc 

CC_DEPS += \
./tensorflow/tensorflow/lite/micro/kernels/add.d \
./tensorflow/tensorflow/lite/micro/kernels/all_ops_resolver.d \
./tensorflow/tensorflow/lite/micro/kernels/conv.d \
./tensorflow/tensorflow/lite/micro/kernels/depthwise_conv.d \
./tensorflow/tensorflow/lite/micro/kernels/floor.d \
./tensorflow/tensorflow/lite/micro/kernels/fully_connected.d \
./tensorflow/tensorflow/lite/micro/kernels/l2norm.d \
./tensorflow/tensorflow/lite/micro/kernels/logistic.d \
./tensorflow/tensorflow/lite/micro/kernels/maximum_minimum.d \
./tensorflow/tensorflow/lite/micro/kernels/mul.d \
./tensorflow/tensorflow/lite/micro/kernels/pad.d \
./tensorflow/tensorflow/lite/micro/kernels/prelu.d \
./tensorflow/tensorflow/lite/micro/kernels/round.d \
./tensorflow/tensorflow/lite/micro/kernels/softmax.d \
./tensorflow/tensorflow/lite/micro/kernels/sub.d 

OBJS += \
./tensorflow/tensorflow/lite/micro/kernels/add.o \
./tensorflow/tensorflow/lite/micro/kernels/all_ops_resolver.o \
./tensorflow/tensorflow/lite/micro/kernels/conv.o \
./tensorflow/tensorflow/lite/micro/kernels/depthwise_conv.o \
./tensorflow/tensorflow/lite/micro/kernels/floor.o \
./tensorflow/tensorflow/lite/micro/kernels/fully_connected.o \
./tensorflow/tensorflow/lite/micro/kernels/l2norm.o \
./tensorflow/tensorflow/lite/micro/kernels/logistic.o \
./tensorflow/tensorflow/lite/micro/kernels/maximum_minimum.o \
./tensorflow/tensorflow/lite/micro/kernels/mul.o \
./tensorflow/tensorflow/lite/micro/kernels/pad.o \
./tensorflow/tensorflow/lite/micro/kernels/prelu.o \
./tensorflow/tensorflow/lite/micro/kernels/round.o \
./tensorflow/tensorflow/lite/micro/kernels/softmax.o \
./tensorflow/tensorflow/lite/micro/kernels/sub.o 


# Each subdirectory must supply rules for building sources it contributes
tensorflow/tensorflow/lite/micro/kernels/%.o: ../tensorflow/tensorflow/lite/micro/kernels/%.cc
	@echo 'Building file: $<'
	@echo 'Invoking: MCU G++ Compiler'
	@echo $(PWD)
	arm-none-eabi-g++ -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -DSTM32 -DSTM32F4 -DSTM32F446RETx -DNUCLEO_F446RE -DDEBUG -DSTM32F446xx -DUSE_STDPERIPH_DRIVER -I"/Users/kishwarkumar/Desktop/STM32_SIN/stm32_project/StdPeriph_Driver/inc" -I"/Users/kishwarkumar/Desktop/STM32_SIN/stm32_project/third_party/ruy" -I"/Users/kishwarkumar/Desktop/STM32_SIN/stm32_project/third_party/flatbuffers/include" -I"/Users/kishwarkumar/Desktop/STM32_SIN/stm32_project/third_party/flatbuffers" -I"/Users/kishwarkumar/Desktop/STM32_SIN/stm32_project/third_party" -I"/Users/kishwarkumar/Desktop/STM32_SIN/stm32_project/third_party/gemmlowp" -I"/Users/kishwarkumar/Desktop/STM32_SIN/stm32_project/tensorflow" -I"/Users/kishwarkumar/Desktop/STM32_SIN/stm32_project/tensorflow/tensorflow" -I"/Users/kishwarkumar/Desktop/STM32_SIN/stm32_project/inc" -I"/Users/kishwarkumar/Desktop/STM32_SIN/stm32_project/CMSIS/device" -I"/Users/kishwarkumar/Desktop/STM32_SIN/stm32_project/CMSIS/core" -O0 -g3 -Wall -fmessage-length=0 -ffunction-sections -c -fno-exceptions -fno-rtti -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


