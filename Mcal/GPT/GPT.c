/*
 * FILE NAME:	GPT.c
 * AUTHOR: Amira_Magdy_Mohamed
 * DATE:	20/9/2022
 * COMMENT:	contains functions implemntations
 */


/*  Includes  */
#include "Bit_Math.h"
#include "Std_Types.h"
#include "GPT_Int.h"
#include "GPT_Conf.h"
#include "Mcu_Hw.h"
#include "GPT_Pri.h"

/************************************
  LOCAL MACROS CONSTANT & FUNCTION
************************************/
#define 	NULL  			((void*)0)

/************************************
     LOCAL DATA 
************************************/
void (*TimerCallBack[12]) (void) = {	NULL , NULL , NULL ,NULL ,
										NULL , NULL , NULL , NULL, 
										NULL , NULL , NULL , NULL };


/************************************
   GLOBAL FUNCTIONS
************************************/

void DisplayTimer (void)
{

	u8 i =0;
	RCGCTIMER.R	 = 0xff;
	RCGCWTIMER.R = 0xff;
	for( i=0 ; i<11 ; i++)
	{	
		GPTMCTL(GPT_ConfigArray[i].ChannelId).B.TAEN 	= DISABLE;
		GPTMCFG(GPT_ConfigArray[i].ChannelId).B.GPTMCFG = 0x00000000;
		GPTMTAMR(GPT_ConfigArray[i].ChannelId).B.TAMR 	= GPT_ConfigArray[i].ChannelMode;
		GPTMTAMR(GPT_ConfigArray[i].ChannelId).B.TACDIR	= COUNT_DOWN;
		GPTMTAPR(GPT_ConfigArray[i].ChannelId).R 		= GPT_ConfigArray[i].ChannelTickFreq;
		GPTMTAILR(GPT_ConfigArray[i].ChannelId).R 		= GPT_ConfigArray[i].ChannelTickValueMax;
		GPTMIMR(GPT_ConfigArray[i].ChannelId).R			= 0x00000000;
	}
	
	/*
	 Predefined Timer Init
	*/
	GPTMCTL(WT5).B.TAEN 	= DISABLE;
	GPTMCFG(WT5).B.GPTMCFG 	= 0x00000000;
	GPTMTAMR(WT5).B.TAMR 	= PERIODIC_MODE;
	GPTMTAMR(WT5).B.TACDIR	= COUNT_DOWN;
	GPTMTAPR(WT5).R 		= GPT_16MHz;
	GPTMTAILR(WT5).R 		= 0xffffffff;
	GPTMCTL(WT5).B.TAEN 	= ENABLE;
}

void	DisTimer (Gpt_ChannelType Channel)
{
	GPTMIMR(Channel).R	= 0x00000000;
}
void	EnTimer (Gpt_ChannelType Channel)
{
	GPTMIMR(Channel).B.TATOIM = ENABLE;
}

void StartTimer ( Gpt_ChannelType Channel, Gpt_ValueType Counts)
{
	
	GPTMTAILR(Channel).R = Counts;
	GPTMCTL(Channel).B.TAEN 	= ENABLE;
	while( (GPTMRIS(Channel).B.TATORIS) != 1);
}

void StopTimerGPT( Gpt_ChannelType Channel)
{
	GPTMCTL(Channel).B.TAEN 	= DISABLE;
}


void NumSecondsDelayGPT(u32 seconds , Gpt_ChannelType Tx)
{
	u32 sec_count=0;
	GPTMCTL(Tx).B.TAEN = ENABLE;
	while(sec_count!=seconds)
	{
		while( (GPTMRIS(Tx).B.TATORIS) != 1);
		GPTMICR(Tx).B.TATOCINT = 1;
		sec_count++; 
	}
	GPTMCTL(Tx).B.TAEN = DISABLE;
}

Gpt_ValueType GetTimeElapsedGPT( Gpt_ChannelType Channel)
{
	return (GPTMTAILR(Channel).R)-(GPTMTAV(Channel).R);
}
Gpt_ValueType GetTimeRemainingGPT( Gpt_ChannelType Channel)
{
	return GPTMTAV(Channel).R;
}

u32 GetPredefTimerValueGPT( Gpt_PredefTimerType PredefTimer )
{
	
	u32 ret=0;
	if(PredefTimer == GPT_PREDEF_TIEMR_1uS_16BIT )
	{
		ret = (GPTMTAV(PredefTimer).R >> 4) & 0x0000ffff;
	}
	else if(PredefTimer == GPT_PREDEF_TIEMR_1uS_24BIT)
	{
		ret = (GPTMTAV(PredefTimer).R >> 4) & 0x00ffffff;
	}
	else if(PredefTimer == GPT_PREDEF_TIEMR_1uS_32BIT )
	{
		ret = (GPTMTAV(PredefTimer).R >> 4);
	}
	else if(PredefTimer == GPT_PREDEF_TIEMR_125uS_32BIT )
	{
		ret = GPTMTAV(PredefTimer).R >> 7;
	}
	return ret;
}


/************************************
           CALL BACK
************************************/
										
void NotificationTimer_T0 (void (*Timer0CallBack) (void) )
{
	TimerCallBack[0] = Timer0CallBack ;
}

void 	NotificationTimer_T1 (void (*Timer1CallBack) (void) )
{
	TimerCallBack[1] = Timer1CallBack ;
}
void 	NotificationTimer_T2 (void (*Timer2CallBack) (void) )
{
	TimerCallBack[2] = Timer2CallBack ;
}
void 	NotificationTimer_T3 (void (*Timer3CallBack) (void) )
{
	TimerCallBack[3] = Timer3CallBack ;
}
void 	NotificationTimer_T4 (void (*Timer4CallBack) (void) )
{
	TimerCallBack[4] = Timer4CallBack ;
}
void 	NotificationTimer_T5 (void (*Timer5CallBack) (void) )
{
	TimerCallBack[5] = Timer5CallBack ;
}
void 	NotificationTimer_WT0 (void (*WideTimer0CallBack) (void) )
{
	TimerCallBack[6] = WideTimer0CallBack ;
}
void 	NotificationTimer_WT1 (void (*WideTimer1CallBack) (void) )
{
	TimerCallBack[7] = WideTimer1CallBack ;
}
void 	NotificationTimer_WT2 (void (*WideTimer2CallBack) (void) )
{
	TimerCallBack[8] = WideTimer2CallBack ;
}
void 	NotificationTimer_WT3 (void (*WideTimer3CallBack) (void) )
{
	TimerCallBack[9] = WideTimer3CallBack ;
}
void 	NotificationTimer_WT4 (void (*WideTimer4CallBack) (void) )
{
	TimerCallBack[10] = WideTimer4CallBack ;
}
void	NotificationTimer_WT5 (void (*WideTimer5CallBack) (void) )
{
	TimerCallBack[11] = WideTimer5CallBack ;
}

/************************************
   Interrupt Service Routines
************************************/
void TIMER0A_Handler(void)
{
	if( TimerCallBack[0] != NULL )
	{
		/*
		 execute passed function
		*/
		TimerCallBack[0]();
		GPTMICR(T0).B.TATOCINT = 1;
	}
}
void TIMER1A_Handler(void)
{
	if( TimerCallBack[1] != NULL )
	{
		TimerCallBack[1]();
	}
}
void TIMER2A_Handler(void)
{
	if( TimerCallBack[2] != NULL )
	{
		TimerCallBack[2]();
	}
}
void TIMER3A_Handler(void)
{
	if( TimerCallBack[3] != NULL )
	{
		TimerCallBack[3]();
	}
}
void TIMER4A_Handler(void)
{
	if( TimerCallBack[4] != NULL )
	{
		TimerCallBack[4]();
	}
}
void TIMER5A_Handler(void)
{
	if( TimerCallBack[5] != NULL )
	{
		TimerCallBack[5]();
	}
}

void WTIMER0A_Handler(void)
{
	if( TimerCallBack[6] != NULL )
	{
		TimerCallBack[6]();
	}
}
void WTIMER1A_Handler(void)
{
	if( TimerCallBack[7] != NULL )
	{
		TimerCallBack[7]();
	}
}
void WTIMER2A_Handler(void)
{
	if( TimerCallBack[8] != NULL )
	{
		TimerCallBack[8]();
	}
}
void WTIMER3A_Handler(void)
{
	if( TimerCallBack[9] != NULL )
	{
		TimerCallBack[9]();
	}
}
void WTIMER4A_Handler(void)
{
	if( TimerCallBack[10] != NULL )
	{
		TimerCallBack[10]();
	}
}
void WTIMER5A_Handler(void)
{
	if( TimerCallBack[11] != NULL )
	{
		TimerCallBack[11]();
	}
}