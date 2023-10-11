/*
 * NVIC_prog.c
 *
 *  Created on: Aug 13, 2023
 *      Author: hp
 */

#include "STD_Types.h"
#include "Macros.h"

#include "DIO_int.h"

#include "NVIC_int.h"
#include "NVIC_priv.h"
#include "NVIC_confg.h"

void NVIC_voidInit(void)
{
#ifndef SCB_AIRCR
#define SCB_AIRCR		(*(volatile u32*)(0xE000ED0C))
#endif

	SCB_AIRCR = NUM_OF_GRP_SUB;
}

void NVIC_voidEnableInterrupt(u8 InterruptNum)
{
	if(InterruptNum<32)
	{
		NVIC_ISER[0] = (1<<InterruptNum);
	}
	else if(InterruptNum<64)
	{
		NVIC_ISER[1] = (1<<(InterruptNum-32));
	}
	else if(InterruptNum<84)
	{
		NVIC_ISER[2] = (1<<(InterruptNum-64));
	}
}

void NVIC_voidDisableInterrupt(u8 InterruptNum)
{
	if(InterruptNum<32)
	{
		NVIC_ICER[0] = (1<<InterruptNum);
	}
	else if(InterruptNum<64)
	{
		NVIC_ICER[1] = (1<<(InterruptNum-32));
	}
	else if(InterruptNum<84)
	{
		NVIC_ICER[2] = (1<<(InterruptNum-64));
	}
}

void NVIC_voidSetPendingFlag(u8 InterruptNum)
{
	if(InterruptNum<32)
	{
		NVIC_ISPR[0] = (1<<InterruptNum);
	}
	else if(InterruptNum<64)
	{
		NVIC_ISPR[1] = (1<<(InterruptNum-32));
	}
	else if(InterruptNum<84)
	{
		NVIC_ISPR[2] = (1<<(InterruptNum-64));
	}
}

void NVIC_voidClrPendingFlag(u8 InterruptNum)
{
	if(InterruptNum<32)
	{
		NVIC_ICPR[0] = (1<<InterruptNum);
	}
	else if(InterruptNum<64)
	{
		NVIC_ICPR[1] = (1<<(InterruptNum-32));
	}
	else if(InterruptNum<84)
	{
		NVIC_ICPR[2] = (1<<(InterruptNum-64));
	}
}

u8 	 NVIC_u8ActiveFlag(u8 InterruptNum)
{
	if(InterruptNum<32)
	{
		return GET_BIT(NVIC_IABR[0],InterruptNum);
	}
	else if(InterruptNum<64)
	{
		return GET_BIT(NVIC_IABR[1],(InterruptNum-32));
	}
	else if(InterruptNum<84)
	{
		return GET_BIT(NVIC_IABR[2],(InterruptNum-64));
	}

	return 0;
}

void NVIC_voidSetPriority(u8 InterruptNum,u8 priority)
{
	NVIC_IPR[InterruptNum] = (priority<<4);
}
