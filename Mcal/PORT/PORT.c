/*
 * FILE NAME:	PORT.c
 * AUTHOR: Amira_Magdy_Mohamed
 * DATE:	20/9/2022
 * COMMENT:	contains functions implemntations
 */


 /*  Includes  */

#include "Bit_Math.h"
#include "Std_Types.h"
#include "PORT_Int.h"
#include "GPIO_Int.h"
#include "PORT_Conf.h"
#include "PORT_Pri.h"

/************************************
    GLOBAL FUNCTIONS
************************************/


/******************************************************************************
* Description: Initializes each port and each pin with its configured function                                   
*******************************************************************************/
void DisplayPorts (void)
{
	GPIO_PortType PORTi = 0;
	for( PORTi=PORTA ; PORTi<=PORTF ; PORTi++)
	{
		if( PortConfig[PORTi] == ENABLE)
		{	
			u8 i=0;
			GPIO_PinNo PINi = 0;
			u32 CTL_Mask	= 0x0000000f;
			/*Gate Enable*/
			SET_BIT(RCGC2.R ,   PORTi);
			SET_BIT(RCGCGPIO.R, PORTi);
			while(i<5)
			{
				i++;
			}
			/*Commit Control*/
			GPIOLOCK(PORTi) = 0x4C4F434B ;	
			GPIOCR(PORTi) 	= 0x000000ff;
			GPIODEN(PORTi)	= 0x000000ff;
			/*Mux selects port as DIO*/
			GPIOAFSEL(PORTi) = 0;
			/*Data Control*/
			
			for(PINi=PIN0 ; PINi<=PIN7 ; PINi++)
			{	
				if(PinConfig[PORTi][PINi] == OUTPUT )
				{
					SET_BIT(GPIODIR(PORTi), PINi);
					CLR_BIT(GPIODATA(PORTi).R, PINi);
				}
				else if (PinConfig[PORTi][PINi] == INPUT_OPEN_DRAIN )
				{
					CLR_BIT(GPIODIR(PORTi), PINi);
					SET_BIT(GPIOODR(PORTi), PINi);

				}
				else if (PinConfig[PORTi][PINi] == INPUT_PULL_UP )
				{
					CLR_BIT(GPIODIR(PORTi), PINi);
					SET_BIT(GPIOPUR(PORTi), PINi);
				}
				else if (PinConfig[PORTi][PINi] == INPUT_PULL_DN )
				{
					CLR_BIT(GPIODIR(PORTi), PINi);
					SET_BIT(GPIOPDR(PORTi), PINi);
				}
				else
				{
					
					SET_BIT(GPIOAFSEL(PORTi), PINi);
					GPIOPCTL(PORTi) |= (CTL_Mask << (4*PINi) ) & PinConfig[PORTi][PINi];
				}			
			}
		}
	}
}