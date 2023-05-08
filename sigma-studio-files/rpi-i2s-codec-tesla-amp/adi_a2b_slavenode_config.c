/*******************************************************************************
Copyright (c) 2023 - Analog Devices Inc. All Rights Reserved.
This software is proprietary & confidential to Analog Devices, Inc.
and its licensors.
******************************************************************************
* @file: adi_a2b_slavenode_config.c
* @brief: This file contains A2B node information
* @version: $Revision$
* @date: Monday, May 8, 2023-5:42:35 PM
* NCF Version - 
* A2B DLL version - 19.3.0
* A2B Stack DLL version - 19.3.0.0
* SigmaStudio version - 4.06.000.1812
* Developed by: Automotive Software and Systems team, Bangalore, India
* THIS IS A SIGMASTUDIO GENERATED FILE AND SHALL NOT BE MODIFIED OUTSIDE OF SIGMASTUDIO
*****************************************************************************/


#include "adi_a2b_datatypes.h"
#include "adi_a2b_nodeconfig.h"

ADI_A2B_NODE_PERICONFIG_DATA sChain0_Slave0PeriConfig;
static A2B_PERIPHERAL_DEVICE_CONFIG  sChain0_Slave0_PeriConfig0;
static A2B_PERIPHERAL_DEVICE_CONFIG  sChain0_Slave0_PeriConfig1;
static ADI_A2B_PERI_CONFIG_UNIT  gaPeriCfg_0_70_Unit[5];
static A2B_PERIPHERAL_DEVICE_CONFIG  sChain0_Slave0_PeriConfig2;
static ADI_A2B_PERI_CONFIG_UNIT  gaPeriCfg_0_6C_Unit[6];
static A2B_PERIPHERAL_DEVICE_CONFIG  sChain0_Slave0_PeriConfig3;
static ADI_A2B_PERI_CONFIG_UNIT  gaPeriCfg_0_6E_Unit[15];

/* CHAIN0 SLAVE0 PERIPHERALS*/ 
 ADI_A2B_NODE_PERICONFIG_DATA sChain0_Slave0PeriConfig = 
 { 
	 /*! Number of peripheral devices connected  */
	.nNumPeriDevice = 4,

	 /*! Array of peripheral configuration pointers */ 
	.apNodePeriDeviceConfig = {	 &sChain0_Slave0_PeriConfig0,  &sChain0_Slave0_PeriConfig1,  &sChain0_Slave0_PeriConfig2,  &sChain0_Slave0_PeriConfig3, NULL_PTR, NULL_PTR, NULL_PTR, NULL_PTR, NULL_PTR, NULL_PTR, NULL_PTR, NULL_PTR, NULL_PTR, NULL_PTR, NULL_PTR, NULL_PTR	}

};

/************************************************** START OF CHAIN 0 SLAVE0 PERIPHERAL DESCRIPTION ********************************************************************************  */

/* Peripheral - 0*/

ADI_A2B_MEM_NCF_DATA
static A2B_PERIPHERAL_DEVICE_CONFIG  sChain0_Slave0_PeriConfig0=
{
	/* I2C interface status  */ 
	 .bI2CInterfaceUse = ENABLED, 

	/*7 bit I2C address */ 
	.nI2Caddr = 0x56, 

	/* Device type -audio source/sink/host  */ 
	.eDeviceType = A2B_GENERIC_I2C_DEVICE, 

	/* Tx0 Pin in use */
	.bUseTx0 = DISABLED, 

	/* Rx0 Pin in use */
	.bUseRx0 = DISABLED, 

	/* Tx1 Pin in use */
	.bUseTx1 = DISABLED, 

	/* Rx1 Pin in use */
	.bUseRx1 = DISABLED, 

	/* No of Tx0 channels  */ 
	.nChTx0 = 0, 

	/* No of Rx0 channels  */ 
	.nChRx0 = 0, 

	/* No of Tx1 channels  */ 
	.nChTx1 = 0, 

	/* No of Rx1 channels  */ 
	.nChRx1 = 0, 

	/* Number of configuration units  */ 
	.nNumPeriConfigUnit = 0, 

	/* Pointer to configuration units  */ 
	.paPeriConfigUnit = NULL_PTR 
 };

/* Peripheral - 1*/

ADI_A2B_MEM_NCF_DATA
static A2B_PERIPHERAL_DEVICE_CONFIG  sChain0_Slave0_PeriConfig1=
{
	/* I2C interface status  */ 
	 .bI2CInterfaceUse = ENABLED, 

	/*7 bit I2C address */ 
	.nI2Caddr = 0x70, 

	/* Device type -audio source/sink/host  */ 
	.eDeviceType = A2B_GENERIC_I2C_DEVICE, 

	/* Tx0 Pin in use */
	.bUseTx0 = DISABLED, 

	/* Rx0 Pin in use */
	.bUseRx0 = DISABLED, 

	/* Tx1 Pin in use */
	.bUseTx1 = DISABLED, 

	/* Rx1 Pin in use */
	.bUseRx1 = DISABLED, 

	/* No of Tx0 channels  */ 
	.nChTx0 = 0, 

	/* No of Rx0 channels  */ 
	.nChRx0 = 0, 

	/* No of Tx1 channels  */ 
	.nChTx1 = 0, 

	/* No of Rx1 channels  */ 
	.nChRx1 = 0, 

	/* Number of configuration units  */ 
	.nNumPeriConfigUnit = 5, 

	/* Pointer to configuration units  */ 
	.paPeriConfigUnit =  &gaPeriCfg_0_70_Unit[0] 
 };

/* Peripheral - 2*/

ADI_A2B_MEM_NCF_DATA
static A2B_PERIPHERAL_DEVICE_CONFIG  sChain0_Slave0_PeriConfig2=
{
	/* I2C interface status  */ 
	 .bI2CInterfaceUse = ENABLED, 

	/*7 bit I2C address */ 
	.nI2Caddr = 0x6C, 

	/* Device type -audio source/sink/host  */ 
	.eDeviceType = A2B_AUDIO_SINK, 

	/* Tx0 Pin in use */
	.bUseTx0 = DISABLED, 

	/* Rx0 Pin in use */
	.bUseRx0 = DISABLED, 

	/* Tx1 Pin in use */
	.bUseTx1 = DISABLED, 

	/* Rx1 Pin in use */
	.bUseRx1 = ENABLED, 

	/* No of Tx0 channels  */ 
	.nChTx0 = 0, 

	/* No of Rx0 channels  */ 
	.nChRx0 = 0, 

	/* No of Tx1 channels  */ 
	.nChTx1 = 0, 

	/* No of Rx1 channels  */ 
	.nChRx1 = 4, 

	/* Number of configuration units  */ 
	.nNumPeriConfigUnit = 6, 

	/* Pointer to configuration units  */ 
	.paPeriConfigUnit =  &gaPeriCfg_0_6C_Unit[0] 
 };

/* Peripheral - 3*/

ADI_A2B_MEM_NCF_DATA
static A2B_PERIPHERAL_DEVICE_CONFIG  sChain0_Slave0_PeriConfig3=
{
	/* I2C interface status  */ 
	 .bI2CInterfaceUse = ENABLED, 

	/*7 bit I2C address */ 
	.nI2Caddr = 0x6E, 

	/* Device type -audio source/sink/host  */ 
	.eDeviceType = A2B_AUDIO_SINK, 

	/* Tx0 Pin in use */
	.bUseTx0 = DISABLED, 

	/* Rx0 Pin in use */
	.bUseRx0 = ENABLED, 

	/* Tx1 Pin in use */
	.bUseTx1 = DISABLED, 

	/* Rx1 Pin in use */
	.bUseRx1 = DISABLED, 

	/* No of Tx0 channels  */ 
	.nChTx0 = 0, 

	/* No of Rx0 channels  */ 
	.nChRx0 = 4, 

	/* No of Tx1 channels  */ 
	.nChTx1 = 0, 

	/* No of Rx1 channels  */ 
	.nChRx1 = 0, 

	/* Number of configuration units  */ 
	.nNumPeriConfigUnit = 15, 

	/* Pointer to configuration units  */ 
	.paPeriConfigUnit =  &gaPeriCfg_0_6E_Unit[0] 
 };

/************************************************** END OF CHAIN 0 SLAVE0 PERIPHERAL DESCRIPTION ********************************************************************************  */


 ADI_A2B_MEM_PERI_CONFIG_DATA 
static	uint8 gaPeriCfg_0_70_0_Data[1] =
{
	0x14u	
};

 ADI_A2B_MEM_PERI_CONFIG_DATA 
static	uint8 gaPeriCfg_0_70_1_Data[1] =
{
	0x88u	
};

 ADI_A2B_MEM_PERI_CONFIG_DATA 
static	uint8 gaPeriCfg_0_70_2_Data[4] =
{
	0x64u,	0x1u,	0x0u,	0x0u	
};

 ADI_A2B_MEM_PERI_CONFIG_DATA 
static	uint8 gaPeriCfg_0_70_3_Data[1] =
{
	0x16u	
};

 ADI_A2B_MEM_PERI_CONFIG_DATA 
static	uint8 gaPeriCfg_0_70_4_Data[4] =
{
	0x64u,	0x1u,	0x0u,	0x0u	
};

ADI_A2B_MEM_PERI_CONFIG_UNIT
static	ADI_A2B_PERI_CONFIG_UNIT gaPeriCfg_0_70_Unit[5] =
{
	{A2B_WRITE_OP,	0x1u,	0x1u,	0x1u,	0x1u,	&gaPeriCfg_0_70_0_Data[0]},
	{A2B_WRITE_OP,	0x1u,	0x3u,	0x1u,	0x1u,	&gaPeriCfg_0_70_1_Data[0]},
	{A2B_DEALY_OP,	0x0u,	0x0u,	0x1u,	0x4u,	&gaPeriCfg_0_70_2_Data[0]},
	{A2B_WRITE_OP,	0x1u,	0x1u,	0x1u,	0x1u,	&gaPeriCfg_0_70_3_Data[0]},
	{A2B_DEALY_OP,	0x0u,	0x0u,	0x1u,	0x4u,	&gaPeriCfg_0_70_4_Data[0]}
};

 ADI_A2B_MEM_PERI_CONFIG_DATA 
static	uint8 gaPeriCfg_0_6C_0_Data[1] =
{
	0xFu	
};

 ADI_A2B_MEM_PERI_CONFIG_DATA 
static	uint8 gaPeriCfg_0_6C_1_Data[1] =
{
	0x0u	
};

 ADI_A2B_MEM_PERI_CONFIG_DATA 
static	uint8 gaPeriCfg_0_6C_2_Data[1] =
{
	0x18u	
};

 ADI_A2B_MEM_PERI_CONFIG_DATA 
static	uint8 gaPeriCfg_0_6C_3_Data[1] =
{
	0x49u	
};

 ADI_A2B_MEM_PERI_CONFIG_DATA 
static	uint8 gaPeriCfg_0_6C_4_Data[1] =
{
	0x0u	
};

 ADI_A2B_MEM_PERI_CONFIG_DATA 
static	uint8 gaPeriCfg_0_6C_5_Data[1] =
{
	0x1u	
};

ADI_A2B_MEM_PERI_CONFIG_UNIT
static	ADI_A2B_PERI_CONFIG_UNIT gaPeriCfg_0_6C_Unit[6] =
{
	{A2B_WRITE_OP,	0x1u,	0x0u,	0x1u,	0x1u,	&gaPeriCfg_0_6C_0_Data[0]},
	{A2B_WRITE_OP,	0x1u,	0x1u,	0x1u,	0x1u,	&gaPeriCfg_0_6C_1_Data[0]},
	{A2B_WRITE_OP,	0x1u,	0x2u,	0x1u,	0x1u,	&gaPeriCfg_0_6C_2_Data[0]},
	{A2B_WRITE_OP,	0x1u,	0x3u,	0x1u,	0x1u,	&gaPeriCfg_0_6C_3_Data[0]},
	{A2B_WRITE_OP,	0x1u,	0x4u,	0x1u,	0x1u,	&gaPeriCfg_0_6C_4_Data[0]},
	{A2B_WRITE_OP,	0x1u,	0x5u,	0x1u,	0x1u,	&gaPeriCfg_0_6C_5_Data[0]}
};

 ADI_A2B_MEM_PERI_CONFIG_DATA 
static	uint8 gaPeriCfg_0_6E_0_Data[1] =
{
	0x5Cu	
};

 ADI_A2B_MEM_PERI_CONFIG_DATA 
static	uint8 gaPeriCfg_0_6E_1_Data[1] =
{
	0x7u	
};

 ADI_A2B_MEM_PERI_CONFIG_DATA 
static	uint8 gaPeriCfg_0_6E_2_Data[1] =
{
	0xFu	
};

 ADI_A2B_MEM_PERI_CONFIG_DATA 
static	uint8 gaPeriCfg_0_6E_3_Data[1] =
{
	0x0u	
};

 ADI_A2B_MEM_PERI_CONFIG_DATA 
static	uint8 gaPeriCfg_0_6E_4_Data[1] =
{
	0x0u	
};

 ADI_A2B_MEM_PERI_CONFIG_DATA 
static	uint8 gaPeriCfg_0_6E_5_Data[1] =
{
	0x11u	
};

 ADI_A2B_MEM_PERI_CONFIG_DATA 
static	uint8 gaPeriCfg_0_6E_6_Data[1] =
{
	0x11u	
};

 ADI_A2B_MEM_PERI_CONFIG_DATA 
static	uint8 gaPeriCfg_0_6E_7_Data[1] =
{
	0x11u	
};

 ADI_A2B_MEM_PERI_CONFIG_DATA 
static	uint8 gaPeriCfg_0_6E_8_Data[1] =
{
	0x11u	
};

 ADI_A2B_MEM_PERI_CONFIG_DATA 
static	uint8 gaPeriCfg_0_6E_9_Data[1] =
{
	0x0u	
};

 ADI_A2B_MEM_PERI_CONFIG_DATA 
static	uint8 gaPeriCfg_0_6E_10_Data[1] =
{
	0x0u	
};

 ADI_A2B_MEM_PERI_CONFIG_DATA 
static	uint8 gaPeriCfg_0_6E_11_Data[1] =
{
	0x0u	
};

 ADI_A2B_MEM_PERI_CONFIG_DATA 
static	uint8 gaPeriCfg_0_6E_12_Data[1] =
{
	0x40u	
};

 ADI_A2B_MEM_PERI_CONFIG_DATA 
static	uint8 gaPeriCfg_0_6E_13_Data[1] =
{
	0x0u	
};

 ADI_A2B_MEM_PERI_CONFIG_DATA 
static	uint8 gaPeriCfg_0_6E_14_Data[1] =
{
	0x3u	
};

ADI_A2B_MEM_PERI_CONFIG_UNIT
static	ADI_A2B_PERI_CONFIG_UNIT gaPeriCfg_0_6E_Unit[15] =
{
	{A2B_WRITE_OP,	0x1u,	0x0u,	0x1u,	0x1u,	&gaPeriCfg_0_6E_0_Data[0]},
	{A2B_WRITE_OP,	0x1u,	0x1u,	0x1u,	0x1u,	&gaPeriCfg_0_6E_1_Data[0]},
	{A2B_WRITE_OP,	0x1u,	0x2u,	0x1u,	0x1u,	&gaPeriCfg_0_6E_2_Data[0]},
	{A2B_WRITE_OP,	0x1u,	0x3u,	0x1u,	0x1u,	&gaPeriCfg_0_6E_3_Data[0]},
	{A2B_WRITE_OP,	0x1u,	0x4u,	0x1u,	0x1u,	&gaPeriCfg_0_6E_4_Data[0]},
	{A2B_WRITE_OP,	0x1u,	0x5u,	0x1u,	0x1u,	&gaPeriCfg_0_6E_5_Data[0]},
	{A2B_WRITE_OP,	0x1u,	0x6u,	0x1u,	0x1u,	&gaPeriCfg_0_6E_6_Data[0]},
	{A2B_WRITE_OP,	0x1u,	0x7u,	0x1u,	0x1u,	&gaPeriCfg_0_6E_7_Data[0]},
	{A2B_WRITE_OP,	0x1u,	0x8u,	0x1u,	0x1u,	&gaPeriCfg_0_6E_8_Data[0]},
	{A2B_WRITE_OP,	0x1u,	0x9u,	0x1u,	0x1u,	&gaPeriCfg_0_6E_9_Data[0]},
	{A2B_WRITE_OP,	0x1u,	0xAu,	0x1u,	0x1u,	&gaPeriCfg_0_6E_10_Data[0]},
	{A2B_WRITE_OP,	0x1u,	0xBu,	0x1u,	0x1u,	&gaPeriCfg_0_6E_11_Data[0]},
	{A2B_WRITE_OP,	0x1u,	0xCu,	0x1u,	0x1u,	&gaPeriCfg_0_6E_12_Data[0]},
	{A2B_WRITE_OP,	0x1u,	0xDu,	0x1u,	0x1u,	&gaPeriCfg_0_6E_13_Data[0]},
	{A2B_WRITE_OP,	0x1u,	0xEu,	0x1u,	0x1u,	&gaPeriCfg_0_6E_14_Data[0]}
};
