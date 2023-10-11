/*
 * DIO_priv.h
 *
 *  Created on: Aug 11, 2023
 *      Author: hp
 */

#ifndef DIO_PRIV_H_
#define DIO_PRIV_H_

#define 	PortA				0
#define 	PortB				1
#define 	PortC				2
#define 	PortD				3
#define 	PortE				4
#define 	PortF				5
#define 	PortG				6
#define 	PortH				7

#define 	Pin0				0
#define 	Pin1				1
#define 	Pin2				2
#define 	Pin3				3
#define 	Pin4				4
#define 	Pin5				5
#define 	Pin6				6
#define 	Pin7				7
#define 	Pin8				8
#define 	Pin9				9
#define 	Pin10				10
#define 	Pin11				11
#define 	Pin12				12
#define 	Pin13				13
#define 	Pin14				14
#define 	Pin15				15

#define 	High				1
#define 	Low					0

#define 	Input_Float_Mode				0
#define 	Input_Pull_Up_Mode				1
#define 	Input_Pull_Down_Mode			2
#define 	Output_Push_Pull_Mode			3
#define 	Output_Open_Drain_Mode			4
#define 	Alturnate_Push_Pull_Mode		5
#define 	Alturnate_Open_Drain_Mode		6
#define 	Analog_Mode						7

#define 	PORTA_BaseAddress	(0x48000000)
#define 	PORTB_BaseAddress	(0x48000400)
#define 	PORTC_BaseAddress	(0x48000800)
#define 	PORTD_BaseAddress	(0x48000C00)
#define 	PORTE_BaseAddress	(0x48001000)
#define 	PORTF_BaseAddress	(0x48001400)
#define 	PORTG_BaseAddress	(0x48001800)
#define 	PORTH_BaseAddress	(0x48001C00)

#define 	PORTA_MODER			*((volatile u32 *)(PORTA_BaseAddress + 0x00))

#define 	PORTA_OTYPER		*((volatile u32 *)(PORTA_BaseAddress + 0x04))
#define 	PORTA_OSPEEDR		*((volatile u32 *)(PORTA_BaseAddress + 0x08))
#define 	PORTA_PUPDR			*((volatile u32 *)(PORTA_BaseAddress + 0x0C))
#define 	PORTA_IDR			*((volatile u32 *)(PORTA_BaseAddress + 0x10))
#define 	PORTA_ODR			*((volatile u32 *)(PORTA_BaseAddress + 0x14))

#define 	PORTB_MODER			*((volatile u32 *)(PORTB_BaseAddress + 0x00))

#define 	PORTB_OTYPER		*((volatile u32 *)(PORTB_BaseAddress + 0x04))
#define 	PORTB_OSPEEDR		*((volatile u32 *)(PORTB_BaseAddress + 0x08))
#define 	PORTB_PUPDR			*((volatile u32 *)(PORTB_BaseAddress + 0x0C))
#define 	PORTB_IDR			*((volatile u32 *)(PORTB_BaseAddress + 0x10))
#define 	PORTB_ODR			*((volatile u32 *)(PORTB_BaseAddress + 0x14))


#define 	PORTC_MODER			*((volatile u32 *)(PORTC_BaseAddress + 0x00))

#define 	PORTC_OTYPER		*((volatile u32 *)(PORTC_BaseAddress + 0x04))
#define 	PORTC_OSPEEDR		*((volatile u32 *)(PORTC_BaseAddress + 0x08))
#define 	PORTC_PUPDR			*((volatile u32 *)(PORTC_BaseAddress + 0x0C))
#define 	PORTC_IDR			*((volatile u32 *)(PORTC_BaseAddress + 0x10))
#define 	PORTC_ODR			*((volatile u32 *)(PORTC_BaseAddress + 0x14))


#define 	PORTD_MODER			*((volatile u32 *)(PORTD_BaseAddress + 0x00))

#define 	PORTD_OTYPER		*((volatile u32 *)(PORTD_BaseAddress + 0x04))
#define 	PORTD_OSPEEDR		*((volatile u32 *)(PORTD_BaseAddress + 0x08))
#define 	PORTD_PUPDR			*((volatile u32 *)(PORTD_BaseAddress + 0x0C))
#define 	PORTD_IDR			*((volatile u32 *)(PORTD_BaseAddress + 0x10))
#define 	PORTD_ODR			*((volatile u32 *)(PORTD_BaseAddress + 0x14))


#define 	PORTE_MODER			*((volatile u32 *)(PORTE_BaseAddress + 0x00))

#define 	PORTE_OTYPER		*((volatile u32 *)(PORTE_BaseAddress + 0x04))
#define 	PORTE_OSPEEDR		*((volatile u32 *)(PORTE_BaseAddress + 0x08))
#define 	PORTE_PUPDR			*((volatile u32 *)(PORTE_BaseAddress + 0x0C))
#define 	PORTE_IDR			*((volatile u32 *)(PORTE_BaseAddress + 0x10))
#define 	PORTE_ODR			*((volatile u32 *)(PORTE_BaseAddress + 0x14))


#define 	PORTF_MODER			*((volatile u32 *)(PORTF_BaseAddress + 0x00))

#define 	PORTF_OTYPER		*((volatile u32 *)(PORTF_BaseAddress + 0x04))
#define 	PORTF_OSPEEDR		*((volatile u32 *)(PORTF_BaseAddress + 0x08))
#define 	PORTF_PUPDR			*((volatile u32 *)(PORTF_BaseAddress + 0x0C))
#define 	PORTF_IDR			*((volatile u32 *)(PORTF_BaseAddress + 0x10))
#define 	PORTF_ODR			*((volatile u32 *)(PORTF_BaseAddress + 0x14))


#define 	PORTG_MODER			*((volatile u32 *)(PORTG_BaseAddress + 0x00))

#define 	PORTG_OTYPER		*((volatile u32 *)(PORTG_BaseAddress + 0x04))
#define 	PORTG_OSPEEDR		*((volatile u32 *)(PORTG_BaseAddress + 0x08))
#define 	PORTG_PUPDR			*((volatile u32 *)(PORTG_BaseAddress + 0x0C))
#define 	PORTG_IDR			*((volatile u32 *)(PORTG_BaseAddress + 0x10))
#define 	PORTG_ODR			*((volatile u32 *)(PORTG_BaseAddress + 0x14))


#define 	PORTH_MODER			*((volatile u32 *)(PORTH_BaseAddress + 0x00))

#define 	PORTH_OTYPER		*((volatile u32 *)(PORTH_BaseAddress + 0x04))
#define 	PORTH_OSPEEDR		*((volatile u32 *)(PORTH_BaseAddress + 0x08))
#define 	PORTH_PUPDR			*((volatile u32 *)(PORTH_BaseAddress + 0x0C))
#define 	PORTH_IDR			*((volatile u32 *)(PORTH_BaseAddress + 0x10))
#define 	PORTH_ODR			*((volatile u32 *)(PORTH_BaseAddress + 0x14))


#endif /* DIO_PRIV_H_ */
