################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/CMSIS/DSP/Examples/ARM/arm_dotproduct_example/arm_dotproduct_example_f32.c 

C_DEPS += \
./Drivers/CMSIS/DSP/Examples/ARM/arm_dotproduct_example/arm_dotproduct_example_f32.d 

OBJS += \
./Drivers/CMSIS/DSP/Examples/ARM/arm_dotproduct_example/arm_dotproduct_example_f32.o 


# Each subdirectory must supply rules for building sources it contributes
Drivers/CMSIS/DSP/Examples/ARM/arm_dotproduct_example/%.o Drivers/CMSIS/DSP/Examples/ARM/arm_dotproduct_example/%.su Drivers/CMSIS/DSP/Examples/ARM/arm_dotproduct_example/%.cyclo: ../Drivers/CMSIS/DSP/Examples/ARM/arm_dotproduct_example/%.c Drivers/CMSIS/DSP/Examples/ARM/arm_dotproduct_example/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F407xx -c -I../../Core/Inc -I../../FATFS/Target -I../../FATFS/App -I../../Drivers/STM32F4xx_HAL_Driver/Inc -I../../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../../Middlewares/Third_Party/FatFs/src -I../../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Drivers-2f-CMSIS-2f-DSP-2f-Examples-2f-ARM-2f-arm_dotproduct_example

clean-Drivers-2f-CMSIS-2f-DSP-2f-Examples-2f-ARM-2f-arm_dotproduct_example:
	-$(RM) ./Drivers/CMSIS/DSP/Examples/ARM/arm_dotproduct_example/arm_dotproduct_example_f32.cyclo ./Drivers/CMSIS/DSP/Examples/ARM/arm_dotproduct_example/arm_dotproduct_example_f32.d ./Drivers/CMSIS/DSP/Examples/ARM/arm_dotproduct_example/arm_dotproduct_example_f32.o ./Drivers/CMSIS/DSP/Examples/ARM/arm_dotproduct_example/arm_dotproduct_example_f32.su

.PHONY: clean-Drivers-2f-CMSIS-2f-DSP-2f-Examples-2f-ARM-2f-arm_dotproduct_example

