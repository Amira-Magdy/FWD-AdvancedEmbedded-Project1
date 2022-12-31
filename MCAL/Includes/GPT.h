/**********************************************************************************************************************
 * AUTHOR: Amira_Magdy_Mohamed
 * File:  <GPT.h>
 *********************************************************************************************************************/
#ifndef GPT_H
#define GPT_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
/* Standard AUTOSAR types */
#include "Std_Types.h"

/* GPT Pre-Compile Configuration Header file */
#include "GPT_CFG.h"

/* Common Macros Used Frequently */
#include "Common_Macros.h"

#include "Platform_Types.h"

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
#define GPTM_MAXIMUM_CHANNLES_CONFIGURED     (24U)



/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/
#define BIT0 0
#define BIT1 1
#define BIT2 2
#define BIT3 3
#define BIT4 4
#define BIT5 5
#define BIT8 8
#define BIT9 9
#define BIT10 10
#define BIT11 11
#define BIT16 16

#define TIMER_COUNT 12
/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/
/* Type definition for ChannelTypeTIMER used by the GPT APIs */
typedef uint8 ChannelTypeTIMER;

/* Type definition for ValueTypeTIMER used by the GPT APIs */
typedef uint32 ValueTypeTIMER;

/* Type definition for ModeTypeTIMER used by the GPT APIs */
typedef enum
{
  NORMALMode, SLEEPMode
} ModeTypeTIMER;

typedef enum
{
    // GPT_PREDEF_TIMER_100US_32BIT=1,
    TIMER_1US_16BIT = 4,
    TIMER_1US_24BIT = 4,
    TIMER_1US_32BIT = 0
} PredefTimerType;

typedef enum
{
  ONE_SHOTMode = 1, CONTINUOUSMode // Periodic//
} RunningMode;

typedef enum
{
    TIMER0_A, TIMER0_B,
    TIMER1_A, TIMER1_B, 
    TIMER2_A, TIMER2_B,  
    TIMER3_A, TIMER3_B,  
    TIMER4_A, TIMER4_B,  
    TIMER5_A, TIMER5_B,  
    TIMER0_A_WIDE, TIMER0_B_WIDE,   
    TIMER1_A_WIDE, TIMER1_B_WIDE,  
    TIMER2_A_WIDE, TIMER2_B_WIDE,
    TIMER3_A_WIDE, TIMER3_B_WIDE,   
    TIMER4_A_WIDE, TIMER4_B_WIDE, 
    TIMER5_A_WIDE, TIMER5_B_WIDE   
} ChannelNum;

typedef struct 
{
   ChannelNum ChannelID;
  RunningMode TimerMode;
}GPT_CONFIGURATION;

typedef struct 
{
  ChannelNum ChannelID;
  RunningMode TimerMode;
  ValueTypeTIMER Max_Ticks;
  boolean Gpt_DirtyBitWakeup;
  boolean Gpt_DirtyBitNotification;
}ChannelConfigSetTIMER;

/* Structure required for initializing the GPT Driver */
typedef struct 
{
	ChannelConfigSetTIMER Channels[CHANNLES_CONFIGURED_TIMER];
} ConfigTypeTIMER;


/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/
extern const ConfigTypeTIMER  Gpt_Configuration;
 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

/******************************************************************************
* \Syntax          : void Initializing_TIMER(const ConfigTypeTIMER* ConfigPtr)      
* \Description     : Describe this service                                    
*                                                                             
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : parameterName   Parameter Describtion                     
* \Parameters (out): None                                                      
* \Return value:   : Std_ReturnType  E_OK
*                                    E_NOT_OK                                  
*******************************************************************************/
void Initializing_TIMER(const ConfigTypeTIMER* ConfigPtr);

/******************************************************************************
* \Syntax          : void EnablingNotification_TIMER(ChannelTypeTIMER Channel)      
* \Description     : Describe this service                                    
*                                                                             
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : parameterName   Parameter Describtion                     
* \Parameters (out): None                                                      
* \Return value:   : Std_ReturnType  E_OK
*                                    E_NOT_OK                                  
*******************************************************************************/
void EnablingNotification_TIMER(ChannelTypeTIMER Channel);

/******************************************************************************
* \Syntax          : void DisbalingNotification_TIMER(ChannelTypeTIMER Channel)      
* \Description     : Describe this service                                    
*                                                                             
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : parameterName   Parameter Describtion                     
* \Parameters (out): None                                                      
* \Return value:   : Std_ReturnType  E_OK
*                                    E_NOT_OK                                  
*******************************************************************************/
void DisbalingNotification_TIMER(ChannelTypeTIMER Channel);

/******************************************************************************
* \Syntax          : void STARTINGTimer(ChannelTypeTIMER Channel,ValueTypeTIMER Value)      
* \Description     : Describe this service                                    
*                                                                             
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : parameterName   Parameter Describtion                     
* \Parameters (out): None                                                      
* \Return value:   : Std_ReturnType  E_OK
*                                    E_NOT_OK                                  
*******************************************************************************/
void STARTINGTimer(ChannelTypeTIMER Channel,ValueTypeTIMER Value);

/******************************************************************************
* \Syntax          : void STOPINGTimer(ChannelTypeTIMER Channel)      
* \Description     : Describe this service                                    
*                                                                             
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : parameterName   Parameter Describtion                     
* \Parameters (out): None                                                      
* \Return value:   : Std_ReturnType  E_OK
*                                    E_NOT_OK                                  
*******************************************************************************/
void STOPINGTimer(ChannelTypeTIMER Channel);

/******************************************************************************
* \Syntax          : void CLEARING_FlagTimer(ChannelTypeTIMER Channel)      
* \Description     : Describe this service                                    
*                                                                             
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : parameterName   Parameter Describtion                     
* \Parameters (out): None                                                      
* \Return value:   : Std_ReturnType  E_OK
*                                    E_NOT_OK                                  
*******************************************************************************/
void CLEARING_FlagTimer(ChannelTypeTIMER Channel);
 
#endif  /* GPT_H */

/**********************************************************************************************************************
 *  END OF FILE: GPT.h
 *********************************************************************************************************************/