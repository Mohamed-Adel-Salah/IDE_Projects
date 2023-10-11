/*
 * SYSTICK_prog.c
 *
 *  Created on: Aug 14, 2023
 *      Author: hp
 */

#include "STD_Types.h"
#include "Macros.h"

#include "DIO_int.h"

#include "SYSTICK_int.h"
#include "SYSTICK_priv.h"


void SYSTICK_voidInitializatio(void)
{
	SET_BIT(STK->CTRL,SYSTICK_Enable);
	CLR_BIT(STK->CTRL,SYSTICK_CLK_Source);
}

void SYSTICK_voidInterruptEnable(void)
{
	SET_BIT(STK->CTRL,SYSTICK_Int_E);
}

void SYSTICK_voidInterruptDisable(void)
{
	CLR_BIT(STK->CTRL,SYSTICK_Int_E);
}

void SYSTICK_voidSetReloadValue(u32 Reload_Value)
{
	STK->LOAD = Reload_Value;
}

void (* SYSTICK_PTR)(void);
void SYSTICK_CallBack(void (*SYSTICK_CallBack_PTR)(void))
{
	SYSTICK_PTR = SYSTICK_CallBack_PTR;
}

void  SysTick_Handler()
{
	SYSTICK_PTR();
}




