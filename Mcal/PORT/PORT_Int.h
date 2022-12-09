/*
 * FILE NAME:	PORT_Int.h
 * AUTHOR: Amira_Magdy_Mohamed
 * DATE:	20/9/2022
 * COMMENT:	contains functions prototypes and macros
 */

#ifndef		PORT_INT_H
#define 	PORT_INT_H


 /*  Includes  */

#include "Std_Types.h"

/************************************
   GLOBAL FUNCTION PROTOTYPES
************************************/

void DisplayPorts (void);


/************************************
   GLOBAL CONSTANT MACROS
************************************/
/*Common Configurations*/	
#define  ENABLE				1
#define	 DISABLE			0


/************************************
   PINs Configurations
************************************/
#define		OUTPUT				20
#define		INPUT_PULL_UP		21
#define		INPUT_PULL_DN		22
#define		INPUT_OPEN_DRAIN	23
/*                            PORTA                              */
#define		PA0_U0Rx			1
#define		PA0_CAN1Rx			8
#define		PA1_U0Tx			1
#define		PA1_CAN1Tx			8
#define		PA2_SSI0C1K			2
#define		PA3_SSI0Fss			2
#define		PA4_SSI0Rx			2
#define		PA5_SSI0Tx			2
#define		PA6_I2C1SCL			3
#define		PA6_M1PWM2			5
#define		PA7_I2C1SDA			3
#define		PA7_M1PWM3			5
/*                            PORTB                              */
#define		PB0_U1Rx 			1
#define		PB0_T2CCP0 			7
#define		PB1_U1Tx			1
#define		PB1_T2CCP1 			7
#define		PB2_I2C0SCL			3
#define		PB2_T3CCP0 			7
#define		PB3_I2C0SDA			3
#define		PB3_T3CCP1 			7
#define		PB4_SSI2Clk			2
#define		PB4_M0PWM2			4
#define		PB4_T1CCP0 			7
#define		PB4_CAN0Rx 			8
#define		PB5_SSI2Fss			2
#define		PB5_M0PWM3			4
#define		PB5_T1CCP1 			7
#define		PB5_CAN0Tx 			8
#define		PB6_SSI2Rx			2
#define		PB6_M0PWM0			4
#define		PB6_T0CCP0			7
#define		PB7_SSI2Tx			2
#define		PB7_M0PWM1			4
#define		PB7_T0CCP1			7
/*                            PORTC                              */
#define		PC0_TCK_SWCLK		1
#define		PC0_T4CCP0			7
#define		PC1_TMS_SWDIO		1
#define		PC1_T4CCP1			7
#define		PC2_TDI				1
#define		PC2_T5CCP0			7
#define		PC3_TDO_SWO			1
#define		PC3_T5CCP1			7
#define		PC4_U4Rx			1
#define		PC4_U1Rx			2
#define		PC4_M0PWM6			4
#define		PC4_IDX1			6
#define		PC4_WT0CCP0			7
#define		PC4_U1RTS			8
#define		PC5_U4Tx			1
#define		PC5_U1Tx			2
#define		PC5_M0PWM7			4
#define		PC5_PhA1			6
#define		PC5_WT0CCP1			7
#define		PC5_U1CTS			8
#define		PC6_U3Rx			1
#define		PC6_PhB1			6
#define		PC6_WT1CCP0			7
#define		PC6_USB0EPEN		8
#define		PC7_U3TX			1
#define		PC7_WT1CCP1			7
#define		PC7_USB0PFLT		8
/*                            PORTD                              */
#define		PD0_SSI3Clk 		1
#define		PD0_SSI1Clk 		2
#define		PD0_I2C3SCL 		3
#define		PD0_M0PWM6 			4
#define		PD0_M1PWM0 			5
#define		PD0_WT2CCP0			7
#define		PD1_SSI3Fss			1
#define		PD1_SSI1Fss 		2
#define		PD1_I2C3SDA 		3
#define		PD1_M0PWM7 			4
#define		PD1_M1PWM1 			5
#define		PD1_WT2CCP1			7
#define		PD2_SSI3Rx 			1
#define		PD2_SSI1Rx 			2
#define		PD2_M0FAULT0 		4
#define		PD2_WT3CCP0 		7
#define		PD2_USB0EPEN		8
#define		PD3_SSI3Tx 			1
#define		PD3_SSI1Tx 			2
#define		PD3_IDX0 			6
#define		PD3_WT3CCP1 		7
#define		PD3_USB0PFLT		8
#define		PD4_U6Rx			2
#define		PD4_WT4CCP0			7
#define		PD5_U6Tx			2
#define		PD5_WT4CCP1			7
#define		PD6_U2Rx			1
#define		PD6_M0FAULT0 		4
#define		PD6_PhA0 			6
#define		PD6_WT5CCP0			7
#define		PD7_U2Tx 			1
#define		PD7_PhB0 			6
#define		PD7_WT5CCP1 		7
#define		PD7_NMI				8

/*                            PORTE                              */
#define		PE0_U7Rx			1
#define		PE1_U7Tx			1
#define		PE4_U5Rx 			1
#define		PE4_I2C2SCL 		3
#define		PE4_M0PWM4 			4
#define		PE4_M1PWM2 			5
#define		PE4_CAN0Rx			8

#define		PE5_U5Tx 			1
#define		PE5_I2C2SDA 		3
#define		PE5_M0PWM5 			4
#define		PE5_M1PWM3 			5
#define		PE5_CAN0Tx			8
/*                            PORTF                              */
#define		PF0_U1RTS			1
#define		PF0_SSI1Rx 			2
#define		PF0_CAN0Rx 			3
#define		PF0_M1PWM4 			5
#define		PF0_PhA0 			6
#define		PF0_T0CCP0 			7
#define		PF0_NMI 			8
#define		PF0_C0o				9
#define		PF1_U1CTS 			1
#define		PF1_SSI1Tx 			2
#define		PF1_M1PWM5 			5
#define		PF1_PhB0 			6
#define		PF1_T0CCP1 			7 
#define		PF1_C1o 			9
#define		PF1_TRD1			14
#define		PF2_SSI1Clk 		2
#define		PF2_M0FAULT0 		4
#define		PF2_M1PWM6 			5 
#define		PF2_T1CCP0 			7
#define		PF2_TRD0			14
#define		PF3_SSI1Fss 		2
#define		PF3_CAN0Tx 			3
#define		PF3_M1PWM7 			5
#define		PF3_T1CCP1 			7
#define		PF3_TRCLK			14
#define		PF4_M1FAULT0		5
#define		PF4_IDX0			6
#define		PF4_T2CCP0			7
#define		PF4_USB0EPEN		8


#endif	