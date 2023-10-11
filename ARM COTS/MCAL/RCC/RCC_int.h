/*
 * RCC_int.h
 *
 *  Created on: Aug 11, 2023
 *      Author: hp
 */

#ifndef RCC_INT_H_
#define RCC_INT_H_

#define 	AHB			0
#define 	APB1		1
#define 	APB2		2

#define IOPAEN 17
#define IOPBEN 18
#define IOPCEN 19
#define IOPDEN 20
#define IOPEEN 21
#define IOPFEN 22
#define IOPGEN 23
#define IOPHEN 16

//#define APB1 1
//#define APB2 2

void	RCC_voidSysClkInit(void);
void	RCC_voidPerClkEn(u8 BusID, u8 PerId);
void	RCC_voidPerClkDis(u8 BusID, u8 PerId);

#endif /* RCC_INT_H_ */
