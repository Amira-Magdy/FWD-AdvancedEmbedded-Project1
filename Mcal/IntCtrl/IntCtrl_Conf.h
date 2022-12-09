/*
 * FILE NAME:	IntCtrl_Conf.h
 * AUTHOR: Amira_Magdy_Mohamed
 * DATE:	20/9/2022
 * COMMENT:	contains IntCtrl configurations
 */

#ifndef		INTCTRL_CONF_H
#define 	INTCTRL_CONF_H

/*  Includes  */

#include "IntCtrl_Int.h"

/************************************
    GLOBAL CONSTANT MACROS
************************************/

#define   	PRIORITY_GROUPING    	    YYY


/*Priority*/
/**************************************
		Non Programmable Priorities
#define 	Reset					-3
#define 	NMI						-2
#define 	Hard_Fault				-1
by default 
#define 	SVCALL_EN					ENABLED
#define 	DEBUG_MONITOR_EN			ENABLED
#define 	PENDSV_EN					ENABLED
#define 	SYSTICK_EN					ENABLED
***************************************/
#define 	Memory_Management_Priority		0
#define 	Bus_Fault_Priority				1
#define 	Usage_Fault_Priority			2
#define 	SVCall_Priority					3
#define 	Debug_Monitor_Priority			4
#define 	PendSV_Priority					5
#define 	SysTick_Priority				6


#define 	MEMORY_MANAGEMENT_EN		ENABLE 
#define 	BUS_FAULT_EN				ENABLE 
#define 	USAGE_FAULT_EN				ENABLE 



#if    		PRIORITY_GROUPING  ==    XXX
#define 			GROUP_0			0
#define 			GROUP_1			1
#define 			GROUP_2			2
#define 			GROUP_3			3
#define 			GROUP_4			4
#define 			GROUP_5			5
#define 			GROUP_6			6
#define 			GROUP_7			7

#define 			SUB_GROUP_0		0

#elif 		PRIORITY_GROUPING  ==    XXY
#define 			GROUP_0			0
#define 			GROUP_1			1
#define 			GROUP_2			2
#define 			GROUP_3			3

#define 			SUB_GROUP_0		0
#define 			SUB_GROUP_1		1

#elif		PRIORITY_GROUPING  ==    XYY

#define 			GROUP_0			0
#define 			GROUP_1			1

#define 			SUB_GROUP_0		0
#define 			SUB_GROUP_1		1
#define 			SUB_GROUP_2		2
#define 			SUB_GROUP_3		3

#elif		PRIORITY_GROUPING  ==    YYY

#define 			GROUP_0			0

#define 			SUB_GROUP_0		0
#define 			SUB_GROUP_1		1
#define 			SUB_GROUP_2		2
#define 			SUB_GROUP_3		3
#define 			SUB_GROUP_4		4
#define 			SUB_GROUP_5		5
#define 			SUB_GROUP_6		6
#define 			SUB_GROUP_7		7

#endif



/************************************
   CONFIGURATIONS ARRAY
************************************/
#define			IntName				0
#define			IntEnable			1
#define			Grouping			2
#define			SubGrouping			3
/*
IntCtrl_InterruptCfg[iteratingInt][IntName=0]
IntCtrl_InterruptCfg[iteratingInt][IntEnable=1]
IntCtrl_InterruptCfg[iteratingInt][Grouping=2]
IntCtrl_InterruptCfg[iteratingInt][SubGrouping=3]
*/ 

s32 IntCtrl_InterruptCfg [][4] =
{
	{ GPIO_Port_A,			ENABLE , GROUP_0 , SUB_GROUP_0 	},
	{ GPIO_Port_B,			ENABLE , GROUP_0 , SUB_GROUP_0 	},
	{ GPIO_Port_C,			ENABLE , GROUP_0 , SUB_GROUP_0 	},
	{ GPIO_Port_D,			ENABLE , GROUP_0 , SUB_GROUP_0 	},
	{ GPIO_Port_E,			ENABLE , GROUP_0 , SUB_GROUP_0 	}, 
	{ UART0,				DISABLE, GROUP_0 , SUB_GROUP_1 	}, 
	{ UART1,				DISABLE, GROUP_0 , SUB_GROUP_1 	}, 
	{ SSI0,					DISABLE, GROUP_0 , SUB_GROUP_1 	}, 
	{ I2C0,					DISABLE, GROUP_0 , SUB_GROUP_1 	}, 
	{ PWM0_Fault,			DISABLE, GROUP_0 , SUB_GROUP_1 	}, 
	{ PWM0_Generator_0,		DISABLE, GROUP_0 , SUB_GROUP_1 	}, 
	{ PWM0_Generator_1,		DISABLE, GROUP_0 , SUB_GROUP_1 	}, 
	{ PWM0_Generator_2,		DISABLE, GROUP_0 , SUB_GROUP_1 	}, 
	{ QEI0,					DISABLE, GROUP_0 , SUB_GROUP_1 	}, 
	{ ADC0_Sequence_0,		DISABLE, GROUP_0 , SUB_GROUP_1 	}, 
	{ ADC0_Sequence_1,		DISABLE, GROUP_0 , SUB_GROUP_1 	}, 
	{ ADC0_Sequence_2,		DISABLE, GROUP_0 , SUB_GROUP_1 	}, 
	{ ADC0_Sequence_3,		DISABLE, GROUP_0 , SUB_GROUP_1 	}, 
	{ Watchdog_Timers,		DISABLE, GROUP_0 , SUB_GROUP_1 	}, 
	{ Timer_0A,				ENABLE , GROUP_0 , SUB_GROUP_1 	}, 
	{ Timer_0B,				DISABLE, GROUP_0 , SUB_GROUP_1 	}, 
	{ Timer_1A,				ENABLE , GROUP_0 , SUB_GROUP_1 	}, 
	{ Timer_1B,				DISABLE, GROUP_0 , SUB_GROUP_1 	}, 
	{ Timer_2A,				ENABLE , GROUP_0 , SUB_GROUP_1 	}, 
	{ Timer_2B,				DISABLE, GROUP_0 , SUB_GROUP_1 	}, 
	{ Analog_Comparator_0,	DISABLE, GROUP_0 , SUB_GROUP_1 	}, 
	{ Analog_Comparator_1,	DISABLE, GROUP_0 , SUB_GROUP_1 	}, 
	{ _res1 ,				RESERVED,RESERVED,	RESERVED	}, 
	{ System_Control,		DISABLE, GROUP_0 , SUB_GROUP_1 	}, 
	{ Flash_Memory_Control,	DISABLE, GROUP_0 , SUB_GROUP_1	}, 
	{ EEPROM_Control,		DISABLE, GROUP_0 , SUB_GROUP_1 	}, 
	{ GPIO_Port_F,			ENABLE , GROUP_0 , SUB_GROUP_1 	}, 
	{ _res2 ,				RESERVED,RESERVED,RESERVED	   	}, 
	{ UART2,				DISABLE, GROUP_0 , SUB_GROUP_1 	}, 
	{ SSI1,					DISABLE, GROUP_0 , SUB_GROUP_1 	}, 
	{ Timer_3A,				ENABLE , GROUP_0 , SUB_GROUP_1 	}, 
	{ Timer_3B,				DISABLE, GROUP_0 , SUB_GROUP_1 	}, 
	{ I2C1,					DISABLE, GROUP_0 , SUB_GROUP_1 	}, 
	{ QEI1,					DISABLE, GROUP_0 , SUB_GROUP_1 	}, 
	{ CAN0,					DISABLE, GROUP_0 , SUB_GROUP_1 	}, 
	{ CAN1,					DISABLE, GROUP_0 , SUB_GROUP_1 	}, 
	{ _res3,				RESERVED,RESERVED,RESERVED		}, 
	{ Hibernation_Module,	DISABLE, GROUP_0 , SUB_GROUP_1 	}, 
	{ USB,					DISABLE, GROUP_0 , SUB_GROUP_1 	}, 
	{ PWM_Generator_3,		DISABLE, GROUP_0 , SUB_GROUP_1 	}, 
	{ uDMA_Software,		DISABLE, GROUP_0 , SUB_GROUP_1 	}, 
	{ uDMA_Error,			DISABLE, GROUP_0 , SUB_GROUP_1 	}, 
	{ ADC1_Sequence_0,		DISABLE, GROUP_0 , SUB_GROUP_1 	}, 
	{ ADC1_Sequence_1,		DISABLE, GROUP_0 , SUB_GROUP_1 	}, 
	{ ADC1_Sequence_2,		DISABLE, GROUP_0 , SUB_GROUP_1 	}, 
	{ ADC1_Sequence_3,		DISABLE, GROUP_0 , SUB_GROUP_1 	}, 
	{ _res4,				RESERVED,RESERVED, RESERVED		}, 
	{ SSI2,					DISABLE, GROUP_0 , SUB_GROUP_1 	}, 
	{ SSI3,					DISABLE, GROUP_0 , SUB_GROUP_1 	}, 
	{ UART3,				DISABLE, GROUP_0 , SUB_GROUP_1 	}, 
	{ UART4,				DISABLE, GROUP_0 , SUB_GROUP_1 	}, 
	{ UART5,				DISABLE, GROUP_0 , SUB_GROUP_1 	}, 
	{ UART6,				DISABLE, GROUP_0 , SUB_GROUP_2 	}, 
	{ UART7,				DISABLE, GROUP_0 , SUB_GROUP_2 	}, 
	{ _res5,				RESERVED,RESERVED, RESERVED		}, 
	{ I2C2,					DISABLE, GROUP_0 , SUB_GROUP_2 	}, 
	{ I2C3,					DISABLE, GROUP_0 , SUB_GROUP_2 	}, 
	{ Timer_4A,				ENABLE , GROUP_0 , SUB_GROUP_2 	}, 
	{ Timer_4B,				DISABLE, GROUP_0 , SUB_GROUP_2 	}, 
	{ _res6 ,				RESERVED,RESERVED, RESERVED		}, 
	{ Timer_5A,				ENABLE , GROUP_0 , SUB_GROUP_2 	}, 
	{ Timer_5B,				DISABLE, GROUP_0 , SUB_GROUP_2 	}, 
	{ Wide_Timer_0A,		ENABLE , GROUP_0 , SUB_GROUP_2 	}, 
	{ Wide_Timer_0B,		DISABLE, GROUP_0 , SUB_GROUP_2 	}, 
	{ Wide_Timer_1A,		ENABLE , GROUP_0 , SUB_GROUP_2 	}, 
	{ Wide_Timer_1B,		DISABLE, GROUP_0 , SUB_GROUP_2 	}, 
	{ Wide_Timer_2A,		ENABLE , GROUP_0 , SUB_GROUP_2 	}, 
	{ Wide_Timer_2B,		DISABLE, GROUP_0 , SUB_GROUP_2 	}, 
	{ Wide_Timer_3A,		ENABLE , GROUP_0 , SUB_GROUP_2 	}, 
	{ Wide_Timer_3B,		DISABLE, GROUP_0 , SUB_GROUP_2 	}, 
	{ Wide_Timer_4A,		ENABLE , GROUP_0 , SUB_GROUP_2 	}, 
	{ Wide_Timer_4B,		DISABLE, GROUP_0 , SUB_GROUP_2 	}, 
	{ Wide_Timer_5A,		ENABLE , GROUP_0 , SUB_GROUP_2 	}, 
	{ Wide_Timer_5B,		DISABLE, GROUP_0 , SUB_GROUP_2 	}, 
	{ System_Exception,		DISABLE, GROUP_0 , SUB_GROUP_2 	}, 
	{ _res7 ,				RESERVED,RESERVED, RESERVED		}, 
	{ PWM1_Generator_0,		DISABLE, GROUP_0 , SUB_GROUP_2 	}, 
	{ PWM1_Generator_1,		DISABLE, GROUP_0 , SUB_GROUP_2 	}, 
	{ PWM1_Generator_2,		DISABLE, GROUP_0 , SUB_GROUP_2 	}, 
	{ PWM1_Generator_3,		DISABLE, GROUP_0 , SUB_GROUP_2 	}, 
	{ PWM1_Fault,			DISABLE, GROUP_0 , SUB_GROUP_2 	}
};

#endif	