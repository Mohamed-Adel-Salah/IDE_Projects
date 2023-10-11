################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Free\ RTOS/croutine.c \
../Free\ RTOS/event_groups.c \
../Free\ RTOS/heap_1.c \
../Free\ RTOS/list.c \
../Free\ RTOS/mpu_wrappers.c \
../Free\ RTOS/port.c \
../Free\ RTOS/queue.c \
../Free\ RTOS/regtest.c \
../Free\ RTOS/stream_buffer.c \
../Free\ RTOS/tasks.c \
../Free\ RTOS/timers.c 

OBJS += \
./Free\ RTOS/croutine.o \
./Free\ RTOS/event_groups.o \
./Free\ RTOS/heap_1.o \
./Free\ RTOS/list.o \
./Free\ RTOS/mpu_wrappers.o \
./Free\ RTOS/port.o \
./Free\ RTOS/queue.o \
./Free\ RTOS/regtest.o \
./Free\ RTOS/stream_buffer.o \
./Free\ RTOS/tasks.o \
./Free\ RTOS/timers.o 

C_DEPS += \
./Free\ RTOS/croutine.d \
./Free\ RTOS/event_groups.d \
./Free\ RTOS/heap_1.d \
./Free\ RTOS/list.d \
./Free\ RTOS/mpu_wrappers.d \
./Free\ RTOS/port.d \
./Free\ RTOS/queue.d \
./Free\ RTOS/regtest.d \
./Free\ RTOS/stream_buffer.d \
./Free\ RTOS/tasks.d \
./Free\ RTOS/timers.d 


# Each subdirectory must supply rules for building sources it contributes
Free\ RTOS/croutine.o: ../Free\ RTOS/croutine.c Free\ RTOS/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"C:\Users\hp\Desktop\NTI\TEST\LIB" -I"C:\Users\hp\Desktop\NTI\TEST\MCAL\DIO" -I"C:\Users\hp\Desktop\NTI\TEST\MCAL\GIE" -I"C:\Users\hp\Desktop\NTI\TEST\MCAL\I2C" -I"C:\Users\hp\Desktop\NTI\TEST\Free RTOS" -I"C:\Users\hp\Desktop\NTI\TEST\MCAL\ADC" -I"C:\Users\hp\Desktop\NTI\TEST\HAL\LCD_KIT" -I"C:\Users\hp\Desktop\NTI\TEST\HAL\KEYBAD" -Wall -g2 -gstabs -Os -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"Free RTOS/croutine.d" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Free\ RTOS/event_groups.o: ../Free\ RTOS/event_groups.c Free\ RTOS/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"C:\Users\hp\Desktop\NTI\TEST\LIB" -I"C:\Users\hp\Desktop\NTI\TEST\MCAL\DIO" -I"C:\Users\hp\Desktop\NTI\TEST\MCAL\GIE" -I"C:\Users\hp\Desktop\NTI\TEST\MCAL\I2C" -I"C:\Users\hp\Desktop\NTI\TEST\Free RTOS" -I"C:\Users\hp\Desktop\NTI\TEST\MCAL\ADC" -I"C:\Users\hp\Desktop\NTI\TEST\HAL\LCD_KIT" -I"C:\Users\hp\Desktop\NTI\TEST\HAL\KEYBAD" -Wall -g2 -gstabs -Os -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"Free RTOS/event_groups.d" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Free\ RTOS/heap_1.o: ../Free\ RTOS/heap_1.c Free\ RTOS/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"C:\Users\hp\Desktop\NTI\TEST\LIB" -I"C:\Users\hp\Desktop\NTI\TEST\MCAL\DIO" -I"C:\Users\hp\Desktop\NTI\TEST\MCAL\GIE" -I"C:\Users\hp\Desktop\NTI\TEST\MCAL\I2C" -I"C:\Users\hp\Desktop\NTI\TEST\Free RTOS" -I"C:\Users\hp\Desktop\NTI\TEST\MCAL\ADC" -I"C:\Users\hp\Desktop\NTI\TEST\HAL\LCD_KIT" -I"C:\Users\hp\Desktop\NTI\TEST\HAL\KEYBAD" -Wall -g2 -gstabs -Os -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"Free RTOS/heap_1.d" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Free\ RTOS/list.o: ../Free\ RTOS/list.c Free\ RTOS/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"C:\Users\hp\Desktop\NTI\TEST\LIB" -I"C:\Users\hp\Desktop\NTI\TEST\MCAL\DIO" -I"C:\Users\hp\Desktop\NTI\TEST\MCAL\GIE" -I"C:\Users\hp\Desktop\NTI\TEST\MCAL\I2C" -I"C:\Users\hp\Desktop\NTI\TEST\Free RTOS" -I"C:\Users\hp\Desktop\NTI\TEST\MCAL\ADC" -I"C:\Users\hp\Desktop\NTI\TEST\HAL\LCD_KIT" -I"C:\Users\hp\Desktop\NTI\TEST\HAL\KEYBAD" -Wall -g2 -gstabs -Os -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"Free RTOS/list.d" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Free\ RTOS/mpu_wrappers.o: ../Free\ RTOS/mpu_wrappers.c Free\ RTOS/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"C:\Users\hp\Desktop\NTI\TEST\LIB" -I"C:\Users\hp\Desktop\NTI\TEST\MCAL\DIO" -I"C:\Users\hp\Desktop\NTI\TEST\MCAL\GIE" -I"C:\Users\hp\Desktop\NTI\TEST\MCAL\I2C" -I"C:\Users\hp\Desktop\NTI\TEST\Free RTOS" -I"C:\Users\hp\Desktop\NTI\TEST\MCAL\ADC" -I"C:\Users\hp\Desktop\NTI\TEST\HAL\LCD_KIT" -I"C:\Users\hp\Desktop\NTI\TEST\HAL\KEYBAD" -Wall -g2 -gstabs -Os -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"Free RTOS/mpu_wrappers.d" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Free\ RTOS/port.o: ../Free\ RTOS/port.c Free\ RTOS/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"C:\Users\hp\Desktop\NTI\TEST\LIB" -I"C:\Users\hp\Desktop\NTI\TEST\MCAL\DIO" -I"C:\Users\hp\Desktop\NTI\TEST\MCAL\GIE" -I"C:\Users\hp\Desktop\NTI\TEST\MCAL\I2C" -I"C:\Users\hp\Desktop\NTI\TEST\Free RTOS" -I"C:\Users\hp\Desktop\NTI\TEST\MCAL\ADC" -I"C:\Users\hp\Desktop\NTI\TEST\HAL\LCD_KIT" -I"C:\Users\hp\Desktop\NTI\TEST\HAL\KEYBAD" -Wall -g2 -gstabs -Os -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"Free RTOS/port.d" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Free\ RTOS/queue.o: ../Free\ RTOS/queue.c Free\ RTOS/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"C:\Users\hp\Desktop\NTI\TEST\LIB" -I"C:\Users\hp\Desktop\NTI\TEST\MCAL\DIO" -I"C:\Users\hp\Desktop\NTI\TEST\MCAL\GIE" -I"C:\Users\hp\Desktop\NTI\TEST\MCAL\I2C" -I"C:\Users\hp\Desktop\NTI\TEST\Free RTOS" -I"C:\Users\hp\Desktop\NTI\TEST\MCAL\ADC" -I"C:\Users\hp\Desktop\NTI\TEST\HAL\LCD_KIT" -I"C:\Users\hp\Desktop\NTI\TEST\HAL\KEYBAD" -Wall -g2 -gstabs -Os -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"Free RTOS/queue.d" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Free\ RTOS/regtest.o: ../Free\ RTOS/regtest.c Free\ RTOS/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"C:\Users\hp\Desktop\NTI\TEST\LIB" -I"C:\Users\hp\Desktop\NTI\TEST\MCAL\DIO" -I"C:\Users\hp\Desktop\NTI\TEST\MCAL\GIE" -I"C:\Users\hp\Desktop\NTI\TEST\MCAL\I2C" -I"C:\Users\hp\Desktop\NTI\TEST\Free RTOS" -I"C:\Users\hp\Desktop\NTI\TEST\MCAL\ADC" -I"C:\Users\hp\Desktop\NTI\TEST\HAL\LCD_KIT" -I"C:\Users\hp\Desktop\NTI\TEST\HAL\KEYBAD" -Wall -g2 -gstabs -Os -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"Free RTOS/regtest.d" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Free\ RTOS/stream_buffer.o: ../Free\ RTOS/stream_buffer.c Free\ RTOS/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"C:\Users\hp\Desktop\NTI\TEST\LIB" -I"C:\Users\hp\Desktop\NTI\TEST\MCAL\DIO" -I"C:\Users\hp\Desktop\NTI\TEST\MCAL\GIE" -I"C:\Users\hp\Desktop\NTI\TEST\MCAL\I2C" -I"C:\Users\hp\Desktop\NTI\TEST\Free RTOS" -I"C:\Users\hp\Desktop\NTI\TEST\MCAL\ADC" -I"C:\Users\hp\Desktop\NTI\TEST\HAL\LCD_KIT" -I"C:\Users\hp\Desktop\NTI\TEST\HAL\KEYBAD" -Wall -g2 -gstabs -Os -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"Free RTOS/stream_buffer.d" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Free\ RTOS/tasks.o: ../Free\ RTOS/tasks.c Free\ RTOS/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"C:\Users\hp\Desktop\NTI\TEST\LIB" -I"C:\Users\hp\Desktop\NTI\TEST\MCAL\DIO" -I"C:\Users\hp\Desktop\NTI\TEST\MCAL\GIE" -I"C:\Users\hp\Desktop\NTI\TEST\MCAL\I2C" -I"C:\Users\hp\Desktop\NTI\TEST\Free RTOS" -I"C:\Users\hp\Desktop\NTI\TEST\MCAL\ADC" -I"C:\Users\hp\Desktop\NTI\TEST\HAL\LCD_KIT" -I"C:\Users\hp\Desktop\NTI\TEST\HAL\KEYBAD" -Wall -g2 -gstabs -Os -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"Free RTOS/tasks.d" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Free\ RTOS/timers.o: ../Free\ RTOS/timers.c Free\ RTOS/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"C:\Users\hp\Desktop\NTI\TEST\LIB" -I"C:\Users\hp\Desktop\NTI\TEST\MCAL\DIO" -I"C:\Users\hp\Desktop\NTI\TEST\MCAL\GIE" -I"C:\Users\hp\Desktop\NTI\TEST\MCAL\I2C" -I"C:\Users\hp\Desktop\NTI\TEST\Free RTOS" -I"C:\Users\hp\Desktop\NTI\TEST\MCAL\ADC" -I"C:\Users\hp\Desktop\NTI\TEST\HAL\LCD_KIT" -I"C:\Users\hp\Desktop\NTI\TEST\HAL\KEYBAD" -Wall -g2 -gstabs -Os -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"Free RTOS/timers.d" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


