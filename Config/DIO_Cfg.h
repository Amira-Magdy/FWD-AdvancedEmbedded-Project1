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
#define DIO_CONFIGURED_CHANNLES              (3U)

/* Channel Index in the array of structures */
#define DIO_LED1_CHANNEL_ID_INDEX         (uint8)0x00
#define DIO_LED2_CHANNEL_ID_INDEX         (uint8)0x01
#define DIO_LED3_CHANNEL_ID_INDEX         (uint8)0x02

/* DIO Configured Port ID's  */
#define DIO_LED1_PORT_NUM                 (Dio_PortType)5 /* PORTF */
#define DIO_LED2_PORT_NUM                 (Dio_PortType)5 /* PORTF */
#define DIO_LED3_PORT_NUM                 (Dio_PortType)5 /* PORTF */

/* DIO Configured Channel ID's */
#define DIO_LED1_CHANNEL_NUM              (Dio_ChannelType)1 /* Pin 1 in PORTF */
#define DIO_LED2_CHANNEL_NUM              (Dio_ChannelType)2 /* Pin 2 in PORTF */
#define DIO_LED3_CHANNEL_NUM              (Dio_ChannelType)3 /* Pin 3 in PORTF */

 
#endif  /* DIO_CFG_H */

/**********************************************************************************************************************
 *  END OF FILE: DIO_Cfg.h
 *********************************************************************************************************************/