/*
 * FILE NAME:	GPT_Conf.h
 * AUTHOR: Amira_Magdy_Mohamed
 * DATE:	20/9/2022
 * COMMENT:	contains GPT configurations
 */

#ifndef		GPT_CONF_H
#define 	GPT_CONF_H

 /*  Includes  */

#include "GPT_Int.h"


/************************************
    GLOBAL CONSTANT MACROS
************************************/
#define		GPT_PREDEF_TIEMR_1uS_16BIT_EN			ENABLE
#define		GPT_PREDEF_TIEMR_1uS_24BIT_EN			DISABLE
#define		GPT_PREDEF_TIEMR_1uS_32BIT_EN			DISABLE
#define		GPT_PREDEF_TIEMR_125uS_32BIT_EN			DISABLE

/************************************
   GLOBAL DATA TYPES AND STRUCTURES
************************************/
const ConfigirationTimer	GPT_ConfigArray [] =
{
	/*ChannelId;ChannelTickFreq ;ChannelTickValueMax ;ChannelMode;*/
	{T0,	GPT_16MHz	, 16000000 	, PERIODIC_MODE },
	{T1,	GPT_16MHz	, 16		, PERIODIC_MODE },
	{T2,	GPT_16MHz	, 16 		, PERIODIC_MODE },
	{T3,	GPT_16MHz	, 16		, PERIODIC_MODE },
	{T4,	GPT_16MHz	, 16 		, PERIODIC_MODE },
	{T5,	GPT_16MHz	, 16 		, PERIODIC_MODE },
	
	{WT0,	GPT_8MHz	, 8000 		, PERIODIC_MODE },
	{WT1,	GPT_16MHz	, 16000000 	, PERIODIC_MODE },
	{WT2,	GPT_16MHz	, 16 		, PERIODIC_MODE },
	{WT3,	GPT_16MHz	, 16 		, PERIODIC_MODE },
	{WT4,	GPT_16MHz	, 16000000 	, PERIODIC_MODE },

};


#endif	