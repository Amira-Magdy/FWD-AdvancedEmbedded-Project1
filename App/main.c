/*
 * FILE NAME:	main.c
 * AUTHOR: Amira_Magdy_Mohamed
 * COMMENT:	contains main program to blink LED
 */

#include "Std_Types.h"
#include "PORT_Int.h"
#include "SysCtrl_Int.h"
#include "GPIO_Int.h"
#include "GPT_Int.h"
#include "IntCtrl_Int.h"
#include <stdint.h>
#include "E:/NEW PROGRAMS/Keil_v5/Inc/tm4c123gh6pm.h"

// we should include all the header files 

void Toggle (u32 clk);
void ImplementLED(void);

// start the main

int main(void)
{	
	
	// initialize the SysCtrl of the microcontroller
	MC_SysCtrlInit();
	// initialize the Interrupt Control
	DisplayInterrupt();
	// initialize all ports and pins of GIPO
	DisplayPorts();
	// initialize the General Purpose Timer
	DisplayTimer();
	
	// super loop to blinking the LED constantly
	
	while(1)
	{
		/* 
		 here, when entering 8000000
     this means --> 16 MHz * 0.5 sec 
     means the state of the LED will changes every 0.5 sec between ON / OFF		
		*/
		Toggle (8000000);
		
	}
	return 0;
}

// toggle function to start the timer 
// first, enabling the timer
// then implement the LED
// finally, start the timer

void Toggle (u32 clk)
{
	// enable the GPT
	EnTimer (T0);
	// then Call Back Function
	NotificationTimer_T0 (ImplementLED);
	// finally, start the timer
	StartTimer (T0 , clk);
}

// imblementing LED
void ImplementLED (void)  { Flip_GPIO(PF2); }