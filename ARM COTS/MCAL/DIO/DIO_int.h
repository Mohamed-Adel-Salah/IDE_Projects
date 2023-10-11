/*
 * DIO_int.h
 *
 *  Created on: Aug 11, 2023
 *      Author: hp
 */

#ifndef DIO_INT_H_
#define DIO_INT_H_

void DIO_voidInitialization(void);

void 	DIO_voidSetPinValue(u8 PortID, u8 PinID, u8 Value);
void 	DIO_voidSetPinDirection(u8 PortID, u8 PinID, u8 Direction_Mode);
void 	DIO_voidTogPinValue(u8 PortID, u8 PinID);
u8 		DIO_u8GetPinValue(u8 PortID, u8 PinID);
void	DIO_voidSetPortValueMask(u8 PortId,u8 Value,u8 Mask);

#endif /* DIO_INT_H_ */
