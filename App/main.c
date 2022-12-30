/**********************************************************************************************************************
 * AUTHOR: Amira_Magdy_Mohamed
 * File:  <main.c>
 *********************************************************************************************************************/

#include "Port.h"
#include "Dio.h"
#include "NVIC.h"
#include "LED.h"
#include "SysTick_Timer.h"

#define Enable_Exceptions()    __asm("CPSIE I")


volatile static uint8 ticks = 0;


void SysTick_Handler()
{
  ticks++;
}

int main ()
{
    
    Port_Init(&Port_PinConfig);

    Dio_Init(&Dio_Configuration);
	
    SysTick_Disable();
  
    SysTickPeriodSet(1000);  //Time in ms //
  
    SysTick_Enable();
  
    Enable_Exceptions();  
	
    NVIC_Init();

    while(1)
    {
			if(ticks == 1)
			{
				LED_ON(RED_LED);
				ticks = 0;
			}
			else if(ticks == 0)
			{
				LED_OFF(RED_LED);
				ticks = 1;
			}
    }
}