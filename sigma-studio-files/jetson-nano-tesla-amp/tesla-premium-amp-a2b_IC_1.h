/*
 * File:           C:\Users\doita\OneDrive\Documents\Analog Devices\SigmaStudio 4.6\Projects\tesla-model3-premium-amp-re\sigma-studio-files\jetson-nano-tesla-amp\tesla-premium-amp-a2b_IC_1.h
 *
 * Created:        Monday, September 6, 2021 5:14:01 PM
 * Description:    tesla-premium-amp-a2b:IC 1 program data.
 *
 * This software is distributed in the hope that it will be useful,
 * but is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
 * CONDITIONS OF ANY KIND, without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * This software may only be used to program products purchased from
 * Analog Devices for incorporation by you into audio products that
 * are intended for resale to audio product end users. This software
 * may not be distributed whole or in any part to third parties.
 *
 * Copyright ©2021 Analog Devices, Inc. All rights reserved.
 */
#ifndef __TESLA_PREMIUM_AMP_A2B_IC_1_H__
#define __TESLA_PREMIUM_AMP_A2B_IC_1_H__

#include "SigmaStudioFW.h"
#include "tesla-premium-amp-a2b_IC_1_REG.h"

#define DEVICE_ARCHITECTURE_IC_1                  "AD24xx"
#define DEVICE_ADDR_IC_1                          0x0

/* DSP Parameter (Coefficient) Data */
#define PARAM_SIZE_IC_1 0
#define PARAM_ADDR_IC_1 0
ADI_REG_TYPE Param_Data_IC_1[PARAM_SIZE_IC_1] = {

};



/*
 * Default Download
 */
#define DEFAULT_DOWNLOAD_SIZE_IC_1 0

void default_download_IC_1() {
}

#endif
