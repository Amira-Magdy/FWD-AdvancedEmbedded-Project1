/*
 * FILE NAME:	GPIO_Pri.h
 * AUTHOR: Amira_Magdy_Mohamed
 * DATE:	20/9/2022
 * COMMENT:	contains Registers definition
 */

#ifndef GPIO_PRI_H
#define GPIO_PRI_H

/*  Includes  */

#include "Std_Types.h"

/************************************
   GLOBAL DATA TYPES AND STRUCTURES
************************************/


typedef struct
{
	u32	PMC0	:4;
	u32	PMC1	:4;
	u32	PMC2	:4;
	u32	PMC3	:4;
	u32	PMC4	:4;
	u32	PMC5	:4;
	u32	PMC6	:4;
	u32	PMC7	:4;
}GPIOPCTL_BF;

typedef union
{
	u32 R;
	GPIOPCTL_BF B;
} GPIOPCTL_Tag;


/************************************
   GLOBAL CONSTANT MACROS
************************************/
#define 	GPIOA_APB_BASE_ADDRESS			0x40004000
#define 	GPIOB_APB_BASE_ADDRESS			0x40005000
#define 	GPIOC_APB_BASE_ADDRESS			0x40006000
#define 	GPIOD_APB_BASE_ADDRESS			0x40007000
#define 	GPIOE_APB_BASE_ADDRESS			0x40024000
#define 	GPIOF_APB_BASE_ADDRESS			0x40025000



#define 	GPIODATA_PA					(*( volatile u8*)(  GPIOA_APB_BASE_ADDRESS+ 0x000 +0x3FC ) )
#define 	GPIODATA_PB					(*( volatile u8*)(  GPIOB_APB_BASE_ADDRESS+ 0x000 +0x3FC ) )
#define 	GPIODATA_PC					(*( volatile u8*)(  GPIOC_APB_BASE_ADDRESS+ 0x000 +0x3FC ) )
#define 	GPIODATA_PD					(*( volatile u8*)(  GPIOD_APB_BASE_ADDRESS+ 0x000 +0x3FC ) )
#define 	GPIODATA_PE					(*( volatile u8*)(  GPIOE_APB_BASE_ADDRESS+ 0x000 +0x3FC ) )
#define 	GPIODATA_PF					(*( volatile u8*)(  GPIOF_APB_BASE_ADDRESS+ 0x000 +0x3FC ) )

#define 	GPIOLOCK_PA					(*( volatile u32*)(  GPIOA_APB_BASE_ADDRESS+ 0x520 ) )
#define 	GPIOLOCK_PB					(*( volatile u32*)(  GPIOB_APB_BASE_ADDRESS+ 0x520 ) )
#define 	GPIOLOCK_PC					(*( volatile u32*)(  GPIOC_APB_BASE_ADDRESS+ 0x520 ) )
#define 	GPIOLOCK_PD					(*( volatile u32*)(  GPIOD_APB_BASE_ADDRESS+ 0x520 ) )
#define 	GPIOLOCK_PE					(*( volatile u32*)(  GPIOE_APB_BASE_ADDRESS+ 0x520 ) )
#define 	GPIOLOCK_PF					(*( volatile u32*)(  GPIOF_APB_BASE_ADDRESS+ 0x520 ) )

#define 	GPIOPCTL_PA					(*( volatile GPIOPCTL_Tag*)(  GPIOA_APB_BASE_ADDRESS+ 0x52C ) )
#define 	GPIOPCTL_PB					(*( volatile GPIOPCTL_Tag*)(  GPIOB_APB_BASE_ADDRESS+ 0x52C ) )
#define 	GPIOPCTL_PC					(*( volatile GPIOPCTL_Tag*)(  GPIOC_APB_BASE_ADDRESS+ 0x52C ) )
#define 	GPIOPCTL_PD					(*( volatile GPIOPCTL_Tag*)(  GPIOD_APB_BASE_ADDRESS+ 0x52C ) )
#define 	GPIOPCTL_PE					(*( volatile GPIOPCTL_Tag*)(  GPIOE_APB_BASE_ADDRESS+ 0x52C ) )
#define 	GPIOPCTL_PF					(*( volatile GPIOPCTL_Tag*)(  GPIOF_APB_BASE_ADDRESS+ 0x52C ) )

#define 	GPIOCR_PA					(*( volatile u8*)(  GPIOA_APB_BASE_ADDRESS+ 0x524 ) )
#define 	GPIOCR_PB					(*( volatile u8*)(  GPIOB_APB_BASE_ADDRESS+ 0x524 ) )
#define 	GPIOCR_PC					(*( volatile u8*)(  GPIOC_APB_BASE_ADDRESS+ 0x524 ) )
#define 	GPIOCR_PD					(*( volatile u8*)(  GPIOD_APB_BASE_ADDRESS+ 0x524 ) )
#define 	GPIOCR_PE					(*( volatile u8*)(  GPIOE_APB_BASE_ADDRESS+ 0x524 ) )
#define 	GPIOCR_PF					(*( volatile u8*)(  GPIOF_APB_BASE_ADDRESS+ 0x524 ) )


#define 	GPIOICR_PA					(*( volatile u8*)(  GPIOA_APB_BASE_ADDRESS+ 0x41C ) )
#define 	GPIOICR_PB					(*( volatile u8*)(  GPIOB_APB_BASE_ADDRESS+ 0x41C ) )
#define 	GPIOICR_PC					(*( volatile u8*)(  GPIOC_APB_BASE_ADDRESS+ 0x41C ) )
#define 	GPIOICR_PD					(*( volatile u8*)(  GPIOD_APB_BASE_ADDRESS+ 0x41C ) )
#define 	GPIOICR_PE					(*( volatile u8*)(  GPIOE_APB_BASE_ADDRESS+ 0x41C ) )
#define 	GPIOICR_PF					(*( volatile u8*)(  GPIOF_APB_BASE_ADDRESS+ 0x41C ) )

#define 	GPIOAFSEL_PA				(*( volatile u8*)(  GPIOA_APB_BASE_ADDRESS+ 0x420 ) )
#define 	GPIOAFSEL_PB				(*( volatile u8*)(  GPIOB_APB_BASE_ADDRESS+ 0x420 ) )
#define 	GPIOAFSEL_PC				(*( volatile u8*)(  GPIOC_APB_BASE_ADDRESS+ 0x420 ) )
#define 	GPIOAFSEL_PD				(*( volatile u8*)(  GPIOD_APB_BASE_ADDRESS+ 0x420 ) )
#define 	GPIOAFSEL_PE				(*( volatile u8*)(  GPIOE_APB_BASE_ADDRESS+ 0x420 ) )
#define 	GPIOAFSEL_PF				(*( volatile u8*)(  GPIOF_APB_BASE_ADDRESS+ 0x420 ) )

#define 	GPIODIR_PA					(*( volatile u8*)(  GPIOA_APB_BASE_ADDRESS+ 0x400 ) )
#define 	GPIODIR_PB					(*( volatile u8*)(  GPIOB_APB_BASE_ADDRESS+ 0x400 ) )
#define 	GPIODIR_PC					(*( volatile u8*)(  GPIOC_APB_BASE_ADDRESS+ 0x400 ) )
#define 	GPIODIR_PD					(*( volatile u8*)(  GPIOD_APB_BASE_ADDRESS+ 0x400 ) )
#define 	GPIODIR_PE					(*( volatile u8*)(  GPIOE_APB_BASE_ADDRESS+ 0x400 ) )
#define 	GPIODIR_PF					(*( volatile u8*)(  GPIOF_APB_BASE_ADDRESS+ 0x400 ) )

#define 	GPIODEN_PA					(*( volatile u8*)(  GPIOA_APB_BASE_ADDRESS+ 0x51C ) )
#define 	GPIODEN_PB					(*( volatile u8*)(  GPIOB_APB_BASE_ADDRESS+ 0x51C ) )
#define 	GPIODEN_PC					(*( volatile u8*)(  GPIOC_APB_BASE_ADDRESS+ 0x51C ) )
#define 	GPIODEN_PD					(*( volatile u8*)(  GPIOD_APB_BASE_ADDRESS+ 0x51C ) )
#define 	GPIODEN_PE					(*( volatile u8*)(  GPIOE_APB_BASE_ADDRESS+ 0x51C ) )
#define 	GPIODEN_PF					(*( volatile u8*)(  GPIOF_APB_BASE_ADDRESS+ 0x51C ) )


#endif 