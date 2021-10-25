/*******************************************************************************
Copyright (c) 2021 - Analog Devices Inc. All Rights Reserved.
This software is proprietary & confidential to Analog Devices, Inc.
and its licensors.
******************************************************************************
* @brief: This file contains I2C command sequence to be followed for discovery 
*         and configuration of A2B nodes for an A2B schematic
* @version: $Revision$
* @date: Monday, October 25, 2021-12:12:59 AM
* I2C Command File Version - 1.0.0
* A2B DLL version- 19.3.0
* A2B Stack DLL version- 19.3.0.0
* SigmaStudio version- 4.06.000.1812
* Developed by: Automotive Software and Systems team, Bangalore, India
* THIS IS A SIGMASTUDIO GENERATED FILE
*****************************************************************************/

/*! \addtogroup ADI_A2B_DISCOVERY_CONFIG ADI_A2B_DISCOVERY_CONFIG 
* @{
*/
#ifndef _ADI_A2B_I2C_LIST_H_ 
#define _ADI_A2B_I2C_LIST_H_ 

/*! \struct ADI_A2B_DISCOVERY_CONFIG 
A2B discovery config unit structure 
*/
typedef struct 
 { 
/*!  Device address */
	unsigned char nDeviceAddr;

/*!  Operation code */
	unsigned char eOpCode;

/*! Reg Sub address width (in bytes) */
	unsigned char nAddrWidth;

/*! Reg Sub address */
	unsigned int nAddr;

/*! Reg data width (in bytes) */
	unsigned char nDataWidth;

/*! Reg data count (in bytes) */
	unsigned short nDataCount;

/*! Config Data */
	unsigned char* paConfigData;


} ADI_A2B_DISCOVERY_CONFIG;

#define WRITE   ((unsigned char) 0x00u)
#define READ    ((unsigned char) 0x01u)
#define DELAY   ((unsigned char) 0x02u)
#define INVALID ((unsigned char) 0xffu)

#define CONFIG_LEN (149) 


static unsigned char gaConfig_ADAU1761Codec_DSPRun_Data0[1] =
{
	0x00u	
};

static unsigned char gaConfig_ADAU1761Codec_ClockCtrl_Data1[1] =
{
	0x0Fu	
};

static unsigned char gaConfig_ADAU1761Codec_PLLCtrl_Data2[6] =
{
	0x00u,	0x01u,	0x00u,	0x00u,	0x20u,	0x03u	
};

static unsigned char gaConfig_ADAU1761Codec_Delay_Data3[2] =
{
	0x00u,	0x64u	
};

static unsigned char gaConfig_ADAU1761Codec_SerialPortCtrl_Data4[2] =
{
	0x00u,	0x00u	
};

static unsigned char gaConfig_ADAU1761Codec_ALCCtrl_Data5[4] =
{
	0xF8u,	0x3Bu,	0x68u,	0x31u	
};

static unsigned char gaConfig_ADAU1761Codec_MicrophoneCtrl_Data6[1] =
{
	0x01u	
};

static unsigned char gaConfig_ADAU1761Codec_RecInPath_Data7[8] =
{
	0x00u,	0x01u,	0x05u,	0x01u,	0x05u,	0x6Eu,	0x6Eu,	0x00u	
};

static unsigned char gaConfig_ADAU1761Codec_ADCCtrl_Data8[3] =
{
	0x33u,	0x00u,	0x00u	
};

static unsigned char gaConfig_ADAU1761Codec_PlaybackOutputPath_Data9[14] =
{
	0x01u,	0x00u,	0x01u,	0x00u,	0x03u,	0x09u,	0x01u,	0xE5u,	0xE5u,	0xE6u,	
	0xE6u,	0xE7u,	0x00u,	0x03u	
};

static unsigned char gaConfig_ADAU1761Codec_ConverterCtrl_Data10[2] =
{
	0x00u,	0x00u	
};

static unsigned char gaConfig_ADAU1761Codec_DACCtrl_Data11[3] =
{
	0x03u,	0x00u,	0x00u	
};

static unsigned char gaConfig_ADAU1761Codec_SerialPortPadCtrl_Data12[1] =
{
	0xAAu	
};

static unsigned char gaConfig_ADAU1761Codec_ComPortPadCtrl_Data13[2] =
{
	0xAAu,	0x01u	
};

static unsigned char gaConfig_ADAU1761Codec_JackDetCtrl_Data14[1] =
{
	0x08u	
};

static unsigned char gaConfig_ADAU1761Codec_DSPOn_Data15[1] =
{
	0x01u	
};

static unsigned char gaConfig_ADAU1761Codec_CRC_Data16[5] =
{
	0x6Du,	0x08u,	0x24u,	0x7Fu,	0x00u	
};

static unsigned char gaConfig_ADAU1761Codec_GPIO_Data17[4] =
{
	0x00u,	0x00u,	0x00u,	0x00u	
};

static unsigned char gaConfig_ADAU1761Codec_NonModulo_Data18[2] =
{
	0x10u,	0x00u	
};

static unsigned char gaConfig_ADAU1761Codec_Watchdog_Data19[5] =
{
	0x00u,	0x00u,	0x00u,	0x00u,	0x00u	
};

static unsigned char gaConfig_ADAU1761Codec_SRSetting_Data20[1] =
{
	0x7Fu	
};

static unsigned char gaConfig_ADAU1761Codec_RoutingMatrixInputs_Data21[1] =
{
	0x00u	
};

static unsigned char gaConfig_ADAU1761Codec_RoutingMatrixOutputs_Data22[1] =
{
	0x00u	
};

static unsigned char gaConfig_ADAU1761Codec_SerialDataConfig_Data23[1] =
{
	0x00u	
};

static unsigned char gaConfig_ADAU1761Codec_DSPSlewMode_Data24[1] =
{
	0x00u	
};

static unsigned char gaConfig_ADAU1761Codec_SerialPortSR_Data25[1] =
{
	0x00u	
};

static unsigned char gaConfig_ADAU1761Codec_ClockEnable_Data26[2] =
{
	0x00u,	0x00u	
};

static unsigned char gaConfig_ADAU1761Codec_ProgramData_Data27[235] =
{
	0x00u,	0x00u,	0x00u,	0x00u,	0x00u,	0xFEu,	0xE0u,	0x00u,	0x00u,	0x00u,	
	0xFFu,	0x34u,	0x00u,	0x00u,	0x00u,	0xFFu,	0x2Cu,	0x00u,	0x00u,	0x00u,	
	0xFFu,	0x54u,	0x00u,	0x00u,	0x00u,	0xFFu,	0x5Cu,	0x00u,	0x00u,	0x00u,	
	0xFFu,	0xF5u,	0x08u,	0x20u,	0x00u,	0xFFu,	0x38u,	0x00u,	0x00u,	0x00u,	
	0xFFu,	0x80u,	0x00u,	0x00u,	0x00u,	0x00u,	0x00u,	0x00u,	0x00u,	0x00u,	
	0x00u,	0x00u,	0x00u,	0x00u,	0x00u,	0xFEu,	0xE8u,	0x0Cu,	0x00u,	0x00u,	
	0xFEu,	0x30u,	0x00u,	0xE2u,	0x00u,	0x00u,	0x00u,	0x00u,	0x00u,	0x00u,	
	0x00u,	0x00u,	0x00u,	0x00u,	0x00u,	0x00u,	0x00u,	0x00u,	0x00u,	0x00u,	
	0x00u,	0x00u,	0x00u,	0x00u,	0x00u,	0x00u,	0x00u,	0x00u,	0x00u,	0x00u,	
	0x00u,	0x00u,	0x00u,	0x00u,	0x00u,	0xFFu,	0xE8u,	0x07u,	0x20u,	0x08u,	
	0x00u,	0x00u,	0x06u,	0xA0u,	0x00u,	0xFFu,	0xE0u,	0x00u,	0xC0u,	0x00u,	
	0xFFu,	0x80u,	0x07u,	0x00u,	0x00u,	0x00u,	0x00u,	0x00u,	0x00u,	0x00u,	
	0xFFu,	0x00u,	0x00u,	0x00u,	0x00u,	0xFEu,	0xC0u,	0x22u,	0x00u,	0x27u,	
	0x00u,	0x00u,	0x00u,	0x00u,	0x00u,	0xFEu,	0xE8u,	0x1Eu,	0x00u,	0x00u,	
	0xFFu,	0xE8u,	0x01u,	0x20u,	0x00u,	0xFFu,	0xD8u,	0x01u,	0x03u,	0x00u,	
	0x00u,	0x07u,	0xC6u,	0x00u,	0x00u,	0xFFu,	0x08u,	0x00u,	0x00u,	0x00u,	
	0xFFu,	0xF4u,	0x00u,	0x20u,	0x00u,	0xFFu,	0xD8u,	0x07u,	0x02u,	0x00u,	
	0xFDu,	0xA5u,	0x08u,	0x20u,	0x00u,	0x00u,	0x00u,	0x00u,	0xE2u,	0x00u,	
	0xFDu,	0xADu,	0x08u,	0x20u,	0x00u,	0x00u,	0x08u,	0x00u,	0xE2u,	0x00u,	
	0x00u,	0x05u,	0x08u,	0x20u,	0x00u,	0xFDu,	0x60u,	0x00u,	0xE2u,	0x00u,	
	0x00u,	0x0Du,	0x08u,	0x20u,	0x00u,	0xFDu,	0x68u,	0x00u,	0xE2u,	0x00u,	
	0x00u,	0x00u,	0x00u,	0x00u,	0x00u,	0xFEu,	0x30u,	0x00u,	0x00u,	0x00u,	
	0x00u,	0x00u,	0x00u,	0x00u,	0x00u,	0xFEu,	0xC0u,	0x0Fu,	0x00u,	0x00u,	
	0x00u,	0x00u,	0x00u,	0x00u,	0x00u	
};

static unsigned char gaConfig_ADAU1761Codec_Param_Data28[32] =
{
	0x00u,	0x00u,	0x10u,	0x00u,	0x00u,	0x00u,	0x00u,	0x00u,	0x00u,	0x00u,	
	0x00u,	0x00u,	0x00u,	0x00u,	0x00u,	0x00u,	0x00u,	0x00u,	0x00u,	0x00u,	
	0x00u,	0x00u,	0x00u,	0x00u,	0x00u,	0x00u,	0x00u,	0x00u,	0x00u,	0x00u,	
	0x00u,	0x00u	
};

static unsigned char gaConfig_ADAU1761Codec_DSPRun_Data29[1] =
{
	0x01u	
};

static unsigned char gaConfig_ADAU1761Codec_DejitterCtrl_Data30[1] =
{
	0x00u	
};

static unsigned char gaConfig_ADAU1761Codec_DejitterCtrl_Data31[1] =
{
	0x03u	
};

static unsigned char gaConfig_AD242xMasterNode0_CONTROL_Data0[1] =
{
	0x84u	
};

static unsigned char gaConfig_AD242xMasterNode0_A2BDelay_Data1[1] =
{
	0x19u	
};

static unsigned char gaConfig_AD242xMasterNode0_INTTYPE_Data2[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xMasterNode0_INTMSK0_Data3[1] =
{
	0x10u	
};

static unsigned char gaConfig_AD242xMasterNode0_INTMSK1_Data4[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xMasterNode0_INTMSK2_Data5[1] =
{
	0x09u	
};

static unsigned char gaConfig_AD242xMasterNode0_RESPCYCS_Data6[1] =
{
	0x9Eu	
};

static unsigned char gaConfig_AD242xMasterNode0_CONTROL_Data7[1] =
{
	0x01u	
};

static unsigned char gaConfig_AD242xMasterNode0_I2SGCFG_Data8[1] =
{
	0x02u	
};

static unsigned char gaConfig_AD242xMasterNode0_SWCTL_Data9[1] =
{
	0x01u	
};

static unsigned char gaConfig_AD242xMasterNode0_DISCVRY_Data10[1] =
{
	0x9Eu	
};

static unsigned char gaConfig_AD242xMasterNode0_A2BDelay_Data11[1] =
{
	0x32u	
};

static unsigned char gaConfig_AD242xMasterNode0_INTPND2_Data12[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xMasterNode0_INTPND2_Data13[1] =
{
	0x01u	
};

static unsigned char gaConfig_AD242xMasterNode0_NODEADR_Data14[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD241xSlaveNode0_VENDOR_Data0[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD241xSlaveNode0_PRODUCT_Data1[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD241xSlaveNode0_VERSION_Data2[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xMasterNode0_SWCTL_Data15[1] =
{
	0x21u	
};

static unsigned char gaConfig_AD242xMasterNode0_NODEADR_Data16[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD241xSlaveNode0_PLLCTL_Data3[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD241xSlaveNode0_BCDNSLOTS_Data4[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD241xSlaveNode0_LDNSLOTS_Data5[1] =
{
	0x08u	
};

static unsigned char gaConfig_AD241xSlaveNode0_LUPSLOTS_Data6[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD241xSlaveNode0_I2CCFG_Data7[1] =
{
	0x01u	
};

static unsigned char gaConfig_AD241xSlaveNode0_SYNCOFFSET_Data8[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD241xSlaveNode0_I2SGCFG_Data9[1] =
{
	0x01u	
};

static unsigned char gaConfig_AD241xSlaveNode0_I2SCFG_Data10[1] =
{
	0x03u	
};

static unsigned char gaConfig_AD241xSlaveNode0_I2SRATE_Data11[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD241xSlaveNode0_PDMCTL_Data12[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD241xSlaveNode0_ERRMGMT_Data13[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD241xSlaveNode0_CLKCFG_Data14[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD241xSlaveNode0_GPIODAT_Data15[1] =
{
	0x44u	
};

static unsigned char gaConfig_AD241xSlaveNode0_GPIOOEN_Data16[1] =
{
	0x47u	
};

static unsigned char gaConfig_AD241xSlaveNode0_GPIOIEN_Data17[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD241xSlaveNode0_PINTEN_Data18[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD241xSlaveNode0_PINTINV_Data19[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD241xSlaveNode0_PINCFG_Data20[1] =
{
	0x01u	
};

static unsigned char gaConfig_AD241xSlaveNode0_TESTMODE_Data21[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD241xSlaveNode0_INTMSK0_Data22[1] =
{
	0x10u	
};

static unsigned char gaConfig_AD241xSlaveNode0_INTMSK1_Data23[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD241xSlaveNode0_BECCTL_Data24[1] =
{
	0xEFu	
};

static unsigned char gaConfig_AD242xMasterNode0_NODEADRSet_Data17[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD241xSlaveNode0_CHIPSet_Data25[1] =
{
	0x70u	
};

static unsigned char gaConfig_AD242xMasterNode0_NODEADREnable_Data18[1] =
{
	0x20u	
};

static unsigned char gaConfig_GPIOExpander_PCA9538Data_Data0[1] =
{
	0x14u	
};

static unsigned char gaConfig_GPIOExpander_PCA9538Config_Data1[1] =
{
	0x88u	
};

static unsigned char gaConfig_GPIOExpander_Delay_Data2[2] =
{
	0x01u,	0x64u	
};

static unsigned char gaConfig_GPIOExpander_PCA9538Data_Data3[1] =
{
	0x16u	
};

static unsigned char gaConfig_GPIOExpander_Delay_Data4[2] =
{
	0x01u,	0x64u	
};

static unsigned char gaConfig_AD242xMasterNode0_NODEADRDisable_Data19[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD241xSlaveNode0_CHIPSet_Data26[1] =
{
	0x6Cu	
};

static unsigned char gaConfig_AD242xMasterNode0_NODEADREnable_Data20[1] =
{
	0x20u	
};

static unsigned char gaConfig_TDA7802_TDA7802IB0_Data0[1] =
{
	0x0Fu	
};

static unsigned char gaConfig_TDA7802_TDA7802IB1_Data1[1] =
{
	0x00u	
};

static unsigned char gaConfig_TDA7802_TDA7802IB2_Data2[1] =
{
	0x18u	
};

static unsigned char gaConfig_TDA7802_TDA7802IB3_Data3[1] =
{
	0x49u	
};

static unsigned char gaConfig_TDA7802_TDA7802IB4_Data4[1] =
{
	0x00u	
};

static unsigned char gaConfig_TDA7802_TDA7802IB5_Data5[1] =
{
	0x01u	
};

static unsigned char gaConfig_AD242xMasterNode0_NODEADRDisable_Data21[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD241xSlaveNode0_CHIPSet_Data27[1] =
{
	0x6Eu	
};

static unsigned char gaConfig_AD242xMasterNode0_NODEADREnable_Data22[1] =
{
	0x20u	
};

static unsigned char gaConfig_FDA2100_FDA2100IB0_Data0[1] =
{
	0x5Cu	
};

static unsigned char gaConfig_FDA2100_FDA2100IB1_Data1[1] =
{
	0x07u	
};

static unsigned char gaConfig_FDA2100_FDA2100IB2_Data2[1] =
{
	0x0Fu	
};

static unsigned char gaConfig_FDA2100_FDA2100IB3_Data3[1] =
{
	0x00u	
};

static unsigned char gaConfig_FDA2100_FDA2100IB4_Data4[1] =
{
	0x00u	
};

static unsigned char gaConfig_FDA2100_FDA2100IB5_Data5[1] =
{
	0x11u	
};

static unsigned char gaConfig_FDA2100_FDA2100IB6_Data6[1] =
{
	0x11u	
};

static unsigned char gaConfig_FDA2100_FDA2100IB7_Data7[1] =
{
	0x11u	
};

static unsigned char gaConfig_FDA2100_FDA2100IB8_Data8[1] =
{
	0x11u	
};

static unsigned char gaConfig_FDA2100_FDA2100IB9_Data9[1] =
{
	0x00u	
};

static unsigned char gaConfig_FDA2100_FDA2100IB10_Data10[1] =
{
	0x00u	
};

static unsigned char gaConfig_FDA2100_FDA2100IB11_Data11[1] =
{
	0x00u	
};

static unsigned char gaConfig_FDA2100_FDA2100IB12_Data12[1] =
{
	0x40u	
};

static unsigned char gaConfig_FDA2100_FDA2100IB13_Data13[1] =
{
	0x00u	
};

static unsigned char gaConfig_FDA2100_FDA2100IB14_Data14[1] =
{
	0x03u	
};

static unsigned char gaConfig_AD242xMasterNode0_NODEADRDisable_Data23[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xMasterNode0_I2CCFG_Data24[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xMasterNode0_I2SCFG_Data25[1] =
{
	0x10u	
};

static unsigned char gaConfig_AD242xMasterNode0_I2STXOFFSET_Data26[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xMasterNode0_I2SRXOFFSET_Data27[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xMasterNode0_PDMCTL_Data28[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xMasterNode0_PDMCTL2_Data29[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xMasterNode0_ERRMGMT_Data30[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xMasterNode0_GPIODAT_Data31[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xMasterNode0_GPIOOEN_Data32[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xMasterNode0_GPIOIEN_Data33[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xMasterNode0_PINTEN_Data34[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xMasterNode0_PINTINV_Data35[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xMasterNode0_PINCFG_Data36[1] =
{
	0x01u	
};

static unsigned char gaConfig_AD242xMasterNode0_TESTMODE_Data37[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xMasterNode0_CLK1CFG_Data38[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xMasterNode0_CLK2CFG_Data39[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xMasterNode0_GPIOD0MSK_Data40[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xMasterNode0_GPIOD1MSK_Data41[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xMasterNode0_GPIOD2MSK_Data42[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xMasterNode0_GPIOD3MSK_Data43[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xMasterNode0_GPIOD4MSK_Data44[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xMasterNode0_GPIOD5MSK_Data45[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xMasterNode0_GPIOD6MSK_Data46[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xMasterNode0_GPIOD7MSK_Data47[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xMasterNode0_GPIODINV_Data48[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xMasterNode0_GPIODEN_Data49[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xMasterNode0_I2SRRCTL_Data50[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xMasterNode0_TXACTL_Data51[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xMasterNode0_TXBCTL_Data52[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xMasterNode0_BECCTL_Data53[1] =
{
	0xEFu	
};

static unsigned char gaConfig_AD242xMasterNode0_DNSLOTS_Data54[1] =
{
	0x08u	
};

static unsigned char gaConfig_AD242xMasterNode0_UPSLOTS_Data55[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xMasterNode0_SWCTL_Data56[1] =
{
	0x01u	
};

static unsigned char gaConfig_AD242xMasterNode0_PLLCTL_Data57[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xMasterNode0_NODEADR_Data58[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xMasterNode0_SLOTFMT_Data59[1] =
{
	0x66u	
};

static unsigned char gaConfig_AD242xMasterNode0_DATCTL_Data60[1] =
{
	0x03u	
};

static unsigned char gaConfig_AD242xMasterNode0_I2SRRATE_Data61[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xMasterNode0_CONTROL_Data62[1] =
{
	0x01u	
};

ADI_A2B_DISCOVERY_CONFIG gaA2BConfig[CONFIG_LEN] =
{

	/*-- COMMANDS FOR DEVICE - ADAU1761 Codec --*/
	{0x39u,	WRITE,	0x02u,	0x000040F6u,	0x01u,	0x0001u,	&gaConfig_ADAU1761Codec_DSPRun_Data0[0]},	/* DSPRun */
	{0x39u,	WRITE,	0x02u,	0x00004000u,	0x01u,	0x0001u,	&gaConfig_ADAU1761Codec_ClockCtrl_Data1[0]},	/* ClockCtrl */
	{0x39u,	WRITE,	0x02u,	0x00004002u,	0x01u,	0x0006u,	&gaConfig_ADAU1761Codec_PLLCtrl_Data2[0]},	/* PLLCtrl */
	{0x00u,	DELAY,	0x02u,	0x00000000u,	0x01u,	0x0002u,	&gaConfig_ADAU1761Codec_Delay_Data3[0]},	/* Delay */
	{0x39u,	WRITE,	0x02u,	0x00004015u,	0x01u,	0x0002u,	&gaConfig_ADAU1761Codec_SerialPortCtrl_Data4[0]},	/* SerialPortCtrl */
	{0x39u,	WRITE,	0x02u,	0x00004011u,	0x01u,	0x0004u,	&gaConfig_ADAU1761Codec_ALCCtrl_Data5[0]},	/* ALCCtrl */
	{0x39u,	WRITE,	0x02u,	0x00004008u,	0x01u,	0x0001u,	&gaConfig_ADAU1761Codec_MicrophoneCtrl_Data6[0]},	/* MicrophoneCtrl */
	{0x39u,	WRITE,	0x02u,	0x00004009u,	0x01u,	0x0008u,	&gaConfig_ADAU1761Codec_RecInPath_Data7[0]},	/* RecInPath */
	{0x39u,	WRITE,	0x02u,	0x00004019u,	0x01u,	0x0003u,	&gaConfig_ADAU1761Codec_ADCCtrl_Data8[0]},	/* ADCCtrl */
	{0x39u,	WRITE,	0x02u,	0x0000401Cu,	0x01u,	0x000Eu,	&gaConfig_ADAU1761Codec_PlaybackOutputPath_Data9[0]},	/* PlaybackOutputPath */
	{0x39u,	WRITE,	0x02u,	0x00004017u,	0x01u,	0x0002u,	&gaConfig_ADAU1761Codec_ConverterCtrl_Data10[0]},	/* ConverterCtrl */
	{0x39u,	WRITE,	0x02u,	0x0000402Au,	0x01u,	0x0003u,	&gaConfig_ADAU1761Codec_DACCtrl_Data11[0]},	/* DACCtrl */
	{0x39u,	WRITE,	0x02u,	0x0000402Du,	0x01u,	0x0001u,	&gaConfig_ADAU1761Codec_SerialPortPadCtrl_Data12[0]},	/* SerialPortPadCtrl */
	{0x39u,	WRITE,	0x02u,	0x0000402Fu,	0x01u,	0x0002u,	&gaConfig_ADAU1761Codec_ComPortPadCtrl_Data13[0]},	/* ComPortPadCtrl */
	{0x39u,	WRITE,	0x02u,	0x00004031u,	0x01u,	0x0001u,	&gaConfig_ADAU1761Codec_JackDetCtrl_Data14[0]},	/* JackDetCtrl */
	{0x39u,	WRITE,	0x02u,	0x000040F5u,	0x01u,	0x0001u,	&gaConfig_ADAU1761Codec_DSPOn_Data15[0]},	/* DSPOn */
	{0x39u,	WRITE,	0x02u,	0x000040C0u,	0x01u,	0x0005u,	&gaConfig_ADAU1761Codec_CRC_Data16[0]},	/* CRC */
	{0x39u,	WRITE,	0x02u,	0x000040C6u,	0x01u,	0x0004u,	&gaConfig_ADAU1761Codec_GPIO_Data17[0]},	/* GPIO */
	{0x39u,	WRITE,	0x02u,	0x000040E9u,	0x01u,	0x0002u,	&gaConfig_ADAU1761Codec_NonModulo_Data18[0]},	/* NonModulo */
	{0x39u,	WRITE,	0x02u,	0x000040D0u,	0x01u,	0x0005u,	&gaConfig_ADAU1761Codec_Watchdog_Data19[0]},	/* Watchdog */
	{0x39u,	WRITE,	0x02u,	0x000040EBu,	0x01u,	0x0001u,	&gaConfig_ADAU1761Codec_SRSetting_Data20[0]},	/* SRSetting */
	{0x39u,	WRITE,	0x02u,	0x000040F2u,	0x01u,	0x0001u,	&gaConfig_ADAU1761Codec_RoutingMatrixInputs_Data21[0]},	/* RoutingMatrixInputs */
	{0x39u,	WRITE,	0x02u,	0x000040F3u,	0x01u,	0x0001u,	&gaConfig_ADAU1761Codec_RoutingMatrixOutputs_Data22[0]},	/* RoutingMatrixOutputs */
	{0x39u,	WRITE,	0x02u,	0x000040F4u,	0x01u,	0x0001u,	&gaConfig_ADAU1761Codec_SerialDataConfig_Data23[0]},	/* SerialDataConfig */
	{0x39u,	WRITE,	0x02u,	0x000040F7u,	0x01u,	0x0001u,	&gaConfig_ADAU1761Codec_DSPSlewMode_Data24[0]},	/* DSPSlewMode */
	{0x39u,	WRITE,	0x02u,	0x000040F8u,	0x01u,	0x0001u,	&gaConfig_ADAU1761Codec_SerialPortSR_Data25[0]},	/* SerialPortSR */
	{0x39u,	WRITE,	0x02u,	0x000040F9u,	0x01u,	0x0002u,	&gaConfig_ADAU1761Codec_ClockEnable_Data26[0]},	/* ClockEnable */
	{0x39u,	WRITE,	0x02u,	0x00008000u,	0x01u,	0x00EBu,	&gaConfig_ADAU1761Codec_ProgramData_Data27[0]},	/* ProgramData */
	{0x39u,	WRITE,	0x02u,	0x00000000u,	0x01u,	0x0020u,	&gaConfig_ADAU1761Codec_Param_Data28[0]},	/* Param */
	{0x39u,	WRITE,	0x02u,	0x000040F6u,	0x01u,	0x0001u,	&gaConfig_ADAU1761Codec_DSPRun_Data29[0]},	/* DSPRun */
	{0x39u,	WRITE,	0x02u,	0x00004036u,	0x01u,	0x0001u,	&gaConfig_ADAU1761Codec_DejitterCtrl_Data30[0]},	/* DejitterCtrl */
	{0x39u,	WRITE,	0x02u,	0x00004036u,	0x01u,	0x0001u,	&gaConfig_ADAU1761Codec_DejitterCtrl_Data31[0]},	/* DejitterCtrl */

	/*-- COMMANDS FOR DEVICE - AD242x Master Node0 --*/
	{0x68u,	WRITE,	0x01u,	0x00000012u,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_CONTROL_Data0[0]},	/* CONTROL */
	{0x00u,	DELAY,	0x01u,	0x00000000u,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_A2BDelay_Data1[0]},	/* A2B_Delay */
	{0x68u,	READ,	0x01u,	0x00000017u,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_INTTYPE_Data2[0]},	/* INTTYPE */
	{0x68u,	WRITE,	0x01u,	0x0000001Bu,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_INTMSK0_Data3[0]},	/* INTMSK0 */
	{0x68u,	WRITE,	0x01u,	0x0000001Cu,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_INTMSK1_Data4[0]},	/* INTMSK1 */
	{0x68u,	WRITE,	0x01u,	0x0000001Du,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_INTMSK2_Data5[0]},	/* INTMSK2 */
	{0x68u,	WRITE,	0x01u,	0x0000000Fu,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_RESPCYCS_Data6[0]},	/* RESPCYCS */
	{0x68u,	WRITE,	0x01u,	0x00000012u,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_CONTROL_Data7[0]},	/* CONTROL */
	{0x68u,	WRITE,	0x01u,	0x00000041u,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_I2SGCFG_Data8[0]},	/* I2SGCFG */
	{0x68u,	WRITE,	0x01u,	0x00000009u,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_SWCTL_Data9[0]},	/* SWCTL */
	{0x68u,	WRITE,	0x01u,	0x00000013u,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_DISCVRY_Data10[0]},	/* DISCVRY */
	{0x00u,	DELAY,	0x01u,	0x00000000u,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_A2BDelay_Data11[0]},	/* A2B_Delay */
	{0x68u,	READ,	0x01u,	0x0000001Au,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_INTPND2_Data12[0]},	/* INTPND2 */
	{0x68u,	WRITE,	0x01u,	0x0000001Au,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_INTPND2_Data13[0]},	/* INTPND2 */
	{0x68u,	WRITE,	0x01u,	0x00000001u,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_NODEADR_Data14[0]},	/* NODEADR */

	/*-- COMMANDS FOR DEVICE - AD241x Slave Node0 --*/
	{0x69u,	READ,	0x01u,	0x00000002u,	0x01u,	0x0001u,	&gaConfig_AD241xSlaveNode0_VENDOR_Data0[0]},	/* VENDOR */
	{0x69u,	READ,	0x01u,	0x00000003u,	0x01u,	0x0001u,	&gaConfig_AD241xSlaveNode0_PRODUCT_Data1[0]},	/* PRODUCT */
	{0x69u,	READ,	0x01u,	0x00000004u,	0x01u,	0x0001u,	&gaConfig_AD241xSlaveNode0_VERSION_Data2[0]},	/* VERSION */

	/*-- COMMANDS FOR DEVICE - AD242x Master Node0 --*/
	{0x68u,	WRITE,	0x01u,	0x00000009u,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_SWCTL_Data15[0]},	/* SWCTL */
	{0x68u,	WRITE,	0x01u,	0x00000001u,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_NODEADR_Data16[0]},	/* NODEADR */

	/*-- COMMANDS FOR DEVICE - AD241x Slave Node0 --*/
	{0x69u,	WRITE,	0x01u,	0x00000040u,	0x01u,	0x0001u,	&gaConfig_AD241xSlaveNode0_PLLCTL_Data3[0]},	/* PLLCTL */
	{0x69u,	WRITE,	0x01u,	0x0000000Au,	0x01u,	0x0001u,	&gaConfig_AD241xSlaveNode0_BCDNSLOTS_Data4[0]},	/* BCDNSLOTS */
	{0x69u,	WRITE,	0x01u,	0x0000000Bu,	0x01u,	0x0001u,	&gaConfig_AD241xSlaveNode0_LDNSLOTS_Data5[0]},	/* LDNSLOTS */
	{0x69u,	WRITE,	0x01u,	0x0000000Cu,	0x01u,	0x0001u,	&gaConfig_AD241xSlaveNode0_LUPSLOTS_Data6[0]},	/* LUPSLOTS */
	{0x69u,	WRITE,	0x01u,	0x0000003Fu,	0x01u,	0x0001u,	&gaConfig_AD241xSlaveNode0_I2CCFG_Data7[0]},	/* I2CCFG */
	{0x69u,	WRITE,	0x01u,	0x00000046u,	0x01u,	0x0001u,	&gaConfig_AD241xSlaveNode0_SYNCOFFSET_Data8[0]},	/* SYNCOFFSET */
	{0x69u,	WRITE,	0x01u,	0x00000041u,	0x01u,	0x0001u,	&gaConfig_AD241xSlaveNode0_I2SGCFG_Data9[0]},	/* I2SGCFG */
	{0x69u,	WRITE,	0x01u,	0x00000042u,	0x01u,	0x0001u,	&gaConfig_AD241xSlaveNode0_I2SCFG_Data10[0]},	/* I2SCFG */
	{0x69u,	WRITE,	0x01u,	0x00000043u,	0x01u,	0x0001u,	&gaConfig_AD241xSlaveNode0_I2SRATE_Data11[0]},	/* I2SRATE */
	{0x69u,	WRITE,	0x01u,	0x00000047u,	0x01u,	0x0001u,	&gaConfig_AD241xSlaveNode0_PDMCTL_Data12[0]},	/* PDMCTL */
	{0x69u,	WRITE,	0x01u,	0x00000048u,	0x01u,	0x0001u,	&gaConfig_AD241xSlaveNode0_ERRMGMT_Data13[0]},	/* ERRMGMT */
	{0x69u,	WRITE,	0x01u,	0x00000049u,	0x01u,	0x0001u,	&gaConfig_AD241xSlaveNode0_CLKCFG_Data14[0]},	/* CLKCFG */
	{0x69u,	WRITE,	0x01u,	0x0000004Au,	0x01u,	0x0001u,	&gaConfig_AD241xSlaveNode0_GPIODAT_Data15[0]},	/* GPIODAT */
	{0x69u,	WRITE,	0x01u,	0x0000004Du,	0x01u,	0x0001u,	&gaConfig_AD241xSlaveNode0_GPIOOEN_Data16[0]},	/* GPIOOEN */
	{0x69u,	WRITE,	0x01u,	0x0000004Eu,	0x01u,	0x0001u,	&gaConfig_AD241xSlaveNode0_GPIOIEN_Data17[0]},	/* GPIOIEN */
	{0x69u,	WRITE,	0x01u,	0x00000050u,	0x01u,	0x0001u,	&gaConfig_AD241xSlaveNode0_PINTEN_Data18[0]},	/* PINTEN */
	{0x69u,	WRITE,	0x01u,	0x00000051u,	0x01u,	0x0001u,	&gaConfig_AD241xSlaveNode0_PINTINV_Data19[0]},	/* PINTINV */
	{0x69u,	WRITE,	0x01u,	0x00000052u,	0x01u,	0x0001u,	&gaConfig_AD241xSlaveNode0_PINCFG_Data20[0]},	/* PINCFG */
	{0x69u,	WRITE,	0x01u,	0x00000020u,	0x01u,	0x0001u,	&gaConfig_AD241xSlaveNode0_TESTMODE_Data21[0]},	/* TESTMODE */
	{0x69u,	WRITE,	0x01u,	0x0000001Bu,	0x01u,	0x0001u,	&gaConfig_AD241xSlaveNode0_INTMSK0_Data22[0]},	/* INTMSK0 */
	{0x69u,	WRITE,	0x01u,	0x0000001Cu,	0x01u,	0x0001u,	&gaConfig_AD241xSlaveNode0_INTMSK1_Data23[0]},	/* INTMSK1 */
	{0x69u,	WRITE,	0x01u,	0x0000001Eu,	0x01u,	0x0001u,	&gaConfig_AD241xSlaveNode0_BECCTL_Data24[0]},	/* BECCTL */

	/*-- COMMANDS FOR DEVICE - AD242x Master Node0 --*/
	{0x68u,	WRITE,	0x01u,	0x00000001u,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_NODEADRSet_Data17[0]},	/* NODEADR - Set the node address */

	/*-- COMMANDS FOR DEVICE - AD241x Slave Node0 --*/
	{0x69u,	WRITE,	0x01u,	0x00000000u,	0x01u,	0x0001u,	&gaConfig_AD241xSlaveNode0_CHIPSet_Data25[0]},	/* CHIP - Set the chip address */

	/*-- COMMANDS FOR DEVICE - AD242x Master Node0 --*/
	{0x68u,	WRITE,	0x01u,	0x00000001u,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_NODEADREnable_Data18[0]},	/* NODEADR - Enable PERI */

	/*-- COMMANDS FOR DEVICE - GPIO Expander --*/
	{0x69u,	WRITE,	0x01u,	0x00000001u,	0x01u,	0x0001u,	&gaConfig_GPIOExpander_PCA9538Data_Data0[0]},	/* PCA9538_Data_Reg */
	{0x69u,	WRITE,	0x01u,	0x00000003u,	0x01u,	0x0001u,	&gaConfig_GPIOExpander_PCA9538Config_Data1[0]},	/* PCA9538_Config_Reg */
	{0x00u,	DELAY,	0x02u,	0x00000000u,	0x01u,	0x0002u,	&gaConfig_GPIOExpander_Delay_Data2[0]},	/* Delay */
	{0x69u,	WRITE,	0x01u,	0x00000001u,	0x01u,	0x0001u,	&gaConfig_GPIOExpander_PCA9538Data_Data3[0]},	/* PCA9538_Data_Reg */
	{0x00u,	DELAY,	0x02u,	0x00000000u,	0x01u,	0x0002u,	&gaConfig_GPIOExpander_Delay_Data4[0]},	/* Delay */

	/*-- COMMANDS FOR DEVICE - AD242x Master Node0 --*/
	{0x68u,	WRITE,	0x01u,	0x00000001u,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_NODEADRDisable_Data19[0]},	/* NODEADR - Disable PERI */

	/*-- COMMANDS FOR DEVICE - AD241x Slave Node0 --*/
	{0x69u,	WRITE,	0x01u,	0x00000000u,	0x01u,	0x0001u,	&gaConfig_AD241xSlaveNode0_CHIPSet_Data26[0]},	/* CHIP - Set the chip address */

	/*-- COMMANDS FOR DEVICE - AD242x Master Node0 --*/
	{0x68u,	WRITE,	0x01u,	0x00000001u,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_NODEADREnable_Data20[0]},	/* NODEADR - Enable PERI */

	/*-- COMMANDS FOR DEVICE - TDA7802 --*/
	{0x69u,	WRITE,	0x01u,	0x00000000u,	0x01u,	0x0001u,	&gaConfig_TDA7802_TDA7802IB0_Data0[0]},	/* TDA7802_IB0 */
	{0x69u,	WRITE,	0x01u,	0x00000001u,	0x01u,	0x0001u,	&gaConfig_TDA7802_TDA7802IB1_Data1[0]},	/* TDA7802_IB1 */
	{0x69u,	WRITE,	0x01u,	0x00000002u,	0x01u,	0x0001u,	&gaConfig_TDA7802_TDA7802IB2_Data2[0]},	/* TDA7802_IB2 */
	{0x69u,	WRITE,	0x01u,	0x00000003u,	0x01u,	0x0001u,	&gaConfig_TDA7802_TDA7802IB3_Data3[0]},	/* TDA7802_IB3 */
	{0x69u,	WRITE,	0x01u,	0x00000004u,	0x01u,	0x0001u,	&gaConfig_TDA7802_TDA7802IB4_Data4[0]},	/* TDA7802_IB4 */
	{0x69u,	WRITE,	0x01u,	0x00000005u,	0x01u,	0x0001u,	&gaConfig_TDA7802_TDA7802IB5_Data5[0]},	/* TDA7802_IB5 */

	/*-- COMMANDS FOR DEVICE - AD242x Master Node0 --*/
	{0x68u,	WRITE,	0x01u,	0x00000001u,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_NODEADRDisable_Data21[0]},	/* NODEADR - Disable PERI */

	/*-- COMMANDS FOR DEVICE - AD241x Slave Node0 --*/
	{0x69u,	WRITE,	0x01u,	0x00000000u,	0x01u,	0x0001u,	&gaConfig_AD241xSlaveNode0_CHIPSet_Data27[0]},	/* CHIP - Set the chip address */

	/*-- COMMANDS FOR DEVICE - AD242x Master Node0 --*/
	{0x68u,	WRITE,	0x01u,	0x00000001u,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_NODEADREnable_Data22[0]},	/* NODEADR - Enable PERI */

	/*-- COMMANDS FOR DEVICE - FDA2100 --*/
	{0x69u,	WRITE,	0x01u,	0x00000000u,	0x01u,	0x0001u,	&gaConfig_FDA2100_FDA2100IB0_Data0[0]},	/* FDA2100_IB0 */
	{0x69u,	WRITE,	0x01u,	0x00000001u,	0x01u,	0x0001u,	&gaConfig_FDA2100_FDA2100IB1_Data1[0]},	/* FDA2100_IB1 */
	{0x69u,	WRITE,	0x01u,	0x00000002u,	0x01u,	0x0001u,	&gaConfig_FDA2100_FDA2100IB2_Data2[0]},	/* FDA2100_IB2 */
	{0x69u,	WRITE,	0x01u,	0x00000003u,	0x01u,	0x0001u,	&gaConfig_FDA2100_FDA2100IB3_Data3[0]},	/* FDA2100_IB3 */
	{0x69u,	WRITE,	0x01u,	0x00000004u,	0x01u,	0x0001u,	&gaConfig_FDA2100_FDA2100IB4_Data4[0]},	/* FDA2100_IB4 */
	{0x69u,	WRITE,	0x01u,	0x00000005u,	0x01u,	0x0001u,	&gaConfig_FDA2100_FDA2100IB5_Data5[0]},	/* FDA2100_IB5 */
	{0x69u,	WRITE,	0x01u,	0x00000006u,	0x01u,	0x0001u,	&gaConfig_FDA2100_FDA2100IB6_Data6[0]},	/* FDA2100_IB6 */
	{0x69u,	WRITE,	0x01u,	0x00000007u,	0x01u,	0x0001u,	&gaConfig_FDA2100_FDA2100IB7_Data7[0]},	/* FDA2100_IB7 */
	{0x69u,	WRITE,	0x01u,	0x00000008u,	0x01u,	0x0001u,	&gaConfig_FDA2100_FDA2100IB8_Data8[0]},	/* FDA2100_IB8 */
	{0x69u,	WRITE,	0x01u,	0x00000009u,	0x01u,	0x0001u,	&gaConfig_FDA2100_FDA2100IB9_Data9[0]},	/* FDA2100_IB9 */
	{0x69u,	WRITE,	0x01u,	0x0000000Au,	0x01u,	0x0001u,	&gaConfig_FDA2100_FDA2100IB10_Data10[0]},	/* FDA2100_IB10 */
	{0x69u,	WRITE,	0x01u,	0x0000000Bu,	0x01u,	0x0001u,	&gaConfig_FDA2100_FDA2100IB11_Data11[0]},	/* FDA2100_IB11 */
	{0x69u,	WRITE,	0x01u,	0x0000000Cu,	0x01u,	0x0001u,	&gaConfig_FDA2100_FDA2100IB12_Data12[0]},	/* FDA2100_IB12 */
	{0x69u,	WRITE,	0x01u,	0x0000000Du,	0x01u,	0x0001u,	&gaConfig_FDA2100_FDA2100IB13_Data13[0]},	/* FDA2100_IB13 */
	{0x69u,	WRITE,	0x01u,	0x0000000Eu,	0x01u,	0x0001u,	&gaConfig_FDA2100_FDA2100IB14_Data14[0]},	/* FDA2100_IB14 */

	/*-- COMMANDS FOR DEVICE - AD242x Master Node0 --*/
	{0x68u,	WRITE,	0x01u,	0x00000001u,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_NODEADRDisable_Data23[0]},	/* NODEADR - Disable PERI */
	{0x68u,	WRITE,	0x01u,	0x0000003Fu,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_I2CCFG_Data24[0]},	/* I2CCFG */
	{0x68u,	WRITE,	0x01u,	0x00000042u,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_I2SCFG_Data25[0]},	/* I2SCFG */
	{0x68u,	WRITE,	0x01u,	0x00000044u,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_I2STXOFFSET_Data26[0]},	/* I2STXOFFSET */
	{0x68u,	WRITE,	0x01u,	0x00000045u,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_I2SRXOFFSET_Data27[0]},	/* I2SRXOFFSET */
	{0x68u,	WRITE,	0x01u,	0x00000047u,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_PDMCTL_Data28[0]},	/* PDMCTL */
	{0x68u,	WRITE,	0x01u,	0x0000005Du,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_PDMCTL2_Data29[0]},	/* PDMCTL2 */
	{0x68u,	WRITE,	0x01u,	0x00000048u,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_ERRMGMT_Data30[0]},	/* ERRMGMT */
	{0x68u,	WRITE,	0x01u,	0x0000004Au,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_GPIODAT_Data31[0]},	/* GPIODAT */
	{0x68u,	WRITE,	0x01u,	0x0000004Du,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_GPIOOEN_Data32[0]},	/* GPIOOEN */
	{0x68u,	WRITE,	0x01u,	0x0000004Eu,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_GPIOIEN_Data33[0]},	/* GPIOIEN */
	{0x68u,	WRITE,	0x01u,	0x00000050u,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_PINTEN_Data34[0]},	/* PINTEN */
	{0x68u,	WRITE,	0x01u,	0x00000051u,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_PINTINV_Data35[0]},	/* PINTINV */
	{0x68u,	WRITE,	0x01u,	0x00000052u,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_PINCFG_Data36[0]},	/* PINCFG */
	{0x68u,	WRITE,	0x01u,	0x00000020u,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_TESTMODE_Data37[0]},	/* TESTMODE */
	{0x68u,	WRITE,	0x01u,	0x00000059u,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_CLK1CFG_Data38[0]},	/* CLK1CFG */
	{0x68u,	WRITE,	0x01u,	0x0000005Au,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_CLK2CFG_Data39[0]},	/* CLK2CFG */
	{0x68u,	WRITE,	0x01u,	0x00000081u,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_GPIOD0MSK_Data40[0]},	/* GPIOD0MSK */
	{0x68u,	WRITE,	0x01u,	0x00000082u,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_GPIOD1MSK_Data41[0]},	/* GPIOD1MSK */
	{0x68u,	WRITE,	0x01u,	0x00000083u,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_GPIOD2MSK_Data42[0]},	/* GPIOD2MSK */
	{0x68u,	WRITE,	0x01u,	0x00000084u,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_GPIOD3MSK_Data43[0]},	/* GPIOD3MSK */
	{0x68u,	WRITE,	0x01u,	0x00000085u,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_GPIOD4MSK_Data44[0]},	/* GPIOD4MSK */
	{0x68u,	WRITE,	0x01u,	0x00000086u,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_GPIOD5MSK_Data45[0]},	/* GPIOD5MSK */
	{0x68u,	WRITE,	0x01u,	0x00000087u,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_GPIOD6MSK_Data46[0]},	/* GPIOD6MSK */
	{0x68u,	WRITE,	0x01u,	0x00000088u,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_GPIOD7MSK_Data47[0]},	/* GPIOD7MSK */
	{0x68u,	WRITE,	0x01u,	0x0000008Au,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_GPIODINV_Data48[0]},	/* GPIODINV */
	{0x68u,	WRITE,	0x01u,	0x00000080u,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_GPIODEN_Data49[0]},	/* GPIODEN */
	{0x68u,	WRITE,	0x01u,	0x00000057u,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_I2SRRCTL_Data50[0]},	/* I2SRRCTL */
	{0x68u,	WRITE,	0x01u,	0x0000002Eu,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_TXACTL_Data51[0]},	/* TXACTL */
	{0x68u,	WRITE,	0x01u,	0x00000030u,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_TXBCTL_Data52[0]},	/* TXBCTL */
	{0x68u,	WRITE,	0x01u,	0x0000001Eu,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_BECCTL_Data53[0]},	/* BECCTL */
	{0x68u,	WRITE,	0x01u,	0x0000000Du,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_DNSLOTS_Data54[0]},	/* DNSLOTS */
	{0x68u,	WRITE,	0x01u,	0x0000000Eu,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_UPSLOTS_Data55[0]},	/* UPSLOTS */
	{0x68u,	WRITE,	0x01u,	0x00000009u,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_SWCTL_Data56[0]},	/* SWCTL */
	{0x68u,	WRITE,	0x01u,	0x00000040u,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_PLLCTL_Data57[0]},	/* PLLCTL */
	{0x68u,	WRITE,	0x01u,	0x00000001u,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_NODEADR_Data58[0]},	/* NODEADR */
	{0x68u,	WRITE,	0x01u,	0x00000010u,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_SLOTFMT_Data59[0]},	/* SLOTFMT */
	{0x68u,	WRITE,	0x01u,	0x00000011u,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_DATCTL_Data60[0]},	/* DATCTL */
	{0x68u,	WRITE,	0x01u,	0x00000056u,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_I2SRRATE_Data61[0]},	/* I2SRRATE */
	{0x68u,	WRITE,	0x01u,	0x00000012u,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_CONTROL_Data62[0]},	/* CONTROL */
};

#endif /* _ADI_A2B_I2C_LIST_H_ */

