/**********************************************************************************************************************
 * AUTHOR: Amira_Magdy_Mohamed
 * File:  <NVIC.h>
 *********************************************************************************************************************/
#ifndef NVIC_H
#define NVIC_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "Platform_Types.h"
#include "NVIC_cfg.h"

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
#define NVIC_EN0_R              (*((volatile unsigned long *)0xE000E100))
#define NVIC_PRI0_R             (*((volatile unsigned long *)0xE000E400))
#define NVIC_PRI3_R             (*((volatile unsigned long *)0xE000E40C))	

/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/
#define NVIC_PRIORITY_GROUP_8_SUBGROUP_1                     0x4
#define NVIC_PRIORITY_GROUP_1_SUBGROUP_8                     0x7
#define NVIC_PRIORITY_GROUP_4_SUBGROUP_2                     0x5
#define NVIC_PRIORITY_GROUP_2_SUBGROUP_4                     0x6


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/
typedef struct
{
     /* make sure the following parameters should be visible to static code
     * InterruptNum
     * ENable\Disable
     * Priority Group
     * Sub-priority Group
     * */
    uint8 InterrNum;
    uint8 PriorityGP;
    uint8 PrioritySubGP;
}NVIC_Cfg;


/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/
extern const NVIC_Cfg NVIC_PCfg[NVIC_NUM_OF_ENABLED_INTERRUPT];

extern const uint8 NVIC_SUB_GP_Cfg;
 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
void NVIC_Init(void);
 
#endif  /* NVIC_H */

/**********************************************************************************************************************
 *  END OF FILE: NVIC.h
 *********************************************************************************************************************/