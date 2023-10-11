/*
 * EXTI0_prog.c
 *
 *  Created on: Aug 13, 2023
 *      Author: hp
 */

#include "STD_Types.h"
#include "Macros.h"

#include "DIO_int.h"

#include "EXTI0_int.h"
#include "EXTI0_priv.h"
#include "EXTI0_confg.h"


void EXTI_voidInitialization(void)
{
#ifndef	SYSCFG_EXTICR4
#define	SYSCFG_EXTICR4		*((volatile u32 *)(0x40010014))
#endif

	SYSCFG_EXTICR4 = (Port_Line_C<<4);
}

void EXTI_voidSetSenseMode(u8 Sense_Mode, u8 Line)
{
	switch(Sense_Mode)
	{
		case Sense_Mode_RisingEdge: SET_BIT(EXTI->RTSR1,Line);break;
		case Sense_Mode_FallingEdge: SET_BIT(EXTI->FTSR1,Line);break;
		case Sense_Mode_AnyChange: SET_BIT(EXTI->FTSR1,Line);SET_BIT(EXTI->RTSR1,Line);break;
	}
}

void EXTI_voidLineEnable(u8 Line)
{
	SET_BIT(EXTI->IMR1,Line);
}

void EXTI_voidClrInterruptFlag(u8 Line)
{
	SET_BIT(EXTI->PR1,Line);
}













