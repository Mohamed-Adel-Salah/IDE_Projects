################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../MCAL/EXTI0/EXTI0_prog.c 

OBJS += \
./MCAL/EXTI0/EXTI0_prog.o 

C_DEPS += \
./MCAL/EXTI0/EXTI0_prog.d 


# Each subdirectory must supply rules for building sources it contributes
MCAL/EXTI0/%.o MCAL/EXTI0/%.su MCAL/EXTI0/%.cyclo: ../MCAL/EXTI0/%.c MCAL/EXTI0/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F3 -DSTM32F303RETx -DNUCLEO_F303RE -c -I../Inc -I"C:/Users/hp/Desktop/NTI/ARM COTS/LIBs" -I"C:/Users/hp/Desktop/NTI/ARM COTS/MCAL/RCC" -I"C:/Users/hp/Desktop/NTI/ARM COTS/MCAL/DIO" -I"C:/Users/hp/Desktop/NTI/ARM COTS/HAL/LCD_KIT" -I"C:/Users/hp/Desktop/NTI/ARM COTS/HAL/KEYBAD" -I"C:/Users/hp/Desktop/NTI/ARM COTS/MCAL/NVIC" -I"C:/Users/hp/Desktop/NTI/ARM COTS/MCAL/EXTI0" -I"C:/Users/hp/Desktop/NTI/ARM COTS/MCAL/SYSTICK" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-MCAL-2f-EXTI0

clean-MCAL-2f-EXTI0:
	-$(RM) ./MCAL/EXTI0/EXTI0_prog.cyclo ./MCAL/EXTI0/EXTI0_prog.d ./MCAL/EXTI0/EXTI0_prog.o ./MCAL/EXTI0/EXTI0_prog.su

.PHONY: clean-MCAL-2f-EXTI0

