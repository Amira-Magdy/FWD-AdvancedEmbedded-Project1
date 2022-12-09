/*
 * FILE NAME:	SysCtrl_Int.h
 * AUTHOR: Amira_Magdy_Mohamed
 * DATE:	20/9/2022
 * COMMENT:	contains functions prototypes and macros
 */

#ifndef		SYSCTRL_INT_H
#define 	SYSCTRL_INT_H


 /*  Includes  */

#include "Std_Types.h"


/************************************
    GLOBAL FUNCTION PROTOTYPES
************************************/
void MC_SysCtrlInit (void);



/************************************
    GLOBAL CONSTANT MACROS
************************************/

//Common Configurations
#define  ENABLE				1
#define	 DISABLE				0

//Oscillator Source Configurations

/*Main oscillator*/
#define   MOSC				0  
/*Precision internal oscillator*/
#define   PIOSC				1  
/*Precision internal oscillator divided by 4   */
#define   PIOSC_DIV_4		2  
/*Low-frequency internal oscillator*/
#define   LFIOSC			3  
/*external oscillator RCC2 dependent*/
#define	  _32_768_kHz 		7	


//PWM Unit Clock Divisor Configurations
#define  DIV_2 			0x0
#define  DIV_4 			0x1
#define  DIV_8 			0x2
#define  DIV_16			0x3
#define  DIV_32			0x4
#define  DIV_64 		0x7


/*Divide PLL as 400 MHz versus 200 MHz*/
#define _200_MHZ		0
#define _400_MHZ		1


//Crystal Value Configurations
#define _4_MHZ     			0x06         
#define _4_096_MHZ 			0x07
#define _4_9152_MHZ 		0x08
#define _5_MHZ				0x09
#define _5_12_MHZ			0x0A
#define _6_MHZ				0x0B
#define _6_144_MHZ			0x0C
#define _7_3728_MHZ			0x0D
#define _8_MHZ	 			0x0E
#define _8_192_MHZ			0x0F
#define _10_MHZ 			0x010
#define _12_MHZ 			0x011
#define _12_288_MHZ			0x012
#define _13_56_MHZ			0x013
#define _14_31818_MHZ		0x014
#define _16_MHZ				0x015
#define _16_384_MHZ			0x016
#define _18_MHZ 			0x017
#define _20_MHZ 			0x018
#define _24_MHZ				0x019
#define _25_MHZ				0x01A

#endif	