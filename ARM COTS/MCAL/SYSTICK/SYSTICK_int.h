/*
 * SYSTICK_int.h
 *
 *  Created on: Aug 14, 2023
 *      Author: hp
 */

#ifndef SYSTICK_SYSTICK_INT_H_
#define SYSTICK_SYSTICK_INT_H_

void SYSTICK_voidInitializatio(void);
void SYSTICK_voidInterruptEnable(void);
void SYSTICK_voidInterruptDisable(void);
void SYSTICK_voidSetReloadValue(u32 Reload_Value);


#endif /* SYSTICK_SYSTICK_INT_H_ */
