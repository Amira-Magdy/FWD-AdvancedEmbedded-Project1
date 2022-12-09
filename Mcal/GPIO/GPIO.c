/*
 * FILE NAME:	GPIO.c
 * AUTHOR: Amira_Magdy_Mohamed
 * DATE:	20/9/2022
 * COMMENT:	contains functions implemntations
 */


/*  Includes  */

#include "Bit_Math.h"
#include "Std_Types.h"
#include "GPIO_Int.h"
#include "GPIO_Conf.h"
#include "Mcu_Hw.h"
#include "GPIO_Pri.h"

/************************************
    GLOBAL FUNCTIONS
************************************/

//Description: Receives Input from a specific pin                                   

GPIO_LevelType ReadPins (GPIO_ChannelType ChannelId)
{
	GPIO_PortType PORTi = (u8) (ChannelId / 10);
	GPIO_PinNo	  PINi	= ChannelId % 10;
	
	return ( GET_BIT(GPIODATA(PORTi).R ,PINi) );
}


//Description: Sets Output Port value as desired 

void WritePorts (GPIO_PortType PortId, GPIO_PortLevelType Level)
{
	GPIODIR(PortId) = (GPIO_PortLevelType)PORT_OUTPUT; 
	GPIODATA(PortId).R = Level;
}



//Description: Sets a specific Output Pin value as desired                                    

void WritePins (GPIO_ChannelType ChannelId, GPIO_LevelType Level)
{
	GPIO_PortType PORTi = (u8) (ChannelId / 10);
	GPIO_PinNo	  PINi	= ChannelId % 10;
	
	SET_BIT(GPIODIR(PORTi), ChannelId);
	GPIODATA(PORTi).R |= Level << PINi;
}

//Description: Toggles pin value

GPIO_LevelType Flip_GPIO (GPIO_ChannelType ChannelId)
{
	GPIO_PortType PORTi = (u8) (ChannelId / 10);
	GPIO_PinNo	  PINi	= ChannelId % 10;
		
	return TOG_BIT(GPIODATA(PORTi).R ,PINi) ;
}

//Description: Receives Input from a specific port                                    

GPIO_PortLevelType ReadPorts (GPIO_PortType PortId)
{
	return GPIODATA(PortId).R;
}
