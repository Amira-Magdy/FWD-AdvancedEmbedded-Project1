/* FILE NAME:	Mcu_Hw.h
 * AUTHOR: Amira_Magdy_Mohamed
 * DATE:	20/9/2022
 * COMMENT:	This header file contains Registers definition
 */

#ifndef MCU_HW_H
#define MCU_HW_H

/*  Includes  */

#include "Std_Types.h"

/************************************
    Base Addresses
************************************/
 
#define 	SYSTEM_CONTROL_BASE				0x400FE000
#define 	M4_PERI_BASE_ADDRESS			0xE000E000
#if 1

/************************************
  GLOBAL DATA TYPES AND STRUCTURES
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

typedef struct
{
	u32		R0			:1;
	u32		R1			:1;
	u32		R2			:1;
	u32		R3			:1;
	u32		R4			:1;
	u32		R5			:1;
	u32 				:26;
}RCGCWTIMER_BF;

typedef union 
{
	u32 R;
	RCGCWTIMER_BF B;
}RCGCWTIMER_Tag;


typedef struct
{
	u8		B0			:1;
	u8		B1			:1;
	u8		B2			:1;
	u8		B3			:1;
	u8		B4			:1;
	u8		B5			:1;
	u8		B6			:1;
	u8		B7			:1;
}u8_BF;

typedef union 
{
	u8 R;
	u8_BF B;
}u8_Tag;

typedef struct
{
	u32 B0    	:1;
	u32 B1    	:1;
	u32 B2    	:1;
	u32 B3    	:1;
	u32 B4    	:1;
	u32 B5    	:1;
	u32 B6    	:1;
	u32 B7    	:1;
	u32 B8    	:1;
	u32 B9    	:1;
	u32 B10    	:1;
	u32 B11    	:1;
	u32 B12    	:1;
	u32 B13    	:1;
	u32 B14    	:1;
	u32 B15    	:1;
	u32 B16    	:1;
	u32 B17    	:1;
	u32 B18    	:1;
	u32 B19    	:1;
	u32 B20    	:1;
	u32 B21    	:1;
	u32 B22    	:1;
	u32 B23    	:1;
	u32 B24    	:1;
	u32 B25    	:1;
	u32 B26    	:1;
	u32 B27    	:1;
	u32 B28    	:1;
	u32 B29    	:1;
	u32 B30    	:1;
	u32 B31    	:1;
	u32 B32    	:1;	
} u32_BF;

typedef union
{
	u32 R;
	u32_BF B;
} u32_Tag ;


/************************************
   GLOBAL FUNCTIONS PROTOTYPES
************************************/

#define 	BASE_ADDRESS(PORTx)				(PORTx<4 ? (0x40004000 + (PORTx*0x1000)) : (0x40024000 + (PORTx-4)*0x1000))

#define 	GPIOLOCK(PORTx)					(*( volatile u32*)( (BASE_ADDRESS(PORTx))+ 0x520 ) )
#define 	GPIOCR(PORTx)					(*( volatile u8*) ( (BASE_ADDRESS(PORTx))+ 0x524 ) )
#define 	GPIODEN(PORTx)					(*( volatile u8*) ( (BASE_ADDRESS(PORTx))+ 0x51C ) )
#define 	GPIOAFSEL(PORTx)				(*( volatile u8*) (  BASE_ADDRESS(PORTx) + 0x420 ) )
#define 	GPIODIR(PORTx)					(*( volatile u32*)(  BASE_ADDRESS(PORTx) + 0x400 ) )
#define 	GPIOPUR(PORTx)					(*( volatile u32*)(  BASE_ADDRESS(PORTx) + 0x510 ) )
#define 	GPIOODR(PORTx)					(*( volatile u32*)(  BASE_ADDRESS(PORTx) + 0x50C ) )
#define 	GPIOPDR(PORTx)					(*( volatile u32*)(  BASE_ADDRESS(PORTx) + 0x514 ) )
#define 	GPIOPCTL(PORTx)					(*( volatile u32*)(  BASE_ADDRESS(PORTx) + 0x52C ) )
#define 	GPIODATA(PORTx)					(*( volatile u8_Tag*)(  BASE_ADDRESS(PORTx) + 0x3FC ) )

/************************************
   GLOBAL CONSTANT MACROS
************************************/
#define RCC							(*(volatile RCC_Tag*)		(SYSTEM_CONTROL_BASE + 0x060) )
#define RCC2						(*(volatile RCC2_Tag*)		(SYSTEM_CONTROL_BASE + 0x070) )
#define	RCGC2						(*(volatile RCGC2_Tag*)		(SYSTEM_CONTROL_BASE + 0x108) )
#define PLLSTAT						(*(volatile PLLSTAT_Tag*) 	(SYSTEM_CONTROL_BASE + 0x168) )
#define RCGCGPIO					(*(volatile RCGCGPIO_Tag*)	(SYSTEM_CONTROL_BASE + 0x608) )
#define RCGCWTIMER					(*(volatile RCGCWTIMER_Tag*)(SYSTEM_CONTROL_BASE + 0x65C) )
#define RCGCTIMER					(*(volatile RCGCWTIMER_Tag*)(SYSTEM_CONTROL_BASE + 0x604) )

#endif


/*************************************
    GPIO Registers
 ************************************/
#if 1

#define 	INTCTRL						(*(volatile INTCTRL_Tag*)( M4_PERI_BASE_ADDRESS + 0xD04) )

#endif





/**********************************************************************************************************************
 *  GPT Registers
 *********************************************************************************************************************/
#if 1	

#define		RCGC1


#endif


/**
*Port Initiatlization Configurations 2D Array
**/







#endif