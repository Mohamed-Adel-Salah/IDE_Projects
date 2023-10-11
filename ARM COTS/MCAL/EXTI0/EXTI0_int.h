/*
 * EXTI0_int.h
 *
 *  Created on: Aug 13, 2023
 *      Author: hp
 */

#ifndef EXTI0_EXTI0_INT_H_
#define EXTI0_EXTI0_INT_H_

void EXTI_voidInitialization(void);
void EXTI_voidSetSenseMode(u8 Sense_Mode, u8 Line);
void EXTI_voidLineEnable(u8 Line);

void EXTI_voidClrInterruptFlag(u8 Line);

#endif /* EXTI0_EXTI0_INT_H_ */
