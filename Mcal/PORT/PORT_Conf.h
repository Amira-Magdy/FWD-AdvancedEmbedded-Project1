/*
 * FILE NAME:	PORT_Conf.h
 * AUTHOR: Amira_Magdy_Mohamed
 * DATE:	20/9/2022
 * COMMENT:	contains each port and pin initial configurations
 */

#ifndef		PORT_CONF_H
#define 	PORT_CONF_H


 /*  Includes  */

#include	"PORT_Int.h"

/************************************
   MCU Ports and Pins Configurations 
************************************/
#define		GPIO_BUS			APB

#define		PORTA_INIT			ENABLE
#define		PORTB_INIT			ENABLE
#define		PORTC_INIT			ENABLE
#define		PORTD_INIT			ENABLE
#define		PORTE_INIT			ENABLE
#define		PORTF_INIT			ENABLE

 /************************************
 *Pins Configurations
 each pin has the following configurations
 OUTPUT,	INPUT_PULL_UP,	INPUT_PULL_DN,	INPUT_OPEN_DRAIN
 If a pin has an alternative function , It can be configured as the following 
 PA0_CAN1Rx	or PA0_U0Rx	
 All configurations can be found :
 1- at MCU_Interfacer.h header fiel
 2- by using auto complete feature (PA0_[auto complete])
 3- at p. 1351 from datasheet
************************************/
/******************************PORTA******************************/
#define		PORTA_PIN0			OUTPUT
#define		PORTA_PIN1			OUTPUT
#define		PORTA_PIN2			OUTPUT
#define		PORTA_PIN3			OUTPUT
#define		PORTA_PIN4			OUTPUT
#define		PORTA_PIN5			OUTPUT
#define		PORTA_PIN6			OUTPUT
#define		PORTA_PIN7			OUTPUT
/******************************PORTB******************************/
#define		PORTB_PIN0			OUTPUT
#define		PORTB_PIN1			OUTPUT
#define		PORTB_PIN2			OUTPUT
#define		PORTB_PIN3			OUTPUT
#define		PORTB_PIN4			OUTPUT
#define		PORTB_PIN5			OUTPUT
#define		PORTB_PIN6			OUTPUT
#define		PORTB_PIN7			OUTPUT
/******************************PORTC******************************/
#define		PORTC_PIN0			OUTPUT
#define		PORTC_PIN1			OUTPUT
#define		PORTC_PIN2			OUTPUT
#define		PORTC_PIN3			OUTPUT
#define		PORTC_PIN4			PC4_WT0CCP0
#define		PORTC_PIN5			OUTPUT
#define		PORTC_PIN6			OUTPUT
#define		PORTC_PIN7			OUTPUT
/******************************PORTD******************************/
#define		PORTD_PIN0			OUTPUT
#define		PORTD_PIN1			OUTPUT
#define		PORTD_PIN2			OUTPUT
#define		PORTD_PIN3			OUTPUT
#define		PORTD_PIN4			OUTPUT
#define		PORTD_PIN5			OUTPUT
#define		PORTD_PIN6			OUTPUT
#define		PORTD_PIN7			OUTPUT
/******************************PORTE******************************/
#define		PORTE_PIN0			OUTPUT
#define		PORTE_PIN1			OUTPUT
#define		PORTE_PIN2			OUTPUT
#define		PORTE_PIN3			OUTPUT
#define		PORTE_PIN4			OUTPUT
#define		PORTE_PIN5			OUTPUT

/******************************PORTF******************************/
#define		PORTF_PIN0			INPUT_PULL_UP
#define		PORTF_PIN1			OUTPUT
#define		PORTF_PIN2			OUTPUT
#define		PORTF_PIN3			OUTPUT
#define		PORTF_PIN4			INPUT_PULL_UP



/******************************
   CONFIGURATIONS ARRAY
******************************/
const u8 PortConfig[6] = {
	PORTA_INIT, PORTB_INIT, PORTC_INIT, PORTD_INIT, PORTE_INIT, PORTF_INIT 
	};

const u8 PinConfig[6][8] = {
	{PORTA_PIN0, PORTA_PIN1 , PORTA_PIN2, PORTA_PIN3, PORTA_PIN4, PORTA_PIN5, PORTA_PIN6, PORTA_PIN7},
	{PORTB_PIN0, PORTB_PIN1 , PORTB_PIN2, PORTB_PIN3, PORTB_PIN4, PORTB_PIN5, PORTB_PIN6, PORTB_PIN7},
	{PORTC_PIN0, PORTC_PIN1 , PORTC_PIN2, PORTC_PIN3, PORTC_PIN4, PORTC_PIN5, PORTC_PIN6, PORTC_PIN7},
	{PORTD_PIN0, PORTD_PIN1 , PORTD_PIN2, PORTD_PIN3, PORTD_PIN4, PORTD_PIN5, PORTD_PIN6, PORTD_PIN7},
	{PORTE_PIN0, PORTE_PIN1 , PORTE_PIN2, PORTE_PIN3, PORTE_PIN4, PORTE_PIN5, 99		, 99		 },
	{PORTF_PIN0, PORTF_PIN1 , PORTF_PIN2, PORTF_PIN3, PORTF_PIN4, 99		, 99		, 99		 }
	};

#endif