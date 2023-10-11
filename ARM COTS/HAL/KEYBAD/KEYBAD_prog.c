/*
 * KEYBAD_prog.c
 *
 *  Created on: Jul 24, 2023
 *      Author: hp
 */


#include "STD_Types.h"
#include "Macros.h"

#include "DIO_int.h"
#include "DIO_priv.h"

#include "KEYBAD_int.h"
#include "KEYBAD_confg.h"


void KEYBAD_voidInitialization(void)
{
	DIO_voidSetPinDirection(KEYPAD_ROW_Port,KEYPAD_ROW_Pin1,Input_Pull_Up_Mode);
	DIO_voidSetPinDirection(KEYPAD_ROW_Port,KEYPAD_ROW_Pin2,Input_Pull_Up_Mode);
	DIO_voidSetPinDirection(KEYPAD_ROW_Port,KEYPAD_ROW_Pin3,Input_Pull_Up_Mode);
	DIO_voidSetPinDirection(KEYPAD_ROW_Port,KEYPAD_ROW_Pin4,Input_Pull_Up_Mode);

	DIO_voidSetPinValue(KEYPAD_ROW_Port,KEYPAD_ROW_Pin1,High);
	DIO_voidSetPinValue(KEYPAD_ROW_Port,KEYPAD_ROW_Pin2,High);
	DIO_voidSetPinValue(KEYPAD_ROW_Port,KEYPAD_ROW_Pin3,High);
	DIO_voidSetPinValue(KEYPAD_ROW_Port,KEYPAD_ROW_Pin4,High);




	DIO_voidSetPinDirection(KEYPAD_COL_Port,KEYPAD_COL_Pin1,Output_Push_Pull_Mode);
	DIO_voidSetPinDirection(KEYPAD_COL_Port,KEYPAD_COL_Pin2,Output_Push_Pull_Mode);
	DIO_voidSetPinDirection(KEYPAD_COL_Port,KEYPAD_COL_Pin3,Output_Push_Pull_Mode);
	DIO_voidSetPinDirection(KEYPAD_COL_Port,KEYPAD_COL_Pin4,Output_Push_Pull_Mode);

	DIO_voidSetPinValue(KEYPAD_COL_Port,KEYPAD_COL_Pin1,High);
	DIO_voidSetPinValue(KEYPAD_COL_Port,KEYPAD_COL_Pin2,High);
	DIO_voidSetPinValue(KEYPAD_COL_Port,KEYPAD_COL_Pin3,High);
	DIO_voidSetPinValue(KEYPAD_COL_Port,KEYPAD_COL_Pin4,High);

	//return;
}

void KEYBAD_voidGetPressedKey(u8 *Row, u8 *Col,u8 *Flag)
{
	for(u8 i=0;i<5;i++)
	{
		if(i==1)
		{	continue;	}

		DIO_voidSetPortValueMask(PortD,~(1<<(i+3)),0x17);

		for(u8 j=0;j<4;j++)
		{
			if(!DIO_u8GetPinValue(PortC,j+2))
			{
				*Row=3-j;
				*Col=4-i;

				*Flag=1;
			}
		}
	}

	DIO_voidSetPortValueMask(PortD,0xFF,0x17);

	return;
}



