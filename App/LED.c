/**********************************************************************************************************************
 * AUTHOR: Amira_Magdy_Mohamed
 * File:  <LED.c>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "LED.h"

/******************************************************************************
* \Syntax          : void LED_ON(LED_ID ID)       
* \Description     : Describe this service                                    
*                                                                             
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : parameterName   Parameter Describtion                     
* \Parameters (out): None                                                      
* \Return value:   : Std_ReturnType  E_OK
*                                    E_NOT_OK                                  
*******************************************************************************/
void LED_ON(LED_ID ID)
{
	if(ID == RED_LED)
    {
        Dio_WriteChannel(PORTF,PIN1,STD_HIGH);     
    }
}

/******************************************************************************
* \Syntax          : void LED_OFF(LED_ID ID)       
* \Description     : Describe this service                                    
*                                                                             
* \Sync\Async      : Synchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : parameterName   Parameter Describtion                     
* \Parameters (out): None                                                      
* \Return value:   : Std_ReturnType  E_OK
*                                    E_NOT_OK                                  
*******************************************************************************/
void LED_OFF(LED_ID ID)
{
    if(ID == RED_LED)
    {
        Dio_WriteChannel(PORTF,PIN1,STD_LOW);
    }
}

/**********************************************************************************************************************
 *  END OF FILE: LED.c
 *********************************************************************************************************************/