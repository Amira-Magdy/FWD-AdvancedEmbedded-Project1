/*
 * FILE NAME:	SysCtrl.c
 * AUTHOR: Amira_Magdy_Mohamed
 * DATE:	20/9/2022
 * COMMENT:	contains functions implemntations
 */


  /*  Includes  */
#include "Bit_Math.h"
#include "Std_Types.h"
#include "SysCtrl_Int.h"
#include "SysCtrl_Conf.h"
#include "SysCtrl_Pri.h"

/************************************
    GLOBAL FUNCTIONS
************************************/

/************************************
Microcontroller Clock Initialization                                    
************************************/
void MC_SysCtrlInit (void)
{
	RCC.B.MOSCDIS	= !(MAIN_OSCILLATOR);
	RCC.B.OSCSRC 	= OSCILLATOR_SOURCE ;
	RCC.B.XTAL  	= CRYSTAL_VALUE     ;
	RCC.B.BYPASS	= PLL_BYPASS 		;
	#if (PLL_BYPASS !=	ENABLE)   &&  (PLL_POWER_DOWN  == ENABLE)
		#warning "No other clock source is functioning"
	#elif		PLL_BYPASS	== DISABLE 		
		while(PLLSTAT.B.LOCK == 0);
	#else
		RCC.B.PWRDN  = PLL_POWER_DOWN ;
	#endif
	RCC.B.PWMDIV	= PWM_DIVISOR		;
	RCC.B.USEPWMDIV	= PWM_DIVISOR_EN	;
	RCC.B.USESYSDIV	= SYSCLOCK_DIVIDER_EN;
	RCC.B.SYSDIV	= SYSTEM_CLOCK_DIVIDER -1 ;
	RCC.B.ACG		= AUTO_CLOCK_GATING ;
		
	RCC2.B.OSCSRC2  = OSCILLATOR_SOURCE_2;
	RCC2.B.BYPASS2  = PLL_BYPASS_2		;
	RCC2.B.PWRDN2   = PLL_POWER_DOWN_2 	;
	RCC2.B.USBPWRDN = PWRDN_USB_PLL		;
	RCC2.B.DIV400 	= DIVIDE_PLL_AS		;
	#if DIVIDE_PLL_AS	== _400_MHZ
		RCC2.B.SYSDIV2LSB = GET_BIT( SYSTEM_CLOCK_DIVIDER_2 ,0)		;
		RCC2.B.SYSDIV2	= SYSTEM_CLOCK_DIVIDER_2 >> 1 ;
	#else
		RCC2.B.SYSDIV2	= SYSTEM_CLOCK_DIVIDER_2 -1 ;
	#endif
	RCC2.B.USERCC2	= USE_RCC2			;

	
}

