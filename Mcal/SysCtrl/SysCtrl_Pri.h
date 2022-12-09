/*
 * FILE NAME:	SysCtrl_Pri.h
 * AUTHOR: Amira_Magdy_Mohamed
 * DATE:	20/9/2022
 * COMMENT:	contains Registers definition
 */

#ifndef SYSCTRL_PRI_H
#define SYSCTRL_PRI_H


 /*  Includes  */

#include "Std_Types.h"

/************************************
    Base Addresses
************************************/

#define 	SYSTEM_CONTROL_BASE				0x400FE000
#define 	M4_PERI_BASE_ADDRESS			0xE000E000

/************************************
  GLOBAL DATA TYPES AND STRUCTURES MACROS
************************************/
typedef struct
{
	u32 MOSCDIS			:1;
	u32 				:3;
	u32 OSCSRC			:2;
	u32 XTAL			:5;
	u32 BYPASS			:1;
	u32 				:1;
	u32 PWRDN			:1;
	u32					:3;
	u32 PWMDIV			:3;
	u32 USEPWMDIV		:1;
	u32 				:1;
	u32 USESYSDIV		:1;
	u32 SYSDIV			:4;
	u32 ACG				:1;
	u32 				:4;
}RCC_BF;

typedef union
{
	u32 	R;
	RCC_BF  B;
}RCC_Tag;

typedef struct
{
	u32 				:4;
	u32 OSCSRC2			:3;
	u32 				:4;
	u32 BYPASS2			:1;
	u32 				:1;
	u32 PWRDN2			:1;
	u32 USBPWRDN		:1;
	u32					:7;
	u32 SYSDIV2LSB		:1;
	u32 SYSDIV2			:6;
	u32 				:1;
	u32 DIV400			:1;
	u32 USERCC2			:1;
}RCC2_BF;

typedef union
{
	u32 	R;
	RCC2_BF  B;
}RCC2_Tag;

typedef struct
{
	u32		R0			:1;
	u32		R1			:1;
	u32		R2			:1;
	u32		R3			:1;
	u32		R4			:1;
	u32		R5			:1;
	u32 				:26;
}RCGCGPIO_BF;

typedef union 
{
	u32 R;
	RCGCGPIO_BF B;
}RCGCGPIO_Tag;


typedef struct 
{
	u32 GPIOA		:1;
	u32 GPIOB		:1;
	u32 GPIOC		:1;
	u32 GPIOD		:1;
	u32 GPIOE		:1;
	u32 GPIOF		:1;
	u32 			:7;
	u32 UDMA		:1;
	u32				:2;
	u32	USB0		:1;
	u32				:15;
}RCGC2_BF;
typedef union 
{
	u32 R;
	RCGC2_BF B;
}RCGC2_Tag;

typedef struct
{
	u32				:31;
	u32 LOCK		:1;
}PLLSTAT_BF;

typedef union
{
	PLLSTAT_BF  B;
}PLLSTAT_Tag;


/************************************
   GLOBAL CONSTANT MACROS
************************************/

#define RCC							(*(volatile RCC_Tag*)		(SYSTEM_CONTROL_BASE + 0x060) )
#define RCC2						(*(volatile RCC2_Tag*)		(SYSTEM_CONTROL_BASE + 0x070) )
#define	RCGC2						(*(volatile RCGC2_Tag*)		(SYSTEM_CONTROL_BASE + 0x108) )
#define PLLSTAT						(*(volatile PLLSTAT_Tag*) 	(SYSTEM_CONTROL_BASE + 0x168) )
#define RCGCGPIO					(*(volatile RCGCGPIO_Tag*)	(SYSTEM_CONTROL_BASE + 0x608) )

#endif