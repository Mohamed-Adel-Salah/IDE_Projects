################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../MCAL/SYSTICK/SYSTICK_prog.c 

OBJS += \
./MCAL/SYSTICK/SYSTICK_prog.o 

C_DEPS += \
./MCAL/SYSTICK/SYSTICK_prog.d 


# Each subdirectory must supply rules for building sources it contributes
MCAL/SYSTICK/%.o MCAL/SYSTICK/%.su MCAL/SYSTICK/%.cyclo: ../MCAL/SYSTICK/%.c MCAL/SYSTICK/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F3 -DSTM32F303RETx -DNUCLEO_F303RE -c -I../Inc -I"C:/Users/hp/Desktop/NTI/ARM COTS/LIBs" -I"C:/Users/hp/Desktop/NTI/ARM COTS/MCAL/RCC" -I"C:/Users/hp/Desktop/NTI/ARM COTS/MCAL/DIO" -I"C:/Users/hp/Desktop/NTI/ARM COTS/HAL/LCD_KIT" -I"C:/Users/hp/Desktop/NTI/ARM COTS/HAL/KEYBAD" -I"C:/Users/hp/Desktop/NTI/ARM COTS/MCAL/NVIC" -I"C:/Users/hp/Desktop/NTI/ARM COTS/MCAL/EXTI0" -I"C:/Users/hp/Desktop/NTI/ARM COTS/MCAL/SYSTICK" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-MCAL-2f-SYSTICK

clean-MCAL-2f-SYSTICK:
	-$(RM) ./MCAL/SYSTICK/SYSTICK_prog.cyclo ./MCAL/SYSTICK/SYSTICK_prog.d ./MCAL/SYSTICK/SYSTICK_prog.o ./MCAL/SYSTICK/SYSTICK_prog.su

.PHONY: clean-MCAL-2f-SYSTICK

