/*
 * RCC_prog.c
 *
 *  Created on: Aug 11, 2023
 *      Author: hp
 */

#include "STD_Types.h"
#include "Macros.h"

#include "../RCC/RCC_int.h"
#include "../RCC/RCC_priv.h"




void RCC_voidSysClkInit(void)
{
	// Enable all the clocks
	SET_BIT(RCC_CR,HSION);
	SET_BIT(RCC_CR,HSEON);
	SET_BIT(RCC_CR,PLLON);

	// Select internal clock
	CLR_BIT(RCC_CFGR,SW0);
	CLR_BIT(RCC_CFGR,SW1);
}

void RCC_voidPerClkEn(u8 BusID, u8 PerId)
{
	switch(BusID)
	{
	case AHB	: 	SET_BIT(RCC_AHBENR,PerId);break;
	case APB1	: 	SET_BIT(RCC_APB1ENR,PerId);break;
	case APB2	: 	SET_BIT(RCC_APB2ENR,PerId);break;
	}

//	switch(PerId)
//	{
//		case 16: SET_BIT(RCC_AHBENR,IOPHEN);break;
//		case 17: SET_BIT(RCC_AHBENR,IOPAEN);break;
//		case 18: SET_BIT(RCC_AHBENR,IOPBEN);break;
//		case 19: SET_BIT(RCC_AHBENR,IOPCEN);break;
//		case 20: SET_BIT(RCC_AHBENR,IOPDEN);break;
//		case 21: SET_BIT(RCC_AHBENR,IOPEEN);break;
//		case 22: SET_BIT(RCC_AHBENR,IOPFEN);break;
//		case 23: SET_BIT(RCC_AHBENR,IOPGEN);break;
//	}
}

void RCC_voidPerClkDis(u8 BusID, u8 PerId)
{
	switch(BusID)
	{
	case AHB	: 	CLR_BIT(RCC_AHBENR,PerId);break;
	case APB1	: 	CLR_BIT(RCC_APB1ENR,PerId);break;
	case APB2	: 	CLR_BIT(RCC_APB2ENR,PerId);break;

	}

//	switch(PerId)
//	{
//		case 16: CLR_BIT(RCC_AHBENR,IOPHEN);break;
//		case 17: CLR_BIT(RCC_AHBENR,IOPAEN);break;
//		case 18: CLR_BIT(RCC_AHBENR,IOPBEN);break;
//		case 19: CLR_BIT(RCC_AHBENR,IOPCEN);break;
//		case 20: CLR_BIT(RCC_AHBENR,IOPDEN);break;
//		case 21: CLR_BIT(RCC_AHBENR,IOPEEN);break;
//		case 22: CLR_BIT(RCC_AHBENR,IOPFEN);break;
//		case 23: CLR_BIT(RCC_AHBENR,IOPGEN);break;
//	}
}
