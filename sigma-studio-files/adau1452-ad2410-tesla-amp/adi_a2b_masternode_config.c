/*******************************************************************************
Copyright (c) 2021 - Analog Devices Inc. All Rights Reserved.
This software is proprietary & confidential to Analog Devices, Inc.
and its licensors.
******************************************************************************
* @file: adi_a2b_masternode_config.c
* @brief: This file contains A2B node information
* @version: $Revision$
* @date: Sunday, August 22, 2021-7:03:08 PM
* NCF Version - 
* A2B DLL version - 19.3.0
* A2B Stack DLL version - 19.3.0.0
* SigmaStudio version - Unknown
* Developed by: Automotive Software and Systems team, Bangalore, India
* THIS IS A SIGMASTUDIO GENERATED FILE AND SHALL NOT BE MODIFIED OUTSIDE OF SIGMASTUDIO
*****************************************************************************/


#include "adi_a2b_datatypes.h"
#include "adi_a2b_busconfig.h"

extern ADI_A2B_MASTER_NCD sMasterNode0;

/************************************************* START OF MASTER NODE 0 DESCRIPTION ********************************************************************************/ 

 /*  MASTER NODE DESCRIPTION   */ 

ADI_A2B_MEM_NCF_DATA
extern ADI_A2B_MASTER_NCD sMasterNode0= 
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
		.nRespCycle			= 0x9Eu ,

		/*! Pass up slots */
		.nPassUpSlots		= 0x0u ,

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
			.bGPIO3PinUsage	= A2B_GPIO_3_DISABLE ,

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

 