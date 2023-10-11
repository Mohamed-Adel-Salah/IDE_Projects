/*
 * SYSTICK_priv.h
 *
 *  Created on: Aug 14, 2023
 *      Author: hp
 */

#ifndef SYSTICK_SYSTICK_PRIV_H_
#define SYSTICK_SYSTICK_PRIV_H_

typedef struct
{
	volatile u32 CTRL;
	volatile u32 LOAD;
	volatile u32 VAL;

}SYSTICK_TYPE;

#define 	STK		((SYSTICK_TYPE *)(0xE000E010))

#define 	SYSTICK_Enable			0
#define 	SYSTICK_Int_E			1
#define 	SYSTICK_CLK_Source		2
#define 	SYSTICK_Count_Flag		16


#endif /* SYSTICK_SYSTICK_PRIV_H_ */
