/*******************************************************************************
Copyright (c) 2021 - Analog Devices Inc. All Rights Reserved.
This software is proprietary & confidential to Analog Devices, Inc.
and its licensors.
******************************************************************************
* @file: adi_a2b_busconfig.c
* @brief: This file contains A2B Schematic information
* @version: $Revision$
* @date: Monday, September 6, 2021-5:18:14 PM
* BCF Version - 1.0.0
* A2B DLL version- 19.3.0
* A2B Stack DLL version- 19.3.0.0
* SigmaStudio version- 4.06.000.1812
* Developed by: Automotive Software and Systems team, Bangalore, India
* THIS IS A SIGMASTUDIO GENERATED FILE AND SHALL NOT BE MODIFIED OUTSIDE OF SIGMASTUDIO
*****************************************************************************/

/*! \addtogroup Target_Independent
* @{
*/

/*! \addtogroup Bus_Configuration Bus Configuration
* @{
*/

#include "adi_a2b_datatypes.h"
#include "adi_a2b_graphdata.h"
#include "adi_a2b_busconfig.h"

static ADI_A2B_MASTER_SLAVE_CONFIG sChainConfig0;
static ADI_A2B_MASTER_NCD sMasterNode0;
static ADI_A2B_SLAVE_NCD sChain0_SlaveNode0;
static ADI_A2B_SLAVE_NCD sChain0_SlaveNode1;
static A2B_PERIPHERAL_DEVICE_CONFIG  Target_PeriConfig0;
static A2B_PERIPHERAL_DEVICE_CONFIG  sChain0_Slave0_PeriConfig0;
static A2B_PERIPHERAL_DEVICE_CONFIG  sChain0_Slave0_PeriConfig1;
static A2B_PERIPHERAL_DEVICE_CONFIG  sChain0_Slave0_PeriConfig2;
static A2B_PERIPHERAL_DEVICE_CONFIG  sChain0_Slave1_PeriConfig0;
static A2B_PERIPHERAL_DEVICE_CONFIG  sChain0_Slave1_PeriConfig1;
static ADI_A2B_PERI_CONFIG_UNIT  gaPeriCfg_1_70_Unit[5];
static A2B_PERIPHERAL_DEVICE_CONFIG  sChain0_Slave1_PeriConfig2;
static ADI_A2B_PERI_CONFIG_UNIT  gaPeriCfg_1_6C_Unit[6];
static A2B_PERIPHERAL_DEVICE_CONFIG  sChain0_Slave1_PeriConfig3;
static ADI_A2B_PERI_CONFIG_UNIT  gaPeriCfg_1_6E_Unit[15];


ADI_A2B_MEM_BCF_DATA

/* BUS CONFIGURATION */ 
ADI_A2B_BCD sBusDescription = 
 { 
	/* Number of master nodes/daisy chains in the network */ 
	.nNumMasterNode  = 1u, 
 
	/* Array of Master-slave daisy chains */ 
 	.apNetworkconfig = {  &sChainConfig0, NULL_PTR, NULL_PTR, NULL_PTR }, 

	/* Network control guidance */ 
	.sTargetProperties    = 
 	{ 
		/* Discovery Mode Selection */ 
		.eDiscoveryMode     = A2B_SIMPLE_DISCOVERY,

		/* Delay (in milliseconds) to wait after a software reset and before discovery start*/ 
		.nDiscoveryStartDelay     = 25,

		/*  Enable/Disable  Line diagnostics (Post discovery) */ 
		.bLineDiagnostics   = ENABLED,

		/*  Enable/Disable automatic discovery upon critical faults (during discovery process) */ 
		.bAutoDiscCriticalFault = ENABLED,

		/*  Number of automatic discovery attempts (during discovery process) */ 
		.nAttemptsCriticalFault = 0,

		/* Auto-rediscovery upon post discovery line fault */ 
		.bAutoRediscOnFault = ENABLED,

		/*! Interval (in milliseconds) between re-discovery attempt */ 
		.nRediscInterval = 50,

		/*! Number of peripheral devices connected to Target */
		.nNumPeriDevice = 1,

		/*! Array of peripheral configuration pointers */
 		.apPeriConfig = { 	&Target_PeriConfig0, NULL_PTR, NULL_PTR, NULL_PTR, NULL_PTR, NULL_PTR, NULL_PTR, NULL_PTR, NULL_PTR, NULL_PTR, NULL_PTR, NULL_PTR, NULL_PTR, NULL_PTR, NULL_PTR, NULL_PTR }
 	}, 

 };

 /************************************************* CHAIN 0 DESCRIPTION  ********************************************************************************/

 /* MASTER-SLAVE DAISY CHAIN0 */ 
 
ADI_A2B_MEM_BCF_DATA 
static ADI_A2B_MASTER_SLAVE_CONFIG sChainConfig0= 
 { 
 	/* Pointer to master node */ 
	.pMasterConfig = &sMasterNode0, 
 
	/*! Number of Slave nodes */ 
	.nNumSlaveNode = 2, 
 
	/*! Array of slave node pointers */ 
	.apSlaveConfig = { &sChain0_SlaveNode0, &sChain0_SlaveNode1, NULL_PTR, NULL_PTR, NULL_PTR, NULL_PTR, NULL_PTR, NULL_PTR, NULL_PTR, NULL_PTR}, 

	.sCommonSetting = 
 	{ 
		/*! Master I2C address - 7 bit */ 
		.nMasterI2CAddr = 0x68, 

		/*! Bus I2C address - 7 bit */ 
		.nBusI2CAddr = 0x69, 

		/*! Enable down stream */ 
		.bEnableDwnstream = ENABLED, 

		/*! Enable down stream */ 
		.bEnableUpstream = ENABLED, 

		/*! Down slot size */ 
		.nDwnSlotSize = A2B_DNSLOT_SIZE_32 , 

 		/*! Up slot size  */ 
		.nUpSlotSize = A2B_UPSLOT_SIZE_32  ,

 		/*! Floating point compression for upstream  */ 
		.bUpstreamCompression  = DISABLED,

		/*! Floating point compression for downstream  */  
		.bDwnstreamCompression = DISABLED,

		/*! Reduce Data Rate on A2B Bus   */  
		.bEnableReduceRate = DISABLED,

		/*! System level reduced rate factor   */  
		.nSysRateDivFactor =1,

	} 
 };

 /************************************************* START OF MASTER NODE 0 DESCRIPTION ********************************************************************************/ 

 /*  MASTER NODE DESCRIPTION   */ 

ADI_A2B_MEM_BCF_DATA
static ADI_A2B_MASTER_NCD sMasterNode0= 
{
	/*! Node ID */
	.nNodeID			= 0x0u ,

	/*! Source node ID : '0xFF' indicates Target processor */
	.nSrcNodeID			= 0xFFu ,

	/*! Transceiver part number */
	.ePartNum			= ADI_A2B_AD2425 ,

	.sAuthSettings =
	{
		/*! Vendor ID - ADI */
		.nVendorID			= 0xADu ,

		/*! Silicon version  - ADI */
		.nVersionID			= 0x2u ,

		/*! Product ID - AD24xx */
		.nProductID			= 0x25u ,

		/*! Interface Capability - I2C */
		.nCapability		= 0x1u ,
	},

	.sCustomNodeAuthSettings =
	{
		/*! Enable/Disable Custom Node ID settings */
		.bCustomNodeIdAuth		= DISABLED ,

	},

	.sI2SSettings =
	{
		/*! TDM mode  */
		.nTDMMode			= A2B_TDM8 ,

		/*! TDM channel size  */
		.nTDMChSize			= A2B_32BIT_TDM ,

		/*! SYNC mode - Pulse/50% duty cycle   */
		.nSyncMode			= A2B_PULSE_SYNC ,

		/*! SYNC Polarity- Rising/Falling edge */
		.nSyncPolarity		= RAISING_EDGE ,

		/*! Early frame sync status */
		.bEarlySync			= DISABLED ,

		/*! DTXn change BCLK edge */
		.nBclkTxPolarity	= RAISING_EDGE ,

		/*! DRXn Sampling BCLK edge */
		.nBclkRxPolarity	= RAISING_EDGE ,

		/*! Interleave slots between Tx pins  */
		.bTXInterleave		= DISABLED ,

		/*! Interleave slots between Rx pins  */
		.bRXInterleave		= DISABLED ,

		/*! Transmit Channel offset in TDM - 0 to 63 */
		.nTxOffset			= 0x0u ,

		/*! Receive channel offset in TDM - 0 to 63 */
		.nRxOffset			= 0x0u ,

		/*! Tx Pin TriState before driving TDM slots */
		.bTriStateBeforeTx	= DISABLED ,

		/*! Tx Pin Tristate after driving TDM slots */
		.bTriStateAfterTx	= DISABLED ,

		.sI2SRateConfig =
		{
			/*! Enable RR valid bit in LSB */
			.bRRValidBitLSB	= DISABLED ,

			/*! Enable Valid RR bit in Extra bit */
			.bRRValidBitExtraBit	= DISABLED ,

			/*! Enable Reduced rate strobe in ADR1/IO1 */
			.bRRStrobe	= DISABLED ,

			/*! Strobe direction High or Low */
			.bRRStrobeDirection	= A2B_LOW ,

		},
	},
	.sConfigCtrlSettings =
	{
		/*! Early acknowledge for I2C read/write */
		.bI2CEarlyAck		= DISABLED ,

		/*! Response cycles  */
		.nRespCycle			= 0x94u ,

		/*! Pass up slots */
		.nPassUpSlots		= 0x3u ,

		/*! Pass down slots */
		.nPassDwnSlots		= 0x8u ,

		/*! Data control for Master */
		.nDatctrl		= 0x3u ,

	},
	.sGPIOSettings =
	{
		.sPinMuxSettings =
		{
			/*! GPIO 1 Pin multiplexing */
			.bGPIO1PinUsage	= A2B_GPIO_1_DISABLE ,

			/*! GPIO 2 Pin multiplexing */
			.bGPIO2PinUsage	= A2B_GPIO_2_DISABLE ,

			/*! GPIO 3 Pin multiplexing */
			.bGPIO3PinUsage	= A2B_GPIO_3_AS_DTX0 ,

			/*! GPIO 4 Pin multiplexing */
			.bGPIO4PinUsage	= A2B_GPIO_4_DISABLE ,

			/*! GPIO 5 Pin multiplexing */
			.bGPIO5PinUsage	= A2B_GPIO_5_AS_DRX0 ,

			/*! GPIO 6 Pin multiplexing */
			.bGPIO6PinUsage	= A2B_GPIO_6_DISABLE ,
			/*! GPIO 7 Pin multiplexing */
			.bGPIO7PinUsage	= A2B_GPIO_7_DISABLE ,

		},
		.sPinIntConfig =
		{
			/*! Enable GPIO 1 Input pin interrupt  */
			.bGPIO1Interrupt	= DISABLED ,

			/*! Interrupt polarity - GPIO 1 Input pin  */
			.bGPIO1IntPolarity	= RAISING_EDGE ,

			/*! Enable GPIO 2 Input pin interrupt  */
			.bGPIO2Interrupt	= DISABLED ,

			/*! Interrupt polarity - GPIO 2 Input pin  */
			.bGPIO2IntPolarity	= RAISING_EDGE ,

			/*! Enable GPIO 3 Input pin interrupt  */
			.bGPIO3Interrupt	= DISABLED ,

			/*! Interrupt polarity - GPIO 3 Input pin  */
			.bGPIO3IntPolarity	= RAISING_EDGE ,

			/*! Enable GPIO 4 Input pin interrupt  */
			.bGPIO4Interrupt	= DISABLED ,

			/*! Interrupt polarity - GPIO 4 Input pin  */
			.bGPIO4IntPolarity	= RAISING_EDGE ,

			/*! Enable GPIO 5 Input pin interrupt  */
			.bGPIO5Interrupt	= DISABLED ,

			/*! Interrupt polarity - GPIO 5 Input pin  */
			.bGPIO5IntPolarity	= RAISING_EDGE ,

			/*! Enable GPIO 6 Input pin interrupt  */
			.bGPIO6Interrupt	= DISABLED ,

			/*! Interrupt polarity - GPIO 6 Input pin  */
			.bGPIO6IntPolarity	= RAISING_EDGE ,

			/*! Enable GPIO 7 Input pin interrupt  */
			.bGPIO7Interrupt	= DISABLED ,

			/*! Interrupt polarity - GPIO 7 Input pin  */
			.bGPIO7IntPolarity	= RAISING_EDGE ,

		},
		.sOutPinVal =
		{
			/*! Data value for GPIO 1 output pin  */
			.bGPIO1Val = A2B_LOW ,

			/*! Data value for GPIO 2 output pin  */
			.bGPIO2Val = A2B_LOW ,

			/*! Data value for GPIO 3 output pin  */
			.bGPIO3Val = A2B_LOW ,

			/*! Data value for GPIO 4 output pin  */
			.bGPIO4Val = A2B_LOW ,

			/*! Data value for GPIO 5 output pin  */
			.bGPIO5Val = A2B_LOW ,

			/*! Data value for GPIO 6 output pin  */
			.bGPIO6Val = A2B_LOW ,

			/*! Data value for GPIO 7 output pin  */
			.bGPIO7Val = A2B_LOW ,

		},

		/*! Digital Pin drive strength */
		.bHighDriveStrength = ENABLED ,

		/*! IRQ Pin Invert */
		.bIRQInv = DISABLED ,

		/*! Enable tristate when inactive */
		.bIRQTriState = DISABLED ,

	},

	.sInterruptSettings =
	{
		/*! Report Header count error  */
		.bReportHDCNTErr		= DISABLED ,

		/*! Report Data decoding error  */
		.bReportDDErr			= DISABLED ,

		/*! Report Data CRC error  */
		.bReportCRCErr			= DISABLED ,

		/*! Report Data Parity error  */
		.bReportDataParityErr	= DISABLED ,

		/*! Report Data Bus Power error  */
		.bReportPwrErr			= ENABLED ,

		/*! Report bit error count overflow error  */
		.bReportErrCntOverFlow	= DISABLED ,

		/*! Report SRF miss error  */
		.bReportSRFMissErr	= DISABLED ,

		/*! Report GPIO  1 Interrupt */
		.bReportGPIO1			= DISABLED ,

		/*! Report GPIO  2 Interrupt */
		.bReportGPIO2			= DISABLED ,

		/*! Report GPIO  3 Interrupt */
		.bReportGPIO3			= DISABLED ,

		/*! Report GPIO  4 Interrupt */
		.bReportGPIO4			= DISABLED ,

		/*! Report GPIO  5 Interrupt */
		.bReportGPIO5			= DISABLED ,

		/*! Report GPIO  6 Interrupt */
		.bReportGPIO6			= DISABLED ,

		/*! Report GPIO  7 Interrupt */
		.bReportGPIO7			= DISABLED ,

		/*! Report I2C failure error  */
		.bReportI2CErr			= DISABLED ,

		/*! Report Discovery Completion */
		.bDiscComplete			= ENABLED ,

		/*! Report Interrupt frame error */
		.bIntFrameCRCErr		= DISABLED ,

		/*! Report Interrupt requests  */
		.bSlaveIntReq			= ENABLED ,

	},

	.sGPIODSettings =
	{
		.sGPIOD1Config =
		{
			/*! Enable/Disable GPIO over distance   */
			.bGPIODistance	= DISABLED ,

			/*! Enable/Disable  */
			.bGPIOSignalInv	= DISABLED ,

			/*! Bus port masks */ 
			.abBusPortMask = { A2B_MASK_BUSFLAG_0, A2B_MASK_BUSFLAG_1, A2B_MASK_BUSFLAG_2, A2B_MASK_BUSFLAG_3, A2B_MASK_BUSFLAG_4, A2B_MASK_BUSFLAG_5, A2B_MASK_BUSFLAG_6, A2B_MASK_BUSFLAG_7},


		},

		.sGPIOD2Config =
		{
			/*! Enable/Disable GPIO over distance   */
			.bGPIODistance	= DISABLED ,

			/*! Enable/Disable  */
			.bGPIOSignalInv	= DISABLED ,

			/*! Bus port masks */ 
			.abBusPortMask = { A2B_MASK_BUSFLAG_0, A2B_MASK_BUSFLAG_1, A2B_MASK_BUSFLAG_2, A2B_MASK_BUSFLAG_3, A2B_MASK_BUSFLAG_4, A2B_MASK_BUSFLAG_5, A2B_MASK_BUSFLAG_6, A2B_MASK_BUSFLAG_7},


		},

		.sGPIOD3Config =
		{
			/*! Enable/Disable GPIO over distance   */
			.bGPIODistance	= DISABLED ,

			/*! Enable/Disable  */
			.bGPIOSignalInv	= DISABLED ,

			/*! Bus port masks */ 
			.abBusPortMask = { A2B_MASK_BUSFLAG_0, A2B_MASK_BUSFLAG_1, A2B_MASK_BUSFLAG_2, A2B_MASK_BUSFLAG_3, A2B_MASK_BUSFLAG_4, A2B_MASK_BUSFLAG_5, A2B_MASK_BUSFLAG_6, A2B_MASK_BUSFLAG_7},


		},

		.sGPIOD4Config =
		{
			/*! Enable/Disable GPIO over distance   */
			.bGPIODistance	= DISABLED ,

			/*! Enable/Disable  */
			.bGPIOSignalInv	= DISABLED ,

			/*! Bus port masks */ 
			.abBusPortMask = { A2B_MASK_BUSFLAG_0, A2B_MASK_BUSFLAG_1, A2B_MASK_BUSFLAG_2, A2B_MASK_BUSFLAG_3, A2B_MASK_BUSFLAG_4, A2B_MASK_BUSFLAG_5, A2B_MASK_BUSFLAG_6, A2B_MASK_BUSFLAG_7},


		},

		.sGPIOD5Config =
		{
			/*! Enable/Disable GPIO over distance   */
			.bGPIODistance	= DISABLED ,

			/*! Enable/Disable  */
			.bGPIOSignalInv	= DISABLED ,

			/*! Bus port masks */ 
			.abBusPortMask = { A2B_MASK_BUSFLAG_0, A2B_MASK_BUSFLAG_1, A2B_MASK_BUSFLAG_2, A2B_MASK_BUSFLAG_3, A2B_MASK_BUSFLAG_4, A2B_MASK_BUSFLAG_5, A2B_MASK_BUSFLAG_6, A2B_MASK_BUSFLAG_7},


		},

		.sGPIOD6Config =
		{
			/*! Enable/Disable GPIO over distance   */
			.bGPIODistance	= DISABLED ,

			/*! Enable/Disable  */
			.bGPIOSignalInv	= DISABLED ,

			/*! Bus port masks */ 
			.abBusPortMask = { A2B_MASK_BUSFLAG_0, A2B_MASK_BUSFLAG_1, A2B_MASK_BUSFLAG_2, A2B_MASK_BUSFLAG_3, A2B_MASK_BUSFLAG_4, A2B_MASK_BUSFLAG_5, A2B_MASK_BUSFLAG_6, A2B_MASK_BUSFLAG_7},


		},

		.sGPIOD7Config =
		{
			/*! Enable/Disable GPIO over distance   */
			.bGPIODistance	= DISABLED ,

			/*! Enable/Disable  */
			.bGPIOSignalInv	= DISABLED ,

			/*! Bus port masks */ 
			.abBusPortMask = { A2B_MASK_BUSFLAG_0, A2B_MASK_BUSFLAG_1, A2B_MASK_BUSFLAG_2, A2B_MASK_BUSFLAG_3, A2B_MASK_BUSFLAG_4, A2B_MASK_BUSFLAG_5, A2B_MASK_BUSFLAG_6, A2B_MASK_BUSFLAG_7},


		},

	},

	.sClkOutSettings =
	{
		/*! Enable Clock1 inversion */
		.bClk1Inv			= DISABLED ,

		/*! Clk1 pre-division */
		.bClk1PreDiv			= A2B_CLKOUT_PREDIV_02,

		/*! Clk1 division */
		.bClk1Div			= A2B_CLKOUT_DIV_2,

		/*! Enable Clock2 inversion */
		.bClk2Inv			= DISABLED ,

		/*! Clk2 pre-division */
		.bClk2PreDiv			= A2B_CLKOUT_PREDIV_02,

		/*! Clk2 division */
		.bClk2Div			= A2B_CLKOUT_DIV_2,

	},

	.sRegSettings =
	{
		/*! Switch control register */
		.nSWCTL		= 0x1u ,

		/*! PDM Control register  */
		.nPDMCTL	= 0x0u ,

		/*! Test mode register */
		.nTESTMODE	= 0x0u ,

		/*! Error control register */
		.nBECCTL	= 0xEFu ,

		/*! Error management register  */
		.nERRMGMT	= 0x0u ,

		/*! I2S test register  */
		.nI2STEST	= 0x0u ,

		/*! Generate error  */
		.nGENERR	= 0x0u ,

		/*! Raise interrupt register */
		.nRAISE		= 0x0u ,

		/*! Bus monitor configuration  */
		.nBMMCFG	= 0x0u ,

	}

};

/************************************************* END OF MASTER NODE 0 DESCRIPTION ********************************************************************************/

 /************************************************* START OF SLAVE NODE 0 DESCRIPTION ********************************************************************************/

/* SLAVE NODE DESCRIPTION */ 

ADI_A2B_MEM_BCF_DATA
static ADI_A2B_SLAVE_NCD sChain0_SlaveNode0= 
{
	/* Node ID  */
	.nNodeID			= 0x0u ,

	/* Source node ID  */
	.nSrcNodeID			= 0x0u ,

	/*! Transceiver part number */
	.ePartNum			= ADI_A2B_AD2402 ,

	/* Auto-configure Node Enabled */
	.bEnableAutoConfig			= DISABLED ,

	.sAuthSettings =
	{
		/*! Vendor ID - ADI */
		.nVendorID			= 0xADu ,

		/*! Silicon version  */
		.nVersionID			= 0x21u ,

		/*! PRODUCT ID -AD2410 */
		.nProductID			= 0x10u ,

		/*! Expected capablity - I2C */
		.nCapability		= 0x1u ,
	},

	.sCustomNodeAuthSettings =
	{
		/*! Enable/Disable Custom Node ID settings */
		.bCustomNodeIdAuth		= DISABLED ,

	},

	.sPDMSettings =
	{
		/*! Number of PDM0 slots  */
		.nNumSlotsPDM0		= A2B_PDM0SLOTS_2 ,

		/*! Number of PDM1 slots  */
		.nNumSlotsPDM1		= A2B_PDM1SLOTS_1 ,

		/*! Use High Pass Filter  */
		.bHPFUse		= ENABLED ,

		/*! Filter Cut-off frequency  */
		.nHPFCutOff		= A2B_59_9 ,

	},

	.sConfigCtrlSettings =
	{
		/*! I2C interface frequency */
		.nI2CFrequency		= A2B_I2C_100kHz ,

		/*! Response cycles  */
		.nRespCycle			= 0x94u ,

		/*! Expected super/audio frame rate */
		.nSuperFrameRate	= A2B_SFF_RATE_48_0kHz ,

		/*! Number of broadcast slots */
		.nBroadCastSlots	= 0x0u ,

		/*! Local down slots */
		.nLocalDwnSlotsConsume		= 0x0u ,

		/*! Local Up slots */
		.nLocalUpSlotsContribute		= 0x3u ,

		/*! Pass up slots */
		.nPassUpSlots		= 0x0u ,

		/*! Pass down slots */
		.nPassDwnSlots		= 0x8u ,

	},
	.sGPIOSettings =
	{
		.sPinMuxSettings =
		{
			/*! GPIO 0 Pin multiplexing */
			.bGPIO0PinUsage	= A2B_GPIO_0_DISABLE ,

			/*! GPIO 1 Pin multiplexing */
			.bGPIO1PinUsage	= A2B_GPIO_1_DISABLE ,

			/*! GPIO 2 Pin multiplexing */
			.bGPIO2PinUsage	= A2B_GPIO_2_DISABLE ,

			/*! GPIO 3 Pin multiplexing */
			.bGPIO3PinUsage	= A2B_GPIO_3_DISABLE ,

			/*! GPIO 4 Pin multiplexing */
			.bGPIO4PinUsage	= A2B_GPIO_4_DISABLE ,

			/*! GPIO 5 Pin multiplexing */
			.bGPIO5PinUsage	= A2B_GPIO_5_AS_PDM0 ,

			/*! GPIO 6 Pin multiplexing */
			.bGPIO6PinUsage	= A2B_GPIO_6_AS_PDM1 ,

		},
		.sPinIntConfig =
		{
			/*! Enable GPIO 0 Input pin interrupt  */
			.bGPIO0Interrupt	= DISABLED ,

			/*! Interrupt polarity - GPIO 0 Input pin  */
			.bGPIO0IntPolarity	= RAISING_EDGE ,

			/*! Enable GPIO 1 Input pin interrupt  */
			.bGPIO1Interrupt	= DISABLED ,

			/*! Interrupt polarity - GPIO 1 Input pin  */
			.bGPIO1IntPolarity	= RAISING_EDGE ,

			/*! Enable GPIO 2 Input pin interrupt  */
			.bGPIO2Interrupt	= DISABLED ,

			/*! Interrupt polarity - GPIO 2 Input pin  */
			.bGPIO2IntPolarity	= RAISING_EDGE ,

			/*! Enable GPIO 3 Input pin interrupt  */
			.bGPIO3Interrupt	= DISABLED ,

			/*! Interrupt polarity - GPIO 3 Input pin  */
			.bGPIO3IntPolarity	= RAISING_EDGE ,

			/*! Enable GPIO 4 Input pin interrupt  */
			.bGPIO4Interrupt	= DISABLED ,

			/*! Interrupt polarity - GPIO 4 Input pin  */
			.bGPIO4IntPolarity	= RAISING_EDGE ,

			/*! Enable GPIO 5 Input pin interrupt  */
			.bGPIO5Interrupt	= DISABLED ,

			/*! Interrupt polarity - GPIO 5 Input pin  */
			.bGPIO5IntPolarity	= RAISING_EDGE ,

			/*! Enable GPIO 6 Input pin interrupt  */
			.bGPIO6Interrupt	= DISABLED ,

			/*! Interrupt polarity - GPIO 6 Input pin  */
			.bGPIO6IntPolarity	= RAISING_EDGE ,

		},
		.sOutPinVal =
		{
			/*! Data value for GPIO 0 output pin  */
			.bGPIO0Val = A2B_LOW ,

			/*! Data value for GPIO 1 output pin  */
			.bGPIO1Val = A2B_LOW ,

			/*! Data value for GPIO 2 output pin  */
			.bGPIO2Val = A2B_LOW ,

			/*! Data value for GPIO 3 output pin  */
			.bGPIO3Val = A2B_LOW ,

			/*! Data value for GPIO 4 output pin  */
			.bGPIO4Val = A2B_LOW ,

			/*! Data value for GPIO 5 output pin  */
			.bGPIO5Val = A2B_LOW ,

			/*! Data value for GPIO 6 output pin  */
			.bGPIO6Val = A2B_LOW ,

		},

		/*! Digital Pin drive strength */
		.bHighDriveStrength = ENABLED ,

	},

	.sInterruptSettings =
	{
		/*! Report Header count error  */
		.bReportHDCNTErr		= DISABLED ,

		/*! Report Data decoding error  */
		.bReportDDErr			= DISABLED ,

		/*! Report Data CRC error  */
		.bReportCRCErr			= DISABLED ,

		/*! Report Data Parity error  */
		.bReportDataParityErr	= DISABLED ,

		/*! Report Data Bus Power error  */
		.bReportPwrErr			= ENABLED ,

		/*! Report bit error count overflow error  */
		.bReportErrCntOverFlow	= DISABLED ,

		/*! Report SRF miss error  */
		.bReportSRFMissErr	= DISABLED ,

		/*! Report GPIO  0 Interrupt */
		.bReportGPIO0			= DISABLED ,

		/*! Report GPIO  1 Interrupt */
		.bReportGPIO1			= DISABLED ,

		/*! Report GPIO  2 Interrupt */
		.bReportGPIO2			= DISABLED ,

		/*! Report GPIO  3 Interrupt */
		.bReportGPIO3			= DISABLED ,

		/*! Report GPIO  4 Interrupt */
		.bReportGPIO4			= DISABLED ,

		/*! Report GPIO  5 Interrupt */
		.bReportGPIO5			= DISABLED ,

		/*! Report GPIO  6 Interrupt */
		.bReportGPIO6			= DISABLED ,

	},

	.sRegSettings =
	{
		/*! Switch control register */
		.nSWCTL		= 0x1u ,

		/*! Test mode register */
		.nTESTMODE	= 0x0u ,

		/*! Error control register */
		.nBECCTL	= 0xEFu ,

		/*! Error management register  */
		.nERRMGMT	= 0x0u ,

		/*! Generate error  */
		.nGENERR	= 0x0u ,

		/*! Raise interrupt register */
		.nRAISE		= 0x0u ,

		/*! Bus monitor configuration */
		.nBMMCFG		= 0x0u ,

	},

		 /* Number of peripheral devices connected  */
		.nNumPeriDevice = 3,

		 /*Array of peripheral configuration pointers */ 
		.apPeriConfig = { 	 &sChain0_Slave0_PeriConfig0,  &sChain0_Slave0_PeriConfig1,  &sChain0_Slave0_PeriConfig2, NULL_PTR, NULL_PTR, NULL_PTR, NULL_PTR, NULL_PTR, NULL_PTR, NULL_PTR, NULL_PTR, NULL_PTR, NULL_PTR, NULL_PTR, NULL_PTR, NULL_PTR	}

};

/************************************************* END OF SLAVE NODE 0 DESCRIPTION ********************************************************************************/ 
 
/************************************************* START OF SLAVE NODE 1 DESCRIPTION ********************************************************************************/

/* SLAVE NODE DESCRIPTION */ 

ADI_A2B_MEM_BCF_DATA
static ADI_A2B_SLAVE_NCD sChain0_SlaveNode1= 
{
	/* Node ID  */
	.nNodeID			= 0x1u ,

	/* Source node ID  */
	.nSrcNodeID			= 0x0u ,

	/*! Transceiver part number */
	.ePartNum			= ADI_A2B_AD2410 ,

	/* Auto-configure Node Enabled */
	.bEnableAutoConfig			= DISABLED ,

	.sAuthSettings =
	{
		/*! Vendor ID - ADI */
		.nVendorID			= 0xADu ,

		/*! Silicon version  */
		.nVersionID			= 0x21u ,

		/*! PRODUCT ID -AD2410 */
		.nProductID			= 0x10u ,

		/*! Expected capablity - I2C */
		.nCapability		= 0x1u ,
	},

	.sCustomNodeAuthSettings =
	{
		/*! Enable/Disable Custom Node ID settings */
		.bCustomNodeIdAuth		= DISABLED ,

	},

	.sI2SSettings =
	{
		/*! TDM mode  */
		.nTDMMode		= A2B_TDM4 ,

		/*! TDM channel size  */
		.nTDMChSize			= A2B_32BIT_TDM ,

		/*! SYNC mode - Pulse/50% duty cycle   */
		.nSyncMode			= A2B_PULSE_SYNC ,

		/*! SYNC Polarity- Rising/Falling edge */
		.nSyncPolarity		= RAISING_EDGE ,

		/*! Early frame sync status */
		.bEarlySync			= DISABLED ,

		/*! SYNC offset with Super frame */
		.nSyncOffset		= 0x0 ,

		/*! DTXn change BCLK edge */
		.nBclkTxPolarity	= RAISING_EDGE ,

		/*! DRXn sampling BCLK edge */
		.nBclkRxPolarity	= RAISING_EDGE ,

		/*! Interleave slots between Tx pins  */
		.bTXInterleave		= DISABLED ,

		/*! Interleave slots between Rx pins  */
		.bRXInterleave		= DISABLED ,

		.sI2SRateConfig =
		{
			/* Sample rate */
			.nSamplingRate		= A2B_SAMPLERATE_48kHz ,

			/*! Reduce / re-transmit higher frequency samples  */
		.bReduce			= DISABLED ,

		},
		/*! Codec clock rate  */
		.nCodecClkRate		= A2B_CODEC_CLK_12_288MHz ,

	},

	.sPDMSettings =
	{
		/*! Number of PDM0 slots  */
		.nNumSlotsPDM0		= A2B_PDM0SLOTS_1 ,

		/*! Number of PDM1 slots  */
		.nNumSlotsPDM1		= A2B_PDM1SLOTS_1 ,

		/*! Use High Pass Filter  */
		.bHPFUse		= DISABLED ,

		/*! Filter Cut-off frequency  */
		.nHPFCutOff		= A2B_59_9 ,

	},

	.sConfigCtrlSettings =
	{
		/*! I2C interface frequency */
		.nI2CFrequency		= A2B_I2C_400kHz ,

		/*! Response cycles  */
		.nRespCycle			= 0x90u ,

		/*! Expected super/audio frame rate */
		.nSuperFrameRate	= A2B_SFF_RATE_48_0kHz ,

		/*! Number of broadcast slots */
		.nBroadCastSlots	= 0x0u ,

		/*! Local down slots */
		.nLocalDwnSlotsConsume		= 0x8u ,

		/*! Local Up slots */
		.nLocalUpSlotsContribute		= 0x0u ,

		/*! Pass up slots */
		.nPassUpSlots		= 0x0u ,

		/*! Pass down slots */
		.nPassDwnSlots		= 0x0u ,

	},
	.sGPIOSettings =
	{
		.sPinMuxSettings =
		{
			/*! GPIO 0 Pin multiplexing */
			.bGPIO0PinUsage	= A2B_GPIO_0_OUTPUT ,

			/*! GPIO 1 Pin multiplexing */
			.bGPIO1PinUsage	= A2B_GPIO_1_OUTPUT ,

			/*! GPIO 2 Pin multiplexing */
			.bGPIO2PinUsage	= A2B_GPIO_2_OUTPUT ,

			/*! GPIO 3 Pin multiplexing */
			.bGPIO3PinUsage	= A2B_GPIO_3_AS_DTX0 ,

			/*! GPIO 4 Pin multiplexing */
			.bGPIO4PinUsage	= A2B_GPIO_4_AS_DTX1 ,

			/*! GPIO 5 Pin multiplexing */
			.bGPIO5PinUsage	= A2B_GPIO_5_INPUT ,

			/*! GPIO 6 Pin multiplexing */
			.bGPIO6PinUsage	= A2B_GPIO_6_OUTPUT ,

		},
		.sPinIntConfig =
		{
			/*! Enable GPIO 0 Input pin interrupt  */
			.bGPIO0Interrupt	= DISABLED ,

			/*! Interrupt polarity - GPIO 0 Input pin  */
			.bGPIO0IntPolarity	= RAISING_EDGE ,

			/*! Enable GPIO 1 Input pin interrupt  */
			.bGPIO1Interrupt	= DISABLED ,

			/*! Interrupt polarity - GPIO 1 Input pin  */
			.bGPIO1IntPolarity	= RAISING_EDGE ,

			/*! Enable GPIO 2 Input pin interrupt  */
			.bGPIO2Interrupt	= DISABLED ,

			/*! Interrupt polarity - GPIO 2 Input pin  */
			.bGPIO2IntPolarity	= RAISING_EDGE ,

			/*! Enable GPIO 3 Input pin interrupt  */
			.bGPIO3Interrupt	= DISABLED ,

			/*! Interrupt polarity - GPIO 3 Input pin  */
			.bGPIO3IntPolarity	= RAISING_EDGE ,

			/*! Enable GPIO 4 Input pin interrupt  */
			.bGPIO4Interrupt	= DISABLED ,

			/*! Interrupt polarity - GPIO 4 Input pin  */
			.bGPIO4IntPolarity	= RAISING_EDGE ,

			/*! Enable GPIO 5 Input pin interrupt  */
			.bGPIO5Interrupt	= DISABLED ,

			/*! Interrupt polarity - GPIO 5 Input pin  */
			.bGPIO5IntPolarity	= RAISING_EDGE ,

			/*! Enable GPIO 6 Input pin interrupt  */
			.bGPIO6Interrupt	= DISABLED ,

			/*! Interrupt polarity - GPIO 6 Input pin  */
			.bGPIO6IntPolarity	= RAISING_EDGE ,

		},
		.sOutPinVal =
		{
			/*! Data value for GPIO 0 output pin  */
			.bGPIO0Val = A2B_LOW ,

			/*! Data value for GPIO 1 output pin  */
			.bGPIO1Val = A2B_LOW ,

			/*! Data value for GPIO 2 output pin  */
			.bGPIO2Val = A2B_HIGH ,

			/*! Data value for GPIO 3 output pin  */
			.bGPIO3Val = A2B_LOW ,

			/*! Data value for GPIO 4 output pin  */
			.bGPIO4Val = A2B_LOW ,

			/*! Data value for GPIO 5 output pin  */
			.bGPIO5Val = A2B_LOW ,

			/*! Data value for GPIO 6 output pin  */
			.bGPIO6Val = A2B_HIGH ,

		},

		/*! Digital Pin drive strength */
		.bHighDriveStrength = ENABLED ,

	},

	.sInterruptSettings =
	{
		/*! Report Header count error  */
		.bReportHDCNTErr		= DISABLED ,

		/*! Report Data decoding error  */
		.bReportDDErr			= DISABLED ,

		/*! Report Data CRC error  */
		.bReportCRCErr			= DISABLED ,

		/*! Report Data Parity error  */
		.bReportDataParityErr	= DISABLED ,

		/*! Report Data Bus Power error  */
		.bReportPwrErr			= ENABLED ,

		/*! Report bit error count overflow error  */
		.bReportErrCntOverFlow	= DISABLED ,

		/*! Report SRF miss error  */
		.bReportSRFMissErr	= DISABLED ,

		/*! Report GPIO  0 Interrupt */
		.bReportGPIO0			= DISABLED ,

		/*! Report GPIO  1 Interrupt */
		.bReportGPIO1			= DISABLED ,

		/*! Report GPIO  2 Interrupt */
		.bReportGPIO2			= DISABLED ,

		/*! Report GPIO  3 Interrupt */
		.bReportGPIO3			= DISABLED ,

		/*! Report GPIO  4 Interrupt */
		.bReportGPIO4			= DISABLED ,

		/*! Report GPIO  5 Interrupt */
		.bReportGPIO5			= DISABLED ,

		/*! Report GPIO  6 Interrupt */
		.bReportGPIO6			= DISABLED ,

	},

	.sRegSettings =
	{
		/*! Switch control register */
		.nSWCTL		= 0x0u ,

		/*! Test mode register */
		.nTESTMODE	= 0x0u ,

		/*! Error control register */
		.nBECCTL	= 0xEFu ,

		/*! Error management register  */
		.nERRMGMT	= 0x0u ,

		/*! I2S test register  */
		.nI2STEST	= 0x0u ,

		/*! Generate error  */
		.nGENERR	= 0x0u ,

		/*! Raise interrupt register */
		.nRAISE		= 0x0u ,

		/*! Bus monitor configuration */
		.nBMMCFG		= 0x0u ,

	},

		 /* Number of peripheral devices connected  */
		.nNumPeriDevice = 4,

		 /*Array of peripheral configuration pointers */ 
		.apPeriConfig = { 	 &sChain0_Slave1_PeriConfig0,  &sChain0_Slave1_PeriConfig1,  &sChain0_Slave1_PeriConfig2,  &sChain0_Slave1_PeriConfig3, NULL_PTR, NULL_PTR, NULL_PTR, NULL_PTR, NULL_PTR, NULL_PTR, NULL_PTR, NULL_PTR, NULL_PTR, NULL_PTR, NULL_PTR, NULL_PTR	}

};

/************************************************* END OF SLAVE NODE 1 DESCRIPTION ********************************************************************************/ 
 
/************************************************** END OF AD2410 DESCRIPTION ********************************************************************************  */

/************************************************** START OF PERIPHERAL DESCRIPTION ********************************************************************************  */

/************************************************** START OF PERIPHERALS CONNECTED TO TARGET PROCESSOR  ********************************************************************************  */

/* Peripheral - 0*/

ADI_A2B_MEM_BCF_DATA
static A2B_PERIPHERAL_DEVICE_CONFIG  Target_PeriConfig0=
{
 /*! I2C interface status  */ 
	 .bI2CInterfaceUse = ENABLED, 

	/*7 bit I2C address */ 
	.nI2Caddr = 0x70, 

	/* Device type -audio source/sink/host  */ 
	.eDeviceType = A2B_AUDIO_HOST, 

	/* Tx0 Pin in use */
	.bUseTx0 = DISABLED, 

	/* Rx0 Pin in use */
	.bUseRx0 = DISABLED, 

	/* Tx1 Pin in use */
	.bUseTx1 = DISABLED, 

	/* Rx1 Pin in use */
	.bUseRx1 = DISABLED, 

	/* No of Tx0 channels  */ 
	.nChTx0 = 8, 

	/* No of Rx0 channels  */ 
	.nChRx0 = 3, 

	/* No of Tx1 channels  */ 
	.nChTx1 = 0, 

	/* No of Rx1 channels  */ 
	.nChRx1 = 0, 

	/* Number of configuration units  */ 
	.nNumPeriConfigUnit = 0, 

	.paPeriConfigUnit = NULL_PTR 
 };

/************************************************** END OF PERIPHERALS CONNECTED TO TARGET PROCESSOR  ********************************************************************************  */

/************************************************** START OF CHAIN 0 SLAVE0 PERIPHERAL DESCRIPTION ********************************************************************************  */

/* Peripheral - 0*/

ADI_A2B_MEM_BCF_DATA
static A2B_PERIPHERAL_DEVICE_CONFIG  sChain0_Slave0_PeriConfig0=
{
	/* I2C interface status  */ 
	 .bI2CInterfaceUse = DISABLED, 

	/*7 bit I2C address */ 
	.nI2Caddr = 0x50, 

	/* Device type -audio source/sink/host  */ 
	.eDeviceType = A2B_AUDIO_SOURCE, 

	/* Tx0 Pin in use */
	.bUseTx0 = ENABLED, 

	/* Rx0 Pin in use */
	.bUseRx0 = DISABLED, 

	/* Tx1 Pin in use */
	.bUseTx1 = DISABLED, 

	/* Rx1 Pin in use */
	.bUseRx1 = DISABLED, 

	/* No of Tx0 channels  */ 
	.nChTx0 = 1, 

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

ADI_A2B_MEM_BCF_DATA
static A2B_PERIPHERAL_DEVICE_CONFIG  sChain0_Slave0_PeriConfig1=
{
	/* I2C interface status  */ 
	 .bI2CInterfaceUse = DISABLED, 

	/*7 bit I2C address */ 
	.nI2Caddr = 0x50, 

	/* Device type -audio source/sink/host  */ 
	.eDeviceType = A2B_AUDIO_SOURCE, 

	/* Tx0 Pin in use */
	.bUseTx0 = ENABLED, 

	/* Rx0 Pin in use */
	.bUseRx0 = DISABLED, 

	/* Tx1 Pin in use */
	.bUseTx1 = DISABLED, 

	/* Rx1 Pin in use */
	.bUseRx1 = DISABLED, 

	/* No of Tx0 channels  */ 
	.nChTx0 = 1, 

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

/* Peripheral - 2*/

ADI_A2B_MEM_BCF_DATA
static A2B_PERIPHERAL_DEVICE_CONFIG  sChain0_Slave0_PeriConfig2=
{
	/* I2C interface status  */ 
	 .bI2CInterfaceUse = DISABLED, 

	/*7 bit I2C address */ 
	.nI2Caddr = 0x50, 

	/* Device type -audio source/sink/host  */ 
	.eDeviceType = A2B_AUDIO_SOURCE, 

	/* Tx0 Pin in use */
	.bUseTx0 = DISABLED, 

	/* Rx0 Pin in use */
	.bUseRx0 = DISABLED, 

	/* Tx1 Pin in use */
	.bUseTx1 = ENABLED, 

	/* Rx1 Pin in use */
	.bUseRx1 = DISABLED, 

	/* No of Tx0 channels  */ 
	.nChTx0 = 0, 

	/* No of Rx0 channels  */ 
	.nChRx0 = 0, 

	/* No of Tx1 channels  */ 
	.nChTx1 = 1, 

	/* No of Rx1 channels  */ 
	.nChRx1 = 0, 

	/* Number of configuration units  */ 
	.nNumPeriConfigUnit = 0, 

	/* Pointer to configuration units  */ 
	.paPeriConfigUnit = NULL_PTR 
 };

/************************************************** END OF CHAIN 0 SLAVE0 PERIPHERAL DESCRIPTION ********************************************************************************  */

/************************************************** START OF CHAIN 0 SLAVE1 PERIPHERAL DESCRIPTION ********************************************************************************  */

/* Peripheral - 0*/

ADI_A2B_MEM_BCF_DATA
static A2B_PERIPHERAL_DEVICE_CONFIG  sChain0_Slave1_PeriConfig0=
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

ADI_A2B_MEM_BCF_DATA
static A2B_PERIPHERAL_DEVICE_CONFIG  sChain0_Slave1_PeriConfig1=
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
	.paPeriConfigUnit =  &gaPeriCfg_1_70_Unit[0] 
 };

/* Peripheral - 2*/

ADI_A2B_MEM_BCF_DATA
static A2B_PERIPHERAL_DEVICE_CONFIG  sChain0_Slave1_PeriConfig2=
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
	.paPeriConfigUnit =  &gaPeriCfg_1_6C_Unit[0] 
 };

/* Peripheral - 3*/

ADI_A2B_MEM_BCF_DATA
static A2B_PERIPHERAL_DEVICE_CONFIG  sChain0_Slave1_PeriConfig3=
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
	.paPeriConfigUnit =  &gaPeriCfg_1_6E_Unit[0] 
 };

/************************************************** END OF CHAIN 0 SLAVE1 PERIPHERAL DESCRIPTION ********************************************************************************  */


 ADI_A2B_MEM_PERI_CONFIG_DATA 
static	uint8 gaPeriCfg_1_70_0_Data[1] =
{
	0x14u	
};

 ADI_A2B_MEM_PERI_CONFIG_DATA 
static	uint8 gaPeriCfg_1_70_1_Data[1] =
{
	0x88u	
};

 ADI_A2B_MEM_PERI_CONFIG_DATA 
static	uint8 gaPeriCfg_1_70_2_Data[4] =
{
	0x64u,	0x1u,	0x0u,	0x0u	
};

 ADI_A2B_MEM_PERI_CONFIG_DATA 
static	uint8 gaPeriCfg_1_70_3_Data[1] =
{
	0x16u	
};

 ADI_A2B_MEM_PERI_CONFIG_DATA 
static	uint8 gaPeriCfg_1_70_4_Data[4] =
{
	0x64u,	0x1u,	0x0u,	0x0u	
};

ADI_A2B_MEM_PERI_CONFIG_UNIT
static	ADI_A2B_PERI_CONFIG_UNIT gaPeriCfg_1_70_Unit[5] =
{
	{A2B_WRITE_OP,	0x1u,	0x1u,	0x1u,	0x1u,	&gaPeriCfg_1_70_0_Data[0]},
	{A2B_WRITE_OP,	0x1u,	0x3u,	0x1u,	0x1u,	&gaPeriCfg_1_70_1_Data[0]},
	{A2B_DEALY_OP,	0x0u,	0x0u,	0x1u,	0x4u,	&gaPeriCfg_1_70_2_Data[0]},
	{A2B_WRITE_OP,	0x1u,	0x1u,	0x1u,	0x1u,	&gaPeriCfg_1_70_3_Data[0]},
	{A2B_DEALY_OP,	0x0u,	0x0u,	0x1u,	0x4u,	&gaPeriCfg_1_70_4_Data[0]}
};

 ADI_A2B_MEM_PERI_CONFIG_DATA 
static	uint8 gaPeriCfg_1_6C_0_Data[1] =
{
	0xFu	
};

 ADI_A2B_MEM_PERI_CONFIG_DATA 
static	uint8 gaPeriCfg_1_6C_1_Data[1] =
{
	0x0u	
};

 ADI_A2B_MEM_PERI_CONFIG_DATA 
static	uint8 gaPeriCfg_1_6C_2_Data[1] =
{
	0x18u	
};

 ADI_A2B_MEM_PERI_CONFIG_DATA 
static	uint8 gaPeriCfg_1_6C_3_Data[1] =
{
	0x49u	
};

 ADI_A2B_MEM_PERI_CONFIG_DATA 
static	uint8 gaPeriCfg_1_6C_4_Data[1] =
{
	0x0u	
};

 ADI_A2B_MEM_PERI_CONFIG_DATA 
static	uint8 gaPeriCfg_1_6C_5_Data[1] =
{
	0x1u	
};

ADI_A2B_MEM_PERI_CONFIG_UNIT
static	ADI_A2B_PERI_CONFIG_UNIT gaPeriCfg_1_6C_Unit[6] =
{
	{A2B_WRITE_OP,	0x1u,	0x0u,	0x1u,	0x1u,	&gaPeriCfg_1_6C_0_Data[0]},
	{A2B_WRITE_OP,	0x1u,	0x1u,	0x1u,	0x1u,	&gaPeriCfg_1_6C_1_Data[0]},
	{A2B_WRITE_OP,	0x1u,	0x2u,	0x1u,	0x1u,	&gaPeriCfg_1_6C_2_Data[0]},
	{A2B_WRITE_OP,	0x1u,	0x3u,	0x1u,	0x1u,	&gaPeriCfg_1_6C_3_Data[0]},
	{A2B_WRITE_OP,	0x1u,	0x4u,	0x1u,	0x1u,	&gaPeriCfg_1_6C_4_Data[0]},
	{A2B_WRITE_OP,	0x1u,	0x5u,	0x1u,	0x1u,	&gaPeriCfg_1_6C_5_Data[0]}
};

 ADI_A2B_MEM_PERI_CONFIG_DATA 
static	uint8 gaPeriCfg_1_6E_0_Data[1] =
{
	0x5Cu	
};

 ADI_A2B_MEM_PERI_CONFIG_DATA 
static	uint8 gaPeriCfg_1_6E_1_Data[1] =
{
	0x7u	
};

 ADI_A2B_MEM_PERI_CONFIG_DATA 
static	uint8 gaPeriCfg_1_6E_2_Data[1] =
{
	0xFu	
};

 ADI_A2B_MEM_PERI_CONFIG_DATA 
static	uint8 gaPeriCfg_1_6E_3_Data[1] =
{
	0x0u	
};

 ADI_A2B_MEM_PERI_CONFIG_DATA 
static	uint8 gaPeriCfg_1_6E_4_Data[1] =
{
	0x0u	
};

 ADI_A2B_MEM_PERI_CONFIG_DATA 
static	uint8 gaPeriCfg_1_6E_5_Data[1] =
{
	0x11u	
};

 ADI_A2B_MEM_PERI_CONFIG_DATA 
static	uint8 gaPeriCfg_1_6E_6_Data[1] =
{
	0x11u	
};

 ADI_A2B_MEM_PERI_CONFIG_DATA 
static	uint8 gaPeriCfg_1_6E_7_Data[1] =
{
	0x11u	
};

 ADI_A2B_MEM_PERI_CONFIG_DATA 
static	uint8 gaPeriCfg_1_6E_8_Data[1] =
{
	0x11u	
};

 ADI_A2B_MEM_PERI_CONFIG_DATA 
static	uint8 gaPeriCfg_1_6E_9_Data[1] =
{
	0x0u	
};

 ADI_A2B_MEM_PERI_CONFIG_DATA 
static	uint8 gaPeriCfg_1_6E_10_Data[1] =
{
	0x0u	
};

 ADI_A2B_MEM_PERI_CONFIG_DATA 
static	uint8 gaPeriCfg_1_6E_11_Data[1] =
{
	0x0u	
};

 ADI_A2B_MEM_PERI_CONFIG_DATA 
static	uint8 gaPeriCfg_1_6E_12_Data[1] =
{
	0x40u	
};

 ADI_A2B_MEM_PERI_CONFIG_DATA 
static	uint8 gaPeriCfg_1_6E_13_Data[1] =
{
	0x0u	
};

 ADI_A2B_MEM_PERI_CONFIG_DATA 
static	uint8 gaPeriCfg_1_6E_14_Data[1] =
{
	0x3u	
};

ADI_A2B_MEM_PERI_CONFIG_UNIT
static	ADI_A2B_PERI_CONFIG_UNIT gaPeriCfg_1_6E_Unit[15] =
{
	{A2B_WRITE_OP,	0x1u,	0x0u,	0x1u,	0x1u,	&gaPeriCfg_1_6E_0_Data[0]},
	{A2B_WRITE_OP,	0x1u,	0x1u,	0x1u,	0x1u,	&gaPeriCfg_1_6E_1_Data[0]},
	{A2B_WRITE_OP,	0x1u,	0x2u,	0x1u,	0x1u,	&gaPeriCfg_1_6E_2_Data[0]},
	{A2B_WRITE_OP,	0x1u,	0x3u,	0x1u,	0x1u,	&gaPeriCfg_1_6E_3_Data[0]},
	{A2B_WRITE_OP,	0x1u,	0x4u,	0x1u,	0x1u,	&gaPeriCfg_1_6E_4_Data[0]},
	{A2B_WRITE_OP,	0x1u,	0x5u,	0x1u,	0x1u,	&gaPeriCfg_1_6E_5_Data[0]},
	{A2B_WRITE_OP,	0x1u,	0x6u,	0x1u,	0x1u,	&gaPeriCfg_1_6E_6_Data[0]},
	{A2B_WRITE_OP,	0x1u,	0x7u,	0x1u,	0x1u,	&gaPeriCfg_1_6E_7_Data[0]},
	{A2B_WRITE_OP,	0x1u,	0x8u,	0x1u,	0x1u,	&gaPeriCfg_1_6E_8_Data[0]},
	{A2B_WRITE_OP,	0x1u,	0x9u,	0x1u,	0x1u,	&gaPeriCfg_1_6E_9_Data[0]},
	{A2B_WRITE_OP,	0x1u,	0xAu,	0x1u,	0x1u,	&gaPeriCfg_1_6E_10_Data[0]},
	{A2B_WRITE_OP,	0x1u,	0xBu,	0x1u,	0x1u,	&gaPeriCfg_1_6E_11_Data[0]},
	{A2B_WRITE_OP,	0x1u,	0xCu,	0x1u,	0x1u,	&gaPeriCfg_1_6E_12_Data[0]},
	{A2B_WRITE_OP,	0x1u,	0xDu,	0x1u,	0x1u,	&gaPeriCfg_1_6E_13_Data[0]},
	{A2B_WRITE_OP,	0x1u,	0xEu,	0x1u,	0x1u,	&gaPeriCfg_1_6E_14_Data[0]}
};
