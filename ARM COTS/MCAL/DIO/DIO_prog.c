/*
 * DIO_prog.c
 *
 *  Created on: Aug 11, 2023
 *      Author: hp
 */


#include "STD_Types.h"
#include "Macros.h"

#include "DIO_int.h"
#include "DIO_priv.h"

void DIO_voidInitialization(void)
{
//	SET_BIT(PORTA_MODER,10);
//	CLR_BIT(PORTA_MODER,11);
//
//	SET_BIT(PORTA_ODR,5);

	DIO_voidSetPinDirection(PortA, Pin5, Output_Push_Pull_Mode);
	DIO_voidSetPinValue(PortA, Pin5, High);

	DIO_voidSetPinDirection(PortC, Pin13, Input_Pull_Up_Mode);
}


void DIO_voidSetPinDirection(u8 PortID, u8 PinID, u8 Direction_Mode)
{
	switch(PortID)
	{
		case PortA:	switch(Direction_Mode)
					{
						case Input_Float_Mode: 				CLR_BIT(PORTA_MODER,(PinID*2));
															CLR_BIT(PORTA_MODER,((PinID*2)+1));
															CLR_BIT(PORTA_PUPDR,(PinID*2));
															CLR_BIT(PORTA_PUPDR,((PinID*2)+1));
															break;
						case Input_Pull_Up_Mode: 			CLR_BIT(PORTA_MODER,(PinID*2));
															CLR_BIT(PORTA_MODER,((PinID*2)+1));
															SET_BIT(PORTA_PUPDR,(PinID*2));
															CLR_BIT(PORTA_PUPDR,((PinID*2)+1));
															break;
						case Input_Pull_Down_Mode:			CLR_BIT(PORTA_MODER,(PinID*2));
															CLR_BIT(PORTA_MODER,((PinID*2)+1));
															CLR_BIT(PORTA_PUPDR,(PinID*2));
															SET_BIT(PORTA_PUPDR,((PinID*2)+1));
															break;
						case Output_Open_Drain_Mode: 		SET_BIT(PORTA_MODER,(PinID*2));
															CLR_BIT(PORTA_MODER,((PinID*2)+1));
															SET_BIT(PORTA_OTYPER,PinID);
															break;
						case Output_Push_Pull_Mode: 		SET_BIT(PORTA_MODER,(PinID*2));
															CLR_BIT(PORTA_MODER,((PinID*2)+1));
															CLR_BIT(PORTA_OTYPER,PinID);
															break;
						case Alturnate_Open_Drain_Mode:		CLR_BIT(PORTA_MODER,(PinID*2));
															SET_BIT(PORTA_MODER,((PinID*2)+1));
															SET_BIT(PORTA_OTYPER,PinID);
															break;
						case Alturnate_Push_Pull_Mode:		CLR_BIT(PORTA_MODER,(PinID*2));
															SET_BIT(PORTA_MODER,((PinID*2)+1));
															CLR_BIT(PORTA_OTYPER,PinID);
															break;
						case Analog_Mode:					SET_BIT(PORTA_MODER,(PinID*2));
															SET_BIT(PORTA_MODER,((PinID*2)+1));
															break;
					}break;
		case PortB:	switch(Direction_Mode)
					{
						case Input_Float_Mode: 				CLR_BIT(PORTB_MODER,(PinID*2));
															CLR_BIT(PORTB_MODER,((PinID*2)+1));
															CLR_BIT(PORTB_PUPDR,(PinID*2));
															CLR_BIT(PORTB_PUPDR,((PinID*2)+1));
															break;
						case Input_Pull_Up_Mode: 			CLR_BIT(PORTB_MODER,(PinID*2));
															CLR_BIT(PORTB_MODER,((PinID*2)+1));
															SET_BIT(PORTB_PUPDR,(PinID*2));
															CLR_BIT(PORTB_PUPDR,((PinID*2)+1));
															break;
						case Input_Pull_Down_Mode:			CLR_BIT(PORTB_MODER,(PinID*2));
															CLR_BIT(PORTB_MODER,((PinID*2)+1));
															CLR_BIT(PORTB_PUPDR,(PinID*2));
															SET_BIT(PORTB_PUPDR,((PinID*2)+1));
															break;
						case Output_Open_Drain_Mode: 		SET_BIT(PORTB_MODER,(PinID*2));
															CLR_BIT(PORTB_MODER,((PinID*2)+1));
															SET_BIT(PORTB_OTYPER,PinID);
															break;
						case Output_Push_Pull_Mode: 		SET_BIT(PORTB_MODER,(PinID*2));
															CLR_BIT(PORTB_MODER,((PinID*2)+1));
															CLR_BIT(PORTB_OTYPER,PinID);
															break;
						case Alturnate_Open_Drain_Mode:		CLR_BIT(PORTB_MODER,(PinID*2));
															SET_BIT(PORTB_MODER,((PinID*2)+1));
															SET_BIT(PORTB_OTYPER,PinID);
															break;
						case Alturnate_Push_Pull_Mode:		CLR_BIT(PORTB_MODER,(PinID*2));
															SET_BIT(PORTB_MODER,((PinID*2)+1));
															CLR_BIT(PORTB_OTYPER,PinID);
															break;
						case Analog_Mode:					SET_BIT(PORTB_MODER,(PinID*2));
															SET_BIT(PORTB_MODER,((PinID*2)+1));
															break;
					}break;
		case PortC:	switch(Direction_Mode)
					{
						case Input_Float_Mode: 				CLR_BIT(PORTC_MODER,(PinID*2));
															CLR_BIT(PORTC_MODER,((PinID*2)+1));
															CLR_BIT(PORTC_PUPDR,(PinID*2));
															CLR_BIT(PORTC_PUPDR,((PinID*2)+1));
															break;
						case Input_Pull_Up_Mode: 			CLR_BIT(PORTC_MODER,(PinID*2));
															CLR_BIT(PORTC_MODER,((PinID*2)+1));
															SET_BIT(PORTC_PUPDR,(PinID*2));
															CLR_BIT(PORTC_PUPDR,((PinID*2)+1));
															break;
						case Input_Pull_Down_Mode:			CLR_BIT(PORTC_MODER,(PinID*2));
															CLR_BIT(PORTC_MODER,((PinID*2)+1));
															CLR_BIT(PORTC_PUPDR,(PinID*2));
															SET_BIT(PORTC_PUPDR,((PinID*2)+1));
															break;
						case Output_Open_Drain_Mode: 		SET_BIT(PORTC_MODER,(PinID*2));
															CLR_BIT(PORTC_MODER,((PinID*2)+1));
															SET_BIT(PORTC_OTYPER,PinID);
															break;
						case Output_Push_Pull_Mode: 		SET_BIT(PORTC_MODER,(PinID*2));
															CLR_BIT(PORTC_MODER,((PinID*2)+1));
															CLR_BIT(PORTC_OTYPER,PinID);
															break;
						case Alturnate_Open_Drain_Mode:		CLR_BIT(PORTC_MODER,(PinID*2));
															SET_BIT(PORTC_MODER,((PinID*2)+1));
															SET_BIT(PORTC_OTYPER,PinID);
															break;
						case Alturnate_Push_Pull_Mode:		CLR_BIT(PORTC_MODER,(PinID*2));
															SET_BIT(PORTC_MODER,((PinID*2)+1));
															CLR_BIT(PORTC_OTYPER,PinID);
															break;
						case Analog_Mode:					SET_BIT(PORTC_MODER,(PinID*2));
															SET_BIT(PORTC_MODER,((PinID*2)+1));
															break;
					}break;
		case PortD:	switch(Direction_Mode)
					{
						case Input_Float_Mode: 				CLR_BIT(PORTD_MODER,(PinID*2));
															CLR_BIT(PORTD_MODER,((PinID*2)+1));
															CLR_BIT(PORTD_PUPDR,(PinID*2));
															CLR_BIT(PORTD_PUPDR,((PinID*2)+1));
															break;
						case Input_Pull_Up_Mode: 			CLR_BIT(PORTD_MODER,(PinID*2));
															CLR_BIT(PORTD_MODER,((PinID*2)+1));
															SET_BIT(PORTD_PUPDR,(PinID*2));
															CLR_BIT(PORTD_PUPDR,((PinID*2)+1));
															break;
						case Input_Pull_Down_Mode:			CLR_BIT(PORTD_MODER,(PinID*2));
															CLR_BIT(PORTD_MODER,((PinID*2)+1));
															CLR_BIT(PORTD_PUPDR,(PinID*2));
															SET_BIT(PORTD_PUPDR,((PinID*2)+1));
															break;
						case Output_Open_Drain_Mode: 		SET_BIT(PORTD_MODER,(PinID*2));
															CLR_BIT(PORTD_MODER,((PinID*2)+1));
															SET_BIT(PORTD_OTYPER,PinID);
															break;
						case Output_Push_Pull_Mode: 		SET_BIT(PORTD_MODER,(PinID*2));
															CLR_BIT(PORTD_MODER,((PinID*2)+1));
															CLR_BIT(PORTD_OTYPER,PinID);
															break;
						case Alturnate_Open_Drain_Mode:		CLR_BIT(PORTD_MODER,(PinID*2));
															SET_BIT(PORTD_MODER,((PinID*2)+1));
															SET_BIT(PORTD_OTYPER,PinID);
															break;
						case Alturnate_Push_Pull_Mode:		CLR_BIT(PORTD_MODER,(PinID*2));
															SET_BIT(PORTD_MODER,((PinID*2)+1));
															CLR_BIT(PORTD_OTYPER,PinID);
															break;
						case Analog_Mode:					SET_BIT(PORTD_MODER,(PinID*2));
															SET_BIT(PORTD_MODER,((PinID*2)+1));
															break;
					}break;
		case PortE:	switch(Direction_Mode)
					{
						case Input_Float_Mode: 				CLR_BIT(PORTE_MODER,(PinID*2));
															CLR_BIT(PORTE_MODER,((PinID*2)+1));
															CLR_BIT(PORTE_PUPDR,(PinID*2));
															CLR_BIT(PORTE_PUPDR,((PinID*2)+1));
															break;
						case Input_Pull_Up_Mode: 			CLR_BIT(PORTE_MODER,(PinID*2));
															CLR_BIT(PORTE_MODER,((PinID*2)+1));
															SET_BIT(PORTE_PUPDR,(PinID*2));
															CLR_BIT(PORTE_PUPDR,((PinID*2)+1));
															break;
						case Input_Pull_Down_Mode:			CLR_BIT(PORTE_MODER,(PinID*2));
															CLR_BIT(PORTE_MODER,((PinID*2)+1));
															CLR_BIT(PORTE_PUPDR,(PinID*2));
															SET_BIT(PORTE_PUPDR,((PinID*2)+1));
															break;
						case Output_Open_Drain_Mode: 		SET_BIT(PORTE_MODER,(PinID*2));
															CLR_BIT(PORTE_MODER,((PinID*2)+1));
															SET_BIT(PORTE_OTYPER,PinID);
															break;
						case Output_Push_Pull_Mode: 		SET_BIT(PORTE_MODER,(PinID*2));
															CLR_BIT(PORTE_MODER,((PinID*2)+1));
															CLR_BIT(PORTE_OTYPER,PinID);
															break;
						case Alturnate_Open_Drain_Mode:		CLR_BIT(PORTE_MODER,(PinID*2));
															SET_BIT(PORTE_MODER,((PinID*2)+1));
															SET_BIT(PORTE_OTYPER,PinID);
															break;
						case Alturnate_Push_Pull_Mode:		CLR_BIT(PORTE_MODER,(PinID*2));
															SET_BIT(PORTE_MODER,((PinID*2)+1));
															CLR_BIT(PORTE_OTYPER,PinID);
															break;
						case Analog_Mode:					SET_BIT(PORTE_MODER,(PinID*2));
															SET_BIT(PORTE_MODER,((PinID*2)+1));
															break;
					}break;
		case PortF:	switch(Direction_Mode)
					{
						case Input_Float_Mode: 				CLR_BIT(PORTF_MODER,(PinID*2));
															CLR_BIT(PORTF_MODER,((PinID*2)+1));
															CLR_BIT(PORTF_PUPDR,(PinID*2));
															CLR_BIT(PORTF_PUPDR,((PinID*2)+1));
															break;
						case Input_Pull_Up_Mode: 			CLR_BIT(PORTF_MODER,(PinID*2));
															CLR_BIT(PORTF_MODER,((PinID*2)+1));
															SET_BIT(PORTF_PUPDR,(PinID*2));
															CLR_BIT(PORTF_PUPDR,((PinID*2)+1));
															break;
						case Input_Pull_Down_Mode:			CLR_BIT(PORTF_MODER,(PinID*2));
															CLR_BIT(PORTF_MODER,((PinID*2)+1));
															CLR_BIT(PORTF_PUPDR,(PinID*2));
															SET_BIT(PORTF_PUPDR,((PinID*2)+1));
															break;
						case Output_Open_Drain_Mode: 		SET_BIT(PORTF_MODER,(PinID*2));
															CLR_BIT(PORTF_MODER,((PinID*2)+1));
															SET_BIT(PORTF_OTYPER,PinID);
															break;
						case Output_Push_Pull_Mode: 		SET_BIT(PORTF_MODER,(PinID*2));
															CLR_BIT(PORTF_MODER,((PinID*2)+1));
															CLR_BIT(PORTF_OTYPER,PinID);
															break;
						case Alturnate_Open_Drain_Mode:		CLR_BIT(PORTF_MODER,(PinID*2));
															SET_BIT(PORTF_MODER,((PinID*2)+1));
															SET_BIT(PORTF_OTYPER,PinID);
															break;
						case Alturnate_Push_Pull_Mode:		CLR_BIT(PORTF_MODER,(PinID*2));
															SET_BIT(PORTF_MODER,((PinID*2)+1));
															CLR_BIT(PORTF_OTYPER,PinID);
															break;
						case Analog_Mode:					SET_BIT(PORTF_MODER,(PinID*2));
															SET_BIT(PORTF_MODER,((PinID*2)+1));
															break;
					}break;
		case PortG:	switch(Direction_Mode)
					{
						case Input_Float_Mode: 				CLR_BIT(PORTG_MODER,(PinID*2));
															CLR_BIT(PORTG_MODER,((PinID*2)+1));
															CLR_BIT(PORTG_PUPDR,(PinID*2));
															CLR_BIT(PORTG_PUPDR,((PinID*2)+1));
															break;
						case Input_Pull_Up_Mode: 			CLR_BIT(PORTG_MODER,(PinID*2));
															CLR_BIT(PORTG_MODER,((PinID*2)+1));
															SET_BIT(PORTG_PUPDR,(PinID*2));
															CLR_BIT(PORTG_PUPDR,((PinID*2)+1));
															break;
						case Input_Pull_Down_Mode:			CLR_BIT(PORTG_MODER,(PinID*2));
															CLR_BIT(PORTG_MODER,((PinID*2)+1));
															CLR_BIT(PORTG_PUPDR,(PinID*2));
															SET_BIT(PORTG_PUPDR,((PinID*2)+1));
															break;
						case Output_Open_Drain_Mode: 		SET_BIT(PORTG_MODER,(PinID*2));
															CLR_BIT(PORTG_MODER,((PinID*2)+1));
															SET_BIT(PORTG_OTYPER,PinID);
															break;
						case Output_Push_Pull_Mode: 		SET_BIT(PORTG_MODER,(PinID*2));
															CLR_BIT(PORTG_MODER,((PinID*2)+1));
															CLR_BIT(PORTG_OTYPER,PinID);
															break;
						case Alturnate_Open_Drain_Mode:		CLR_BIT(PORTG_MODER,(PinID*2));
															SET_BIT(PORTG_MODER,((PinID*2)+1));
															SET_BIT(PORTG_OTYPER,PinID);
															break;
						case Alturnate_Push_Pull_Mode:		CLR_BIT(PORTG_MODER,(PinID*2));
															SET_BIT(PORTG_MODER,((PinID*2)+1));
															CLR_BIT(PORTG_OTYPER,PinID);
															break;
						case Analog_Mode:					SET_BIT(PORTG_MODER,(PinID*2));
															SET_BIT(PORTG_MODER,((PinID*2)+1));
															break;
					}break;
		case PortH:	switch(Direction_Mode)
					{
						case Input_Float_Mode: 				CLR_BIT(PORTH_MODER,(PinID*2));
															CLR_BIT(PORTH_MODER,((PinID*2)+1));
															CLR_BIT(PORTH_PUPDR,(PinID*2));
															CLR_BIT(PORTH_PUPDR,((PinID*2)+1));
															break;
						case Input_Pull_Up_Mode: 			CLR_BIT(PORTH_MODER,(PinID*2));
															CLR_BIT(PORTH_MODER,((PinID*2)+1));
															SET_BIT(PORTH_PUPDR,(PinID*2));
															CLR_BIT(PORTH_PUPDR,((PinID*2)+1));
															break;
						case Input_Pull_Down_Mode:			CLR_BIT(PORTH_MODER,(PinID*2));
															CLR_BIT(PORTH_MODER,((PinID*2)+1));
															CLR_BIT(PORTH_PUPDR,(PinID*2));
															SET_BIT(PORTH_PUPDR,((PinID*2)+1));
															break;
						case Output_Open_Drain_Mode: 		SET_BIT(PORTH_MODER,(PinID*2));
															CLR_BIT(PORTH_MODER,((PinID*2)+1));
															SET_BIT(PORTH_OTYPER,PinID);
															break;
						case Output_Push_Pull_Mode: 		SET_BIT(PORTH_MODER,(PinID*2));
															CLR_BIT(PORTH_MODER,((PinID*2)+1));
															CLR_BIT(PORTH_OTYPER,PinID);
															break;
						case Alturnate_Open_Drain_Mode:		CLR_BIT(PORTH_MODER,(PinID*2));
															SET_BIT(PORTH_MODER,((PinID*2)+1));
															SET_BIT(PORTH_OTYPER,PinID);
															break;
						case Alturnate_Push_Pull_Mode:		CLR_BIT(PORTH_MODER,(PinID*2));
															SET_BIT(PORTH_MODER,((PinID*2)+1));
															CLR_BIT(PORTH_OTYPER,PinID);
															break;
						case Analog_Mode:					SET_BIT(PORTH_MODER,(PinID*2));
															SET_BIT(PORTH_MODER,((PinID*2)+1));
															break;
					}break;
	}
}

void DIO_voidSetPinValue(u8 PortID, u8 PinID, u8 Value)
{
	switch(PortID)
	{
		case PortA:	(Value)?SET_BIT(PORTA_ODR,PinID):CLR_BIT(PORTA_ODR,PinID);break;
		case PortB:	(Value)?SET_BIT(PORTB_ODR,PinID):CLR_BIT(PORTB_ODR,PinID);break;
		case PortC:	(Value)?SET_BIT(PORTC_ODR,PinID):CLR_BIT(PORTC_ODR,PinID);break;
		case PortD:	(Value)?SET_BIT(PORTD_ODR,PinID):CLR_BIT(PORTD_ODR,PinID);break;
		case PortE:	(Value)?SET_BIT(PORTE_ODR,PinID):CLR_BIT(PORTE_ODR,PinID);break;
		case PortF:	(Value)?SET_BIT(PORTF_ODR,PinID):CLR_BIT(PORTF_ODR,PinID);break;
		case PortG:	(Value)?SET_BIT(PORTG_ODR,PinID):CLR_BIT(PORTG_ODR,PinID);break;
		case PortH:	(Value)?SET_BIT(PORTH_ODR,PinID):CLR_BIT(PORTH_ODR,PinID);break;
	}
}

void DIO_voidTogPinValue(u8 PortID, u8 PinID)
{
	switch(PortID)
	{
		case PortA:	TOG_BIT(PORTA_ODR,PinID);break;
		case PortB:	TOG_BIT(PORTB_ODR,PinID);break;
		case PortC:	TOG_BIT(PORTC_ODR,PinID);break;
		case PortD:	TOG_BIT(PORTD_ODR,PinID);break;
		case PortE:	TOG_BIT(PORTE_ODR,PinID);break;
		case PortF:	TOG_BIT(PORTF_ODR,PinID);break;
		case PortG:	TOG_BIT(PORTG_ODR,PinID);break;
		case PortH:	TOG_BIT(PORTH_ODR,PinID);break;
	}
}

u8 DIO_u8GetPinValue(u8 PortID, u8 PinID)
{
	switch(PortID)
	{
		case PortA:	return GET_BIT(PORTA_IDR,PinID);
		case PortB:	return GET_BIT(PORTB_IDR,PinID);
		case PortC:	return GET_BIT(PORTC_IDR,PinID);
		case PortD:	return GET_BIT(PORTD_IDR,PinID);
		case PortE:	return GET_BIT(PORTE_IDR,PinID);
		case PortF:	return GET_BIT(PORTF_IDR,PinID);
		case PortG:	return GET_BIT(PORTG_IDR,PinID);
		case PortH:	return GET_BIT(PORTH_IDR,PinID);
	}
}

void DIO_voidSetPortValueMask(u8 PortId,u8 Value,u8 Mask)
{
	switch(PortId)
	{
		case PortA: PORTA_ODR=((Value)|(PORTA_ODR & Mask)); break;
		case PortB: PORTB_ODR=((Value)|(PORTB_ODR & Mask)); break;
		case PortC: PORTC_ODR=((Value)|(PORTC_ODR & Mask)); break;
		case PortD: PORTD_ODR=((Value)|(PORTD_ODR & Mask)); break;
		case PortE: PORTE_ODR=((Value)|(PORTE_ODR & Mask)); break;
		case PortF: PORTF_ODR=((Value)|(PORTF_ODR & Mask)); break;
		case PortG: PORTG_ODR=((Value)|(PORTG_ODR & Mask)); break;
		case PortH: PORTH_ODR=((Value)|(PORTH_ODR & Mask)); break;
	}
}
