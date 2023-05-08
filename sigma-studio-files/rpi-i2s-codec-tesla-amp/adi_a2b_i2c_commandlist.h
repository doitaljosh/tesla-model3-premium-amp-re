/*******************************************************************************
Copyright (c) 2023 - Analog Devices Inc. All Rights Reserved.
This software is proprietary & confidential to Analog Devices, Inc.
and its licensors.
******************************************************************************
* @brief: This file contains I2C command sequence to be followed for discovery 
*         and configuration of A2B nodes for an A2B schematic
* @version: $Revision$
* @date: Monday, May 8, 2023-5:45:00 PM
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

#define CONFIG_LEN (72) 


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

static unsigned char gaConfig_AD242xMasterNode0_INTMSK2_Data4[1] =
{
	0x09u	
};

static unsigned char gaConfig_AD242xMasterNode0_RESPCYCS_Data5[1] =
{
	0x9Eu	
};

static unsigned char gaConfig_AD242xMasterNode0_CONTROL_Data6[1] =
{
	0x01u	
};

static unsigned char gaConfig_AD242xMasterNode0_I2SGCFG_Data7[1] =
{
	0x02u	
};

static unsigned char gaConfig_AD242xMasterNode0_SWCTL_Data8[1] =
{
	0x01u	
};

static unsigned char gaConfig_AD242xMasterNode0_DISCVRY_Data9[1] =
{
	0x9Eu	
};

static unsigned char gaConfig_AD242xMasterNode0_A2BDelay_Data10[1] =
{
	0x32u	
};

static unsigned char gaConfig_AD242xMasterNode0_INTPND2_Data11[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xMasterNode0_INTPND2_Data12[1] =
{
	0x01u	
};

static unsigned char gaConfig_AD242xMasterNode0_NODEADR_Data13[1] =
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

static unsigned char gaConfig_AD242xMasterNode0_SWCTL_Data14[1] =
{
	0x21u	
};

static unsigned char gaConfig_AD242xMasterNode0_NODEADR_Data15[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD241xSlaveNode0_LDNSLOTS_Data3[1] =
{
	0x08u	
};

static unsigned char gaConfig_AD241xSlaveNode0_I2CCFG_Data4[1] =
{
	0x01u	
};

static unsigned char gaConfig_AD241xSlaveNode0_I2SGCFG_Data5[1] =
{
	0x01u	
};

static unsigned char gaConfig_AD241xSlaveNode0_I2SCFG_Data6[1] =
{
	0x03u	
};

static unsigned char gaConfig_AD241xSlaveNode0_GPIODAT_Data7[1] =
{
	0x44u	
};

static unsigned char gaConfig_AD241xSlaveNode0_GPIOOEN_Data8[1] =
{
	0x47u	
};

static unsigned char gaConfig_AD241xSlaveNode0_INTMSK0_Data9[1] =
{
	0x10u	
};

static unsigned char gaConfig_AD241xSlaveNode0_BECCTL_Data10[1] =
{
	0xEFu	
};

static unsigned char gaConfig_AD242xMasterNode0_NODEADRSet_Data16[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD241xSlaveNode0_CHIPSet_Data11[1] =
{
	0x70u	
};

static unsigned char gaConfig_AD242xMasterNode0_NODEADREnable_Data17[1] =
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

static unsigned char gaConfig_AD242xMasterNode0_NODEADRDisable_Data18[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD241xSlaveNode0_CHIPSet_Data12[1] =
{
	0x6Cu	
};

static unsigned char gaConfig_AD242xMasterNode0_NODEADREnable_Data19[1] =
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

static unsigned char gaConfig_AD242xMasterNode0_NODEADRDisable_Data20[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD241xSlaveNode0_CHIPSet_Data13[1] =
{
	0x6Eu	
};

static unsigned char gaConfig_AD242xMasterNode0_NODEADREnable_Data21[1] =
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

static unsigned char gaConfig_AD242xMasterNode0_NODEADRDisable_Data22[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xMasterNode0_I2SCFG_Data23[1] =
{
	0x10u	
};

static unsigned char gaConfig_AD242xMasterNode0_BECCTL_Data24[1] =
{
	0xEFu	
};

static unsigned char gaConfig_AD242xMasterNode0_DNSLOTS_Data25[1] =
{
	0x08u	
};

static unsigned char gaConfig_AD242xMasterNode0_SWCTL_Data26[1] =
{
	0x01u	
};

static unsigned char gaConfig_AD242xMasterNode0_NODEADR_Data27[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xMasterNode0_SLOTFMT_Data28[1] =
{
	0x66u	
};

static unsigned char gaConfig_AD242xMasterNode0_DATCTL_Data29[1] =
{
	0x03u	
};

static unsigned char gaConfig_AD242xMasterNode0_I2SRRATE_Data30[1] =
{
	0x00u	
};

static unsigned char gaConfig_AD242xMasterNode0_CONTROL_Data31[1] =
{
	0x01u	
};

ADI_A2B_DISCOVERY_CONFIG gaA2BConfig[CONFIG_LEN] =
{

	/*-- COMMANDS FOR DEVICE - AD242x Master Node0 --*/
	{0x68u,	WRITE,	0x01u,	0x00000012u,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_CONTROL_Data0[0]},	/* CONTROL */
	{0x00u,	DELAY,	0x01u,	0x00000000u,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_A2BDelay_Data1[0]},	/* A2B_Delay */
	{0x68u,	READ,	0x01u,	0x00000017u,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_INTTYPE_Data2[0]},	/* INTTYPE */
	{0x68u,	WRITE,	0x01u,	0x0000001Bu,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_INTMSK0_Data3[0]},	/* INTMSK0 */
	{0x68u,	WRITE,	0x01u,	0x0000001Du,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_INTMSK2_Data4[0]},	/* INTMSK2 */
	{0x68u,	WRITE,	0x01u,	0x0000000Fu,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_RESPCYCS_Data5[0]},	/* RESPCYCS */
	{0x68u,	WRITE,	0x01u,	0x00000012u,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_CONTROL_Data6[0]},	/* CONTROL */
	{0x68u,	WRITE,	0x01u,	0x00000041u,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_I2SGCFG_Data7[0]},	/* I2SGCFG */
	{0x68u,	WRITE,	0x01u,	0x00000009u,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_SWCTL_Data8[0]},	/* SWCTL */
	{0x68u,	WRITE,	0x01u,	0x00000013u,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_DISCVRY_Data9[0]},	/* DISCVRY */
	{0x00u,	DELAY,	0x01u,	0x00000000u,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_A2BDelay_Data10[0]},	/* A2B_Delay */
	{0x68u,	READ,	0x01u,	0x0000001Au,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_INTPND2_Data11[0]},	/* INTPND2 */
	{0x68u,	WRITE,	0x01u,	0x0000001Au,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_INTPND2_Data12[0]},	/* INTPND2 */
	{0x68u,	WRITE,	0x01u,	0x00000001u,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_NODEADR_Data13[0]},	/* NODEADR */

	/*-- COMMANDS FOR DEVICE - AD241x Slave Node0 --*/
	{0x69u,	READ,	0x01u,	0x00000002u,	0x01u,	0x0001u,	&gaConfig_AD241xSlaveNode0_VENDOR_Data0[0]},	/* VENDOR */
	{0x69u,	READ,	0x01u,	0x00000003u,	0x01u,	0x0001u,	&gaConfig_AD241xSlaveNode0_PRODUCT_Data1[0]},	/* PRODUCT */
	{0x69u,	READ,	0x01u,	0x00000004u,	0x01u,	0x0001u,	&gaConfig_AD241xSlaveNode0_VERSION_Data2[0]},	/* VERSION */

	/*-- COMMANDS FOR DEVICE - AD242x Master Node0 --*/
	{0x68u,	WRITE,	0x01u,	0x00000009u,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_SWCTL_Data14[0]},	/* SWCTL */
	{0x68u,	WRITE,	0x01u,	0x00000001u,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_NODEADR_Data15[0]},	/* NODEADR */

	/*-- COMMANDS FOR DEVICE - AD241x Slave Node0 --*/
	{0x69u,	WRITE,	0x01u,	0x0000000Bu,	0x01u,	0x0001u,	&gaConfig_AD241xSlaveNode0_LDNSLOTS_Data3[0]},	/* LDNSLOTS */
	{0x69u,	WRITE,	0x01u,	0x0000003Fu,	0x01u,	0x0001u,	&gaConfig_AD241xSlaveNode0_I2CCFG_Data4[0]},	/* I2CCFG */
	{0x69u,	WRITE,	0x01u,	0x00000041u,	0x01u,	0x0001u,	&gaConfig_AD241xSlaveNode0_I2SGCFG_Data5[0]},	/* I2SGCFG */
	{0x69u,	WRITE,	0x01u,	0x00000042u,	0x01u,	0x0001u,	&gaConfig_AD241xSlaveNode0_I2SCFG_Data6[0]},	/* I2SCFG */
	{0x69u,	WRITE,	0x01u,	0x0000004Au,	0x01u,	0x0001u,	&gaConfig_AD241xSlaveNode0_GPIODAT_Data7[0]},	/* GPIODAT */
	{0x69u,	WRITE,	0x01u,	0x0000004Du,	0x01u,	0x0001u,	&gaConfig_AD241xSlaveNode0_GPIOOEN_Data8[0]},	/* GPIOOEN */
	{0x69u,	WRITE,	0x01u,	0x0000001Bu,	0x01u,	0x0001u,	&gaConfig_AD241xSlaveNode0_INTMSK0_Data9[0]},	/* INTMSK0 */
	{0x69u,	WRITE,	0x01u,	0x0000001Eu,	0x01u,	0x0001u,	&gaConfig_AD241xSlaveNode0_BECCTL_Data10[0]},	/* BECCTL */

	/*-- COMMANDS FOR DEVICE - AD242x Master Node0 --*/
	{0x68u,	WRITE,	0x01u,	0x00000001u,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_NODEADRSet_Data16[0]},	/* NODEADR - Set the node address */

	/*-- COMMANDS FOR DEVICE - AD241x Slave Node0 --*/
	{0x69u,	WRITE,	0x01u,	0x00000000u,	0x01u,	0x0001u,	&gaConfig_AD241xSlaveNode0_CHIPSet_Data11[0]},	/* CHIP - Set the chip address */

	/*-- COMMANDS FOR DEVICE - AD242x Master Node0 --*/
	{0x68u,	WRITE,	0x01u,	0x00000001u,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_NODEADREnable_Data17[0]},	/* NODEADR - Enable PERI */

	/*-- COMMANDS FOR DEVICE - GPIO Expander --*/
	{0x69u,	WRITE,	0x01u,	0x00000001u,	0x01u,	0x0001u,	&gaConfig_GPIOExpander_PCA9538Data_Data0[0]},	/* PCA9538_Data_Reg */
	{0x69u,	WRITE,	0x01u,	0x00000003u,	0x01u,	0x0001u,	&gaConfig_GPIOExpander_PCA9538Config_Data1[0]},	/* PCA9538_Config_Reg */
	{0x00u,	DELAY,	0x02u,	0x00000000u,	0x01u,	0x0002u,	&gaConfig_GPIOExpander_Delay_Data2[0]},	/* Delay */
	{0x69u,	WRITE,	0x01u,	0x00000001u,	0x01u,	0x0001u,	&gaConfig_GPIOExpander_PCA9538Data_Data3[0]},	/* PCA9538_Data_Reg */
	{0x00u,	DELAY,	0x02u,	0x00000000u,	0x01u,	0x0002u,	&gaConfig_GPIOExpander_Delay_Data4[0]},	/* Delay */

	/*-- COMMANDS FOR DEVICE - AD242x Master Node0 --*/
	{0x68u,	WRITE,	0x01u,	0x00000001u,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_NODEADRDisable_Data18[0]},	/* NODEADR - Disable PERI */

	/*-- COMMANDS FOR DEVICE - AD241x Slave Node0 --*/
	{0x69u,	WRITE,	0x01u,	0x00000000u,	0x01u,	0x0001u,	&gaConfig_AD241xSlaveNode0_CHIPSet_Data12[0]},	/* CHIP - Set the chip address */

	/*-- COMMANDS FOR DEVICE - AD242x Master Node0 --*/
	{0x68u,	WRITE,	0x01u,	0x00000001u,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_NODEADREnable_Data19[0]},	/* NODEADR - Enable PERI */

	/*-- COMMANDS FOR DEVICE - TDA7802 --*/
	{0x69u,	WRITE,	0x01u,	0x00000000u,	0x01u,	0x0001u,	&gaConfig_TDA7802_TDA7802IB0_Data0[0]},	/* TDA7802_IB0 */
	{0x69u,	WRITE,	0x01u,	0x00000001u,	0x01u,	0x0001u,	&gaConfig_TDA7802_TDA7802IB1_Data1[0]},	/* TDA7802_IB1 */
	{0x69u,	WRITE,	0x01u,	0x00000002u,	0x01u,	0x0001u,	&gaConfig_TDA7802_TDA7802IB2_Data2[0]},	/* TDA7802_IB2 */
	{0x69u,	WRITE,	0x01u,	0x00000003u,	0x01u,	0x0001u,	&gaConfig_TDA7802_TDA7802IB3_Data3[0]},	/* TDA7802_IB3 */
	{0x69u,	WRITE,	0x01u,	0x00000004u,	0x01u,	0x0001u,	&gaConfig_TDA7802_TDA7802IB4_Data4[0]},	/* TDA7802_IB4 */
	{0x69u,	WRITE,	0x01u,	0x00000005u,	0x01u,	0x0001u,	&gaConfig_TDA7802_TDA7802IB5_Data5[0]},	/* TDA7802_IB5 */

	/*-- COMMANDS FOR DEVICE - AD242x Master Node0 --*/
	{0x68u,	WRITE,	0x01u,	0x00000001u,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_NODEADRDisable_Data20[0]},	/* NODEADR - Disable PERI */

	/*-- COMMANDS FOR DEVICE - AD241x Slave Node0 --*/
	{0x69u,	WRITE,	0x01u,	0x00000000u,	0x01u,	0x0001u,	&gaConfig_AD241xSlaveNode0_CHIPSet_Data13[0]},	/* CHIP - Set the chip address */

	/*-- COMMANDS FOR DEVICE - AD242x Master Node0 --*/
	{0x68u,	WRITE,	0x01u,	0x00000001u,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_NODEADREnable_Data21[0]},	/* NODEADR - Enable PERI */

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
	{0x68u,	WRITE,	0x01u,	0x00000001u,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_NODEADRDisable_Data22[0]},	/* NODEADR - Disable PERI */
	{0x68u,	WRITE,	0x01u,	0x00000042u,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_I2SCFG_Data23[0]},	/* I2SCFG */
	{0x68u,	WRITE,	0x01u,	0x0000001Eu,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_BECCTL_Data24[0]},	/* BECCTL */
	{0x68u,	WRITE,	0x01u,	0x0000000Du,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_DNSLOTS_Data25[0]},	/* DNSLOTS */
	{0x68u,	WRITE,	0x01u,	0x00000009u,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_SWCTL_Data26[0]},	/* SWCTL */
	{0x68u,	WRITE,	0x01u,	0x00000001u,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_NODEADR_Data27[0]},	/* NODEADR */
	{0x68u,	WRITE,	0x01u,	0x00000010u,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_SLOTFMT_Data28[0]},	/* SLOTFMT */
	{0x68u,	WRITE,	0x01u,	0x00000011u,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_DATCTL_Data29[0]},	/* DATCTL */
	{0x68u,	WRITE,	0x01u,	0x00000056u,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_I2SRRATE_Data30[0]},	/* I2SRRATE */
	{0x68u,	WRITE,	0x01u,	0x00000012u,	0x01u,	0x0001u,	&gaConfig_AD242xMasterNode0_CONTROL_Data31[0]},	/* CONTROL */
};

#endif /* _ADI_A2B_I2C_LIST_H_ */

