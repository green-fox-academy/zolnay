################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Users/zolnay0/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/BSP/Components/otm8009a/otm8009a.c 

OBJS += \
./Drivers/BSP/Components/otm8009a/otm8009a.o 

C_DEPS += \
./Drivers/BSP/Components/otm8009a/otm8009a.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/BSP/Components/otm8009a/otm8009a.o: C:/Users/zolnay0/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/BSP/Components/otm8009a/otm8009a.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F746xx -DDEBUG -c -IC:/Users/zolnay0/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Inc -IC:/Users/zolnay0/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/CMSIS/Include -IC:/Users/zolnay0/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Middlewares/ST/STM32_USB_Host_Library/Class/CDC/Inc -IC:/Users/zolnay0/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -IC:/Users/zolnay0/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Middlewares/ST/STM32_USB_Host_Library/Core/Inc -IC:/Users/zolnay0/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/STM32F7xx_HAL_Driver/Inc -I"C:/Users/zolnay0/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/BSP/Components" -I"C:/Users/zolnay0/STM32Cube/Repository/STM32Cube_FW_F7_V1.15.0/Drivers/BSP/STM32746G-Discovery" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/BSP/Components/otm8009a/otm8009a.d" -MT"$@" --specs=nano.specs -mfpu=fpv5-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

