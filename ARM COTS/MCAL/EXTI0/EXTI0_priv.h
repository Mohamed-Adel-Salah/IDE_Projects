/*
 * EXTI0_priv.h
 *
 *  Created on: Aug 13, 2023
 *      Author: hp
 */

#ifndef EXTI0_EXTI0_PRIV_H_
#define EXTI0_EXTI0_PRIV_H_

#define Sense_Mode_RisingEdge		0
#define Sense_Mode_FallingEdge		1
#define Sense_Mode_AnyChange		2

#define Port_Line_A		0b0000
#define Port_Line_B		0b0001
#define Port_Line_C		0b0010
#define Port_Line_D		0b0011
#define Port_Line_E		0b0100
#define Port_Line_F		0b0101
#define Port_Line_G		0b0110

typedef struct
{
	volatile u32 IMR1;
	volatile u32 EMR1;
	volatile u32 RTSR1;
	volatile u32 FTSR1;
	volatile u32 SWIER1;
	volatile u32 PR1;
}EXTI_TYPE;

#define 	EXTI		((EXTI_TYPE *)(0x40010400))


#endif /* EXTI0_EXTI0_PRIV_H_ */
