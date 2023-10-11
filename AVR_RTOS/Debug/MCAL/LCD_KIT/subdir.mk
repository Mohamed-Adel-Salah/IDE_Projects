################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../MCAL/LCD_KIT/LCD_KIT_prog.c 

OBJS += \
./MCAL/LCD_KIT/LCD_KIT_prog.o 

C_DEPS += \
./MCAL/LCD_KIT/LCD_KIT_prog.d 


# Each subdirectory must supply rules for building sources it contributes
MCAL/LCD_KIT/%.o: ../MCAL/LCD_KIT/%.c MCAL/LCD_KIT/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"C:\Users\hp\Desktop\NTI\TEST\LIB" -I"C:\Users\hp\Desktop\NTI\TEST\MCAL\DIO" -I"C:\Users\hp\Desktop\NTI\TEST\MCAL\GIE" -I"C:\Users\hp\Desktop\NTI\TEST\MCAL\I2C" -I"C:\Users\hp\Desktop\NTI\TEST\MCAL\LCD_KIT" -I"C:\Users\hp\Desktop\NTI\TEST\Free RTOS" -I"C:\Users\hp\Desktop\NTI\TEST\MCAL\ADC" -Wall -g2 -gstabs -Os -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


