
# ARCH defines
ARCH=mpc5xxx
ARCH_FAM=ppc

# CFG (y/n) macros
CFG=PPC E200Z4D MPC55XX MPC560X MPC5646B BRD_MPC5646B_XPC564XBC
CFG+=VLE
CFG+=SPE_FPU_SCALAR_SINGLE
CFG+=MCU_ARC_CONFIG
CFG+=CREATE_SREC
#CFG+=SPE
CFG+=MCU_ARC_LP

# What buildable modules does this board have, 
# default or private

# Memory + Peripherals
# MCAL
MOD_AVAIL+=ADC DIO DMA CAN GPT LIN MCU PORT PWM WDG SPI OCU ICU FLS
# Required modules
MOD_USE += MCU KERNEL 

# Default cross compiler
COMPILER?=cw
COMPILER_FLAVOR=s32_newlib
ifneq ($(filter CFG_VLE,$(CFG)),)
DEFAULT_CROSS_COMPILE = /opt/powerpc-eabispe/bin/powerpc-eabispe-
else 
# S32 Tools
DEFAULT_CROSS_COMPILE = /c/devtools/Freescale/S32_Power_v1.1/Cross_Tools/powerpc-eabivle-4_9/bin/powerpc-eabivle-
endif

DEFAULT_CW_COMPILE= /c/devtools/Freescale/cw_mpc5xxx_2.10
DEFAULT_DIAB_COMPILE = /c/devtools/WindRiver/diab/5.9.3.0/WIN32
DEFAULT_GHS_COMPILE = /c/devtools/ghs/comp_201314p
# Defines
#def-y += __BIG_ENDIAN__
def-y += SRAM_SIZE=0x30000

vle=$(if $(filter $(CFG),VLE),y)
novle=$(if $(vle),n,y)
SPE_FPU_SCALAR_SINGLE=$(if $(filter $(CFG),SPE_FPU_SCALAR_SINGLE),y)
nospe=$(if $(SPE_FPU_SCALAR_SINGLE),n,y)

diab-$(vle)$(nospe)+=-tPPCE200Z4DVFS:simple
diab-$(novle)$(nospe)+=-tPPCE200Z4DNMS:simple
diab-$(vle)$(SPE_FPU_SCALAR_SINGLE)+=-tPPCE200Z4DVFF:simple		
diab-y+=$(diab-yy)

DIAB_TARGET?=$(diab-y)

GHS_TARGET?=ppc564xs