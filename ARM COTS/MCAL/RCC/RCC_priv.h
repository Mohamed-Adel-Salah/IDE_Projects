/*
 * RCC_priv.h
 *
 *  Created on: Aug 11, 2023
 *      Author: hp
 */

#ifndef RCC_PRIV_H_
#define RCC_PRIV_H_

#define			RCC_BASE_ADD	(0x40021000)

#define			RCC_CR					*((volatile u32 *)(RCC_BASE_ADD + 0x00))

#define HSION 0
#define HSEON 16
#define PLLON 24

#define			RCC_CFGR				*((volatile u32 *)(RCC_BASE_ADD + 0x04))

#define SW0 0
#define SW1 1

#define			RCC_CIR					*((volatile u32 *)(RCC_BASE_ADD + 0x08))
#define			RCC_APB2RSTR			*((volatile u32 *)(RCC_BASE_ADD + 0x0C))
#define			RCC_APB1RSTR			*((volatile u32 *)(RCC_BASE_ADD + 0x10))
#define			RCC_AHBENR				*((volatile u32 *)(RCC_BASE_ADD + 0x14))
#define			RCC_APB2ENR				*((volatile u32 *)(RCC_BASE_ADD + 0x18))
#define			RCC_APB1ENR				*((volatile u32 *)(RCC_BASE_ADD + 0x1C))

#endif /* RCC_PRIV_H_ */
