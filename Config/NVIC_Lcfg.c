/**********************************************************************************************************************
 *  NVIC Configurations
 * AUTHOR: Amira_Magdy_Mohamed
 *********************************************************************************************************************/

/*  Includes  */

#include "NVIC.h"
#include "Std_Types.h"

/**********************************************************************************************************************
*  LOCAL MACROS CONSTANT\FUNCTION
*********************************************************************************************************************/
#define NVIC_GPIO_PORTA     (0U)
#define NVIC_GPIO_PORTF     (30U)
#define NVIC_SYSTICK        (2U)

/**********************************************************************************************************************
 *  LOCAL DATA 
 *********************************************************************************************************************/
const NVIC_Cfg NVIC_PCfg[NVIC_NUM_OF_ENABLED_INTERRUPT] = {

   /* InterruptNum, PriorityGroup, PrioritySubGroup */
   {NVIC_GPIO_PORTA,  0, 7},
   {NVIC_GPIO_PORTF,  0, 6},
	 {NVIC_SYSTICK,     1, 5},

};

const uint8 NVIC_SUB_GP_Cfg = NVIC_PRIORITY_GROUP_8_SUBGROUP_1;

/**********************************************************************************************************************
 *  END OF FILE: NVIC_Lcfg.c
 *********************************************************************************************************************/