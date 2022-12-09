/*
 * FILE NAME:	GPT_Int.h
 * AUTHOR: Amira_Magdy_Mohamed
 * DATE:	20/9/2022
 * COMMENT:	contains functions prototypes, data types and macros
 */

#ifndef		GPT_INT_H
#define 	GPT_INT_H

/*  Includes  */

#include "Std_Types.h"

/************************************
    GLOBAL CONSTANT MACROS
************************************/
#define 	ENABLE			1
#define 	DISABLE			0


/************************************
   GLOBAL DATA TYPES AND STRUCTURES
************************************/

typedef u32 Gpt_ValueType;

typedef enum 
{
	ONESHOT_MODE=1,
	PERIODIC_MODE
}Gpt_ModeType;

typedef enum
{
	T0=0,
	T1,
 	T2,
 	T3,
 	T4,
	T5,
	WT0,
	WT1,
	WT2=0xC,
	WT3,
	WT4,
	WT5
}Gpt_ChannelType;

typedef enum
{
	Sec,
	mS,
	uS
}Gpt_UnitTime;
typedef enum 
{
	GPT_16MHz=0,
	GPT_8MHz=1,
	GPT_4MHz=3
}Gpt_TickFreq;


typedef enum 
{
	GPT_PREDEF_TIEMR_1uS_16BIT,
	GPT_PREDEF_TIEMR_1uS_24BIT,
	GPT_PREDEF_TIEMR_1uS_32BIT,
	GPT_PREDEF_TIEMR_125uS_32BIT
}Gpt_PredefTimerType;

typedef enum 
{
	COUNT_DOWN=0,
	COUNT_UP,
}Gpt_CountDir;

typedef struct
{
	Gpt_ChannelType ChannelId;
	Gpt_ValueType 	ChannelTickFreq ;
	Gpt_ValueType 	ChannelTickValueMax ;
	Gpt_ModeType	ChannelMode;
}ConfigirationTimer;

 
/************************************
    GLOBAL FUNCTION PROTOTYPES
************************************/

void	DisplayTimer ( void );
void	DisTimer (Gpt_ChannelType Channel);
void	EnTimer (Gpt_ChannelType Channel);
void 	StartTimer ( Gpt_ChannelType Channel, Gpt_ValueType Counts);
void 	StopTimer ( Gpt_ChannelType Channel);
Gpt_ValueType GetTimeElapsedGPT ( Gpt_ChannelType Channel);
Gpt_ValueType GetTimeRemainingGPT ( Gpt_ChannelType Channel);
u32 GetPredefTimerValueGPT ( Gpt_PredefTimerType PredefTimer );
void 	NumSecondsDelayTimer(u32 time , Gpt_ChannelType Tx);
void 	NotificationTimer_T0 (void (*Timer0CallBack) (void) );
void 	NotificationTimer_T1 (void (*Timer1CallBack) (void) );
void 	NotificationTimer_T2 (void (*Timer2CallBack) (void) );
void 	NotificationTimer_T3 (void (*Timer3CallBack) (void) );
void 	NotificationTimer_T4 (void (*Timer4CallBack) (void) );
void 	NotificationTimer_T5 (void (*Timer5CallBack) (void) );
void 	NotificationTimer_WT0 (void (*WideTimer0CallBack) (void) );
void 	NotificationTimer_WT1 (void (*WideTimer1CallBack) (void) );
void 	NotificationTimer_WT2 (void (*WideTimer2CallBack) (void) );
void 	NotificationTimer_WT3 (void (*WideTimer3CallBack) (void) );
void 	NotificationTimer_WT4 (void (*WideTimer4CallBack) (void) );
void	NotificationTimer_WT5 (void (*WideTimer5CallBack) (void) );

#endif	