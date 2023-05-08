/*******************************************************************************
Copyright (c) 2023 - Analog Devices Inc. All Rights Reserved.
This software is proprietary & confidential to Analog Devices, Inc.
and its licensors.
******************************************************************************
* @file: adi_a2b_streamconfig.c 
* @brief: This file contains A2B stream information 
* @version: $Revision$
* @date: Monday, May 8, 2023-5:42:22 PM
* Stream Configuration Version - 
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
#include "adi_a2b_streamconfig.h"

static ADI_A2B_LOCAL_STREAM_INFO  oTxStreamConfig0;

/************************************************* START OF STREAM CONFIG DESCRIPTION  ********************************************************************************/

/* Node Stream Information */ 

ADI_A2B_MEM_BCF_DATA
ADI_A2B_NODE_STREAM_INFO sNodeStreamInfo = 
{ 
	/* No of Rx Streams */ 
	.nNoOfRxStreams  = 0u, 
 
	/* No of Tx Streams */ 
	.nNoOfTxStreams  = 1u, 
 
	/* Rx Streams Info */ 
 	.apRxstreams  = { NULL_PTR }, 

	/* Tx Streams Info */ 
 	.apTxstreams  = { &oTxStreamConfig0 }, 

}; 

/* Tx Stream Info - 0*/ 

ADI_A2B_MEM_BCF_DATA
static ADI_A2B_LOCAL_STREAM_INFO oTxStreamConfig0 = 
{ 
	/* Stream Info */ 
 	.sStreamInfo = 
	{ 
		/* Stream Id  */ 
		.nStreamId = 0,

		/* Sample Rate in KHz */ 
		.nSampleRate = 48,

		/* Data Width in bits */ 
		.nDataWidth = 32,

		/* No of TDM channels */ 
		.nNoOfChannels = 8,

		/* Stream Type */ 
		.eStreamType = ADI_A2B_AUDIO_STREAM,

	}, 

	/* Stream Starting Channel Index (Starts from 0) */ 
 	.nStartChannelOffset = 0, 

	/* Source Node Id */ 
 	.nSrcNodeId = -1, 

	/* Array of Destination Node Ids */ 
 	.nDstNodeId  = { 0} 

 }; 

 /************************************************* END OF STREAM CONFIG DESCRIPTION  ********************************************************************************/

