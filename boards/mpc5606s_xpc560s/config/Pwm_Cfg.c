/*
* Configuration of module: Pwm (Pwm_Cfg.c)
*
* Created by:              
* Copyright:               
*
* Configured for (MCU):    MPC560x
*
* Module vendor:           ArcCore
* Generator version:       2.0.2
*
* Generated by Arctic Studio (http://arccore.com) 
*           on Fri May 27 15:20:33 CEST 2011
*/


#include "Pwm.h"
#include "Pwm_Cfg.h"


/*
 * Notification routines are defined elsewhere but need to be linked from here,
 * so we define the routines as external here.
 */

const Pwm_ConfigType PwmConfig = {
	.Channels = {
	
		{
			.channel   = PWM_CHANNEL_1,
			.frequency = 125, // Hz
			.duty      = 12288,
			.prescaler = PWM_CHANNEL_PRESCALER_1,
			.polarity  = PWM_HIGH,
		},
		{
			.channel   = PWM_CHANNEL_2,
			.frequency = 20, // Hz
			.duty      = 20480,
			.prescaler = PWM_CHANNEL_PRESCALER_AUTO,
			.polarity  = PWM_HIGH,
		},
		{
			.channel   = PWM_CHANNEL_3,
			.frequency = 125, // Hz
			.duty      = 16384,
			.prescaler = PWM_CHANNEL_PRESCALER_2,
			.polarity  = PWM_HIGH,
		},
		{
			.channel   = PWM_CHANNEL_4,
			.frequency = 125, // Hz
			.duty      = 4096,
			.prescaler = PWM_CHANNEL_PRESCALER_AUTO,
			.polarity  = PWM_HIGH,
		},
	},
	.IdleState = {
			PWM_LOW,
			PWM_LOW,
			PWM_LOW,
			PWM_LOW,
	},
#if PWM_SET_PERIOD_AND_DUTY==STD_ON
	.ChannelClass={	
			PWM_VARIABLE_PERIOD,	
			PWM_VARIABLE_PERIOD,	
			PWM_VARIABLE_PERIOD,	
			PWM_VARIABLE_PERIOD,			
	},
#endif	
#if PWM_NOTIFICATION_SUPPORTED==STD_ON
	.NotificationHandlers = {
// Notification routine for PWM_CHANNEL_1
		NULL,							
// Notification routine for PWM_CHANNEL_2
		NULL,							
// Notification routine for PWM_CHANNEL_3
		NULL,							
// Notification routine for PWM_CHANNEL_4
		NULL,							
	}
#endif
};