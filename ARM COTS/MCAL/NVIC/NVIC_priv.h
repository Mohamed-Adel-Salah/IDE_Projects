/*
 * NVIC_priv.h
 *
 *  Created on: Aug 13, 2023
 *      Author: hp
 */

#ifndef NVIC_NVIC_PRIV_H_
#define NVIC_NVIC_PRIV_H_

#define  GROUP_16_SUB_0      0x05FA0300      //4 Bit For Group And 0 Bit For SubPriority
#define  GROUP_8_SUB_2       0x05FA0400      //3 Bit For Group And 1 Bit For SubPriority
#define  GROUP_4_SUB_4       0x05FA0500      //2 Bit For Group And 2 Bit For SubPriority
#define  GROUP_2_SUB_8       0x05FA0600      //1 Bit For Group And 3 Bit For SubPriority
#define  GROUP_0_SUB_16      0x05FA0700      //0 Bit For Group And 4 Bit For SubPriority

#define 	NVIC_ISER	((volatile u32*)(0xE000E100))
#define 	NVIC_ICER	((volatile u32*)(0xE000E180))
#define 	NVIC_ISPR	((volatile u32*)(0xE000E200))
#define 	NVIC_ICPR	((volatile u32*)(0xE000E280))
#define 	NVIC_IABR	((volatile u32*)(0xE000E300))
#define 	NVIC_IPR	((volatile u8*)(0xE000E400))

#define		STIR		(*(volatile u32*)(0xE000EF00))

#endif /* NVIC_NVIC_PRIV_H_ */
