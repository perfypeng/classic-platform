/* 
* Configuration of module Port (Port_Cfg.h)
* 
* Created by: 
* Configured for (MCU): MPC5567
* 
* Module vendor:  ArcCore
* Module version: 1.0.0
* 
* 
* Generated by Arctic Studio (http://arccore.com)
*           on Fri Apr 09 13:44:55 CEST 2010
*/


#if (PORT_SW_MAJOR_VERSION != 1) 
#error "Port: Configuration file version differs from BSW version."
#endif


#ifndef PORT_CFG_H_
#define PORT_CFG_H_

#include "Std_Types.h"

#define	PORT_VERSION_INFO_API				STD_OFF
#define	PORT_DEV_ERROR_DETECT				STD_ON
#define	PORT_PIN_DIRECTION_CHANGES_ALLOWED	STD_OFF

#define		BIT0			(1<<15)
#define		BIT1			(1<<14)
#define		BIT2			(1<<13)
#define		BIT3			(1<<12)
#define		BIT4			(1<<11)
#define		BIT5			(1<<10)
#define		BIT6			(1<<9)
#define		BIT7			(1<<8)
#define		BIT8			(1<<7)
#define		BIT9			(1<<6)
#define		BIT10			(1<<5)
#define		BIT11			(1<<4)
#define		BIT12			(1<<3)
#define		BIT13			(1<<2)
#define		BIT14			(1<<1)
#define		BIT15			(1<<0)

#define		WPE_BIT			BIT14
#define		WPS_BIT			BIT15
#define		SRC0			BIT12
#define		SRC1			BIT13

#define		PULL_UP			(WPE_BIT|WPS_BIT)
#define		PULL_DOWN		(WPE_BIT)
#define		PULL_NONE		0
#define		SLEW_RATE_MIN	0
#define		SLEW_RATE_MED	BIT13
#define		SLEW_RATE_MAX	(BIT12|BIT13)
#define		HYS_ENABLE		BIT11
#define		ODE_ENABLE		BIT10
#define		IBE_ENABLE		BIT7
#define		OBE_ENABLE		BIT6
#define		IO				(0)
#define		FUNC0			(0)
#define		FUNC1			(BIT5)
#define		FUNC2			(BIT4)
#define		FUNC3			(BIT4|BIT5)
#define		FUNC4			(BIT3)

#define		PCR_RESET		(0)
#define		GPDO_RESET		(0)

#define		GPDO_HIGH		(1)


typedef uint16 Port_PinType;

typedef struct
{
	uint16_t padCnt;
	const uint16_t *padConfig;
	uint16_t outCnt;
	const uint8_t *outConfig;
//	uint16_t inCnt;
//	const uint8_t *inConfig;
} Port_ConfigType;

extern const Port_ConfigType PortConfigData;

#endif /* PORT_CFG_H_ */