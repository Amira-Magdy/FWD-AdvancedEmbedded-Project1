/**********************************************************************************************************************
 * AUTHOR: Amira_Magdy_Mohamed
 * File:  <DIO_CFG>
 *********************************************************************************************************************/
#ifndef DIO_CFG_H
#define DIO_CFG_H


/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
/* Number of the configured Dio Channels */
#define DIO_CONFIGURED_CHANNLES              (1U)

/* Channel Index in the array of structures */
#define DIO_LED1_CHANNEL_ID_INDEX         (uint8)0x00

/* DIO Configured Port ID's  */
#define DIO_LED1_PORT_NUM                 (Dio_PortType)5 /* PORTF */

/* DIO Configured Channel ID's */
#define DIO_LED1_CHANNEL_NUM              (Dio_ChannelType)1 /* Pin 1 in PORTF */
 
#endif  /* DIO_CFG_H */

/**********************************************************************************************************************
 *  END OF FILE: DIO_Cfg.h
 *********************************************************************************************************************/