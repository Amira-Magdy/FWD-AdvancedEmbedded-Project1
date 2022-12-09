/*
 * FILE NAME:	PORT_Pri.h
 * AUTHOR: Amira_Magdy_Mohamed
 * DATE:	20/9/2022
 * COMMENT:	contains Registers definition
 */

#ifndef PORT_PRI_H
#define PORT_PRI_H


/*  Includes  */

#include "Std_Types.h"

/************************************
    Base Addresses
************************************/

#define 	SYSTEM_CONTROL_BASE				0x400FE000
#define 	M4_PERI_BASE_ADDRESS			0xE000E000

/************************************
  GLOBAL DATA TYPES & STRUCTURES MACROS
************************************/
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

typedef union 
{
	u32 R;
}u32_Tag;

/************************************
   GLOBAL FUNCTION MACROS
************************************/
#define 	BASE_ADDRESS(PORTx)				(PORTx<4 ? (0x40004000 + (PORTx*0x1000)) : (0x40024000 + (PORTx-4)*0x1000))

#define 	GPIOLOCK(PORTx)					(*( volatile u32*)( (BASE_ADDRESS(PORTx))+ 0x520 ) )
#define 	GPIOCR(PORTx)					(*( volatile u32*) ( (BASE_ADDRESS(PORTx))+ 0x524 ) )
#define 	GPIODEN(PORTx)					(*( volatile u32*) ( (BASE_ADDRESS(PORTx))+ 0x51C ) )
#define 	GPIOAFSEL(PORTx)				(*( volatile u32*) (  BASE_ADDRESS(PORTx) + 0x420 ) )
#define 	GPIODIR(PORTx)					(*( volatile u32*)(  BASE_ADDRESS(PORTx) + 0x400 ) )
#define 	GPIOPUR(PORTx)					(*( volatile u32*)(  BASE_ADDRESS(PORTx) + 0x510 ) )
#define 	GPIOODR(PORTx)					(*( volatile u32*)(  BASE_ADDRESS(PORTx) + 0x50C ) )
#define 	GPIOPDR(PORTx)					(*( volatile u32*)(  BASE_ADDRESS(PORTx) + 0x514 ) )
#define 	GPIOPCTL(PORTx)					(*( volatile u32*)(  BASE_ADDRESS(PORTx) + 0x52C ) )
#define 	GPIODATA(PORTx)					(*( volatile u32_Tag*)(  BASE_ADDRESS(PORTx) + 0x3FC ) )


/************************************
   GLOBAL CONSTANT MACROS
************************************/
#define RCGCGPIO					(*(volatile RCGCGPIO_Tag*)	(SYSTEM_CONTROL_BASE + 0x608) )
#define	RCGC2						(*(volatile RCGC2_Tag*)		(SYSTEM_CONTROL_BASE + 0x108) )

#endif	