/*
 * File:           C:\Users\doita\OneDrive\Documents\tesla-model3-premium-amp-re\sigma-studio-files\adau1452-ad2410-tesla-amp-upmix\adau1452-ad2410-tesla-amp-upmix_IC_3.h
 *
 * Created:        Saturday, October 23, 2021 5:49:22 PM
 * Description:    adau1452-ad2410-tesla-amp-upmix:IC 3 program data.
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
#ifndef __ADAU1452_AD2410_TESLA_AMP_UPMIX_IC_3_H__
#define __ADAU1452_AD2410_TESLA_AMP_UPMIX_IC_3_H__

#include "SigmaStudioFW.h"
#include "adau1452-ad2410-tesla-amp-upmix_IC_3_REG.h"

#define DEVICE_ARCHITECTURE_IC_3                  "ADAU176x"
#define DEVICE_ADDR_IC_3                          0x72

/* DSP Program Data */
#define PROGRAM_SIZE_IC_3 235
#define PROGRAM_ADDR_IC_3 2048
ADI_REG_TYPE Program_Data_IC_3[PROGRAM_SIZE_IC_3] = {
0x00, 0x00, 0x00, 0x00, 0x00, 
0xFE, 0xE0, 0x00, 0x00, 0x00, 
0xFF, 0x34, 0x00, 0x00, 0x00, 
0xFF, 0x2C, 0x00, 0x00, 0x00, 
0xFF, 0x54, 0x00, 0x00, 0x00, 
0xFF, 0x5C, 0x00, 0x00, 0x00, 
0xFF, 0xF5, 0x08, 0x20, 0x00, 
0xFF, 0x38, 0x00, 0x00, 0x00, 
0xFF, 0x80, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 
0xFE, 0xE8, 0x0C, 0x00, 0x00, 
0xFE, 0x30, 0x00, 0xE2, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 
0xFF, 0xE8, 0x07, 0x20, 0x08, 
0x00, 0x00, 0x06, 0xA0, 0x00, 
0xFF, 0xE0, 0x00, 0xC0, 0x00, 
0xFF, 0x80, 0x07, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 
0xFF, 0x00, 0x00, 0x00, 0x00, 
0xFE, 0xC0, 0x22, 0x00, 0x27, 
0x00, 0x00, 0x00, 0x00, 0x00, 
0xFE, 0xE8, 0x1E, 0x00, 0x00, 
0xFF, 0xE8, 0x01, 0x20, 0x00, 
0xFF, 0xD8, 0x01, 0x03, 0x00, 
0x00, 0x07, 0xC6, 0x00, 0x00, 
0xFF, 0x08, 0x00, 0x00, 0x00, 
0xFF, 0xF4, 0x00, 0x20, 0x00, 
0xFF, 0xD8, 0x07, 0x02, 0x00, 
0xFD, 0xA5, 0x08, 0x20, 0x00, 
0x00, 0x00, 0x00, 0xE2, 0x00, 
0xFD, 0xAD, 0x08, 0x20, 0x00, 
0x00, 0x08, 0x00, 0xE2, 0x00, 
0x00, 0x05, 0x08, 0x20, 0x00, 
0xFD, 0x60, 0x00, 0xE2, 0x00, 
0x00, 0x0D, 0x08, 0x20, 0x00, 
0xFD, 0x68, 0x00, 0xE2, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 
0xFE, 0x30, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 
0xFE, 0xC0, 0x0F, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 
};

/* DSP Parameter (Coefficient) Data */
#define PARAM_SIZE_IC_3 32
#define PARAM_ADDR_IC_3 0
ADI_REG_TYPE Param_Data_IC_3[PARAM_SIZE_IC_3] = {
0x00, 0x00, 0x10, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 
};


/* Register Default - IC 3.Clock Control Register */
ADI_REG_TYPE R0_CLKCTRLREGISTER_IC_3_Default[REG_CLKCTRLREGISTER_IC_3_BYTE] = {
0x0F
};

/* Register Default - IC 3.PLL Control Register */
ADI_REG_TYPE R1_PLLCRLREGISTER_IC_3_Default[REG_PLLCRLREGISTER_IC_3_BYTE] = {
0x00, 0x01, 0x00, 0x00, 0x20, 0x03
};

/* Register Default - IC 3.Delay */
#define R2_DELAY_IC_3_ADDR 0x0
#define R2_DELAY_IC_3_SIZE 2
ADI_REG_TYPE R2_DELAY_IC_3_Default[R2_DELAY_IC_3_SIZE] = {
0x00, 0x64
};

/* Register Default - IC 3.Serial Port Control Registers */
#define R3_SERIAL_PORT_CONTROL_REGISTERS_IC_3_SIZE 2
ADI_REG_TYPE R3_SERIAL_PORT_CONTROL_REGISTERS_IC_3_Default[R3_SERIAL_PORT_CONTROL_REGISTERS_IC_3_SIZE] = {
0x00, 0x00
};

/* Register Default - IC 3.ALC Control Registers */
#define R4_ALC_CONTROL_REGISTERS_IC_3_SIZE 4
ADI_REG_TYPE R4_ALC_CONTROL_REGISTERS_IC_3_Default[R4_ALC_CONTROL_REGISTERS_IC_3_SIZE] = {
0xF8, 0x3B, 0x68, 0x31
};

/* Register Default - IC 3.Microphone Control Register */
ADI_REG_TYPE R5_MICCTRLREGISTER_IC_3_Default[REG_MICCTRLREGISTER_IC_3_BYTE] = {
0x01
};

/* Register Default - IC 3.Record Input Signal Path Registers */
#define R6_RECORD_INPUT_SIGNAL_PATH_REGISTERS_IC_3_SIZE 8
ADI_REG_TYPE R6_RECORD_INPUT_SIGNAL_PATH_REGISTERS_IC_3_Default[R6_RECORD_INPUT_SIGNAL_PATH_REGISTERS_IC_3_SIZE] = {
0x00, 0x01, 0x05, 0x01, 0x05, 0x6E, 0x6E, 0x00
};

/* Register Default - IC 3.ADC Control Registers */
#define R7_ADC_CONTROL_REGISTERS_IC_3_SIZE 3
ADI_REG_TYPE R7_ADC_CONTROL_REGISTERS_IC_3_Default[R7_ADC_CONTROL_REGISTERS_IC_3_SIZE] = {
0x33, 0x00, 0x00
};

/* Register Default - IC 3.Playback Output Signal Path Registers */
#define R8_PLAYBACK_OUTPUT_SIGNAL_PATH_REGISTERS_IC_3_SIZE 14
ADI_REG_TYPE R8_PLAYBACK_OUTPUT_SIGNAL_PATH_REGISTERS_IC_3_Default[R8_PLAYBACK_OUTPUT_SIGNAL_PATH_REGISTERS_IC_3_SIZE] = {
0x01, 0x00, 0x01, 0x00, 0x03, 0x09, 0x01, 0xE5, 0xE5, 0xE6, 0xE6, 0xE7, 0x00, 0x03
};

/* Register Default - IC 3.Converter Control Registers */
#define R9_CONVERTER_CONTROL_REGISTERS_IC_3_SIZE 2
ADI_REG_TYPE R9_CONVERTER_CONTROL_REGISTERS_IC_3_Default[R9_CONVERTER_CONTROL_REGISTERS_IC_3_SIZE] = {
0x00, 0x00
};

/* Register Default - IC 3.DAC Control Registers */
#define R10_DAC_CONTROL_REGISTERS_IC_3_SIZE 3
ADI_REG_TYPE R10_DAC_CONTROL_REGISTERS_IC_3_Default[R10_DAC_CONTROL_REGISTERS_IC_3_SIZE] = {
0x03, 0x00, 0x00
};

/* Register Default - IC 3.Serial Port Pad Control Registers */
#define R11_SERIAL_PORT_PAD_CONTROL_REGISTERS_IC_3_SIZE 1
ADI_REG_TYPE R11_SERIAL_PORT_PAD_CONTROL_REGISTERS_IC_3_Default[R11_SERIAL_PORT_PAD_CONTROL_REGISTERS_IC_3_SIZE] = {
0xAA
};

/* Register Default - IC 3.Communication Port Pad Control Registers */
#define R12_COMMUNICATION_PORT_PAD_CONTROL_REGISTERS_IC_3_SIZE 2
ADI_REG_TYPE R12_COMMUNICATION_PORT_PAD_CONTROL_REGISTERS_IC_3_Default[R12_COMMUNICATION_PORT_PAD_CONTROL_REGISTERS_IC_3_SIZE] = {
0xAA, 0x01
};

/* Register Default - IC 3.Jack Detect Pad Control Register */
ADI_REG_TYPE R13_JACKREGISTER_IC_3_Default[REG_JACKREGISTER_IC_3_BYTE] = {
0x08
};

/* Register Default - IC 3.DSP ON Register */
ADI_REG_TYPE R14_DSP_ENABLE_REGISTER_IC_3_Default[REG_DSP_ENABLE_REGISTER_IC_3_BYTE] = {
0x01
};

/* Register Default - IC 3.CRC Registers */
#define R15_CRC_REGISTERS_IC_3_SIZE 5
ADI_REG_TYPE R15_CRC_REGISTERS_IC_3_Default[R15_CRC_REGISTERS_IC_3_SIZE] = {
0x6D, 0x08, 0x24, 0x7F, 0x00
};

/* Register Default - IC 3.GPIO Registers */
#define R16_GPIO_REGISTERS_IC_3_SIZE 4
ADI_REG_TYPE R16_GPIO_REGISTERS_IC_3_Default[R16_GPIO_REGISTERS_IC_3_SIZE] = {
0x00, 0x00, 0x00, 0x00
};

/* Register Default - IC 3.Non Modulo Registers */
#define R17_NON_MODULO_REGISTERS_IC_3_SIZE 2
ADI_REG_TYPE R17_NON_MODULO_REGISTERS_IC_3_Default[R17_NON_MODULO_REGISTERS_IC_3_SIZE] = {
0x10, 0x00
};

/* Register Default - IC 3.Watchdog Registers */
#define R18_WATCHDOG_REGISTERS_IC_3_SIZE 5
ADI_REG_TYPE R18_WATCHDOG_REGISTERS_IC_3_Default[R18_WATCHDOG_REGISTERS_IC_3_SIZE] = {
0x00, 0x00, 0x00, 0x00, 0x00
};

/* Register Default - IC 3.Sampling Rate Setting Register */
ADI_REG_TYPE R19_SAMPLE_RATE_SETTING_IC_3_Default[REG_SAMPLE_RATE_SETTING_IC_3_BYTE] = {
0x7F
};

/* Register Default - IC 3.Routing Matrix Inputs Register */
ADI_REG_TYPE R20_ROUTING_MATRIX_INPUTS_IC_3_Default[REG_ROUTING_MATRIX_INPUTS_IC_3_BYTE] = {
0x00
};

/* Register Default - IC 3.Routing Matrix Outputs Register */
ADI_REG_TYPE R21_ROUTING_MATRIX_OUTPUTS_IC_3_Default[REG_ROUTING_MATRIX_OUTPUTS_IC_3_BYTE] = {
0x00
};

/* Register Default - IC 3.Serial Data Configuration Register */
ADI_REG_TYPE R22_SERIAL_DATAGPIO_PIN_CONFIG_IC_3_Default[REG_SERIAL_DATAGPIO_PIN_CONFIG_IC_3_BYTE] = {
0x00
};

/* Register Default - IC 3.DSP Slew Mode Register */
ADI_REG_TYPE R23_DSP_SLEW_MODES_IC_3_Default[REG_DSP_SLEW_MODES_IC_3_BYTE] = {
0x00
};

/* Register Default - IC 3.Serial Port Sample Rate Register */
ADI_REG_TYPE R24_SERIAL_PORT_SAMPLE_RATE_SETTING_IC_3_Default[REG_SERIAL_PORT_SAMPLE_RATE_SETTING_IC_3_BYTE] = {
0x00
};

/* Register Default - IC 3.Clock Enable Registers */
#define R25_CLOCK_ENABLE_REGISTERS_IC_3_SIZE 2
ADI_REG_TYPE R25_CLOCK_ENABLE_REGISTERS_IC_3_Default[R25_CLOCK_ENABLE_REGISTERS_IC_3_SIZE] = {
0x00, 0x00
};

/* Register Default - IC 3.DSP Run Register */
ADI_REG_TYPE R28_DSP_RUN_REGISTER_IC_3_Default[REG_DSP_RUN_REGISTER_IC_3_BYTE] = {
0x01
};

/* Register Default - IC 3.Dejitter Register Control */
ADI_REG_TYPE R29_DEJITTER_REGISTER_CONTROL_IC_3_Default[REG_DEJITTER_REGISTER_CONTROL_IC_3_BYTE] = {
0x00
};

/* Register Default - IC 3.Dejitter Register Control */
ADI_REG_TYPE R30_DEJITTER_REGISTER_CONTROL_IC_3_Default[REG_DEJITTER_REGISTER_CONTROL_IC_3_BYTE] = {
0x03
};


/*
 * Default Download
 */
#define DEFAULT_DOWNLOAD_SIZE_IC_3 31

void default_download_IC_3() {
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_3, REG_CLKCTRLREGISTER_IC_3_ADDR, REG_CLKCTRLREGISTER_IC_3_BYTE, R0_CLKCTRLREGISTER_IC_3_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_3, REG_PLLCRLREGISTER_IC_3_ADDR, REG_PLLCRLREGISTER_IC_3_BYTE, R1_PLLCRLREGISTER_IC_3_Default );
	SIGMA_WRITE_DELAY( DEVICE_ADDR_IC_3, R2_DELAY_IC_3_SIZE, R2_DELAY_IC_3_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_3, REG_SERIAL_PORT_CONTROL_0_IC_3_ADDR , R3_SERIAL_PORT_CONTROL_REGISTERS_IC_3_SIZE, R3_SERIAL_PORT_CONTROL_REGISTERS_IC_3_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_3, REG_ALC_CONTROL_0_IC_3_ADDR , R4_ALC_CONTROL_REGISTERS_IC_3_SIZE, R4_ALC_CONTROL_REGISTERS_IC_3_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_3, REG_MICCTRLREGISTER_IC_3_ADDR, REG_MICCTRLREGISTER_IC_3_BYTE, R5_MICCTRLREGISTER_IC_3_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_3, REG_RECORD_PWR_MANAGEMENT_IC_3_ADDR , R6_RECORD_INPUT_SIGNAL_PATH_REGISTERS_IC_3_SIZE, R6_RECORD_INPUT_SIGNAL_PATH_REGISTERS_IC_3_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_3, REG_ADC_CONTROL_0_IC_3_ADDR , R7_ADC_CONTROL_REGISTERS_IC_3_SIZE, R7_ADC_CONTROL_REGISTERS_IC_3_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_3, REG_PLAYBACK_MIXER_LEFT_CONTROL_0_IC_3_ADDR , R8_PLAYBACK_OUTPUT_SIGNAL_PATH_REGISTERS_IC_3_SIZE, R8_PLAYBACK_OUTPUT_SIGNAL_PATH_REGISTERS_IC_3_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_3, REG_CONVERTER_CTRL_0_IC_3_ADDR , R9_CONVERTER_CONTROL_REGISTERS_IC_3_SIZE, R9_CONVERTER_CONTROL_REGISTERS_IC_3_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_3, REG_DAC_CONTROL_0_IC_3_ADDR , R10_DAC_CONTROL_REGISTERS_IC_3_SIZE, R10_DAC_CONTROL_REGISTERS_IC_3_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_3, REG_SERIAL_PORT_PAD_CONTROL_0_IC_3_ADDR , R11_SERIAL_PORT_PAD_CONTROL_REGISTERS_IC_3_SIZE, R11_SERIAL_PORT_PAD_CONTROL_REGISTERS_IC_3_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_3, REG_COMM_PORT_PAD_CTRL_0_IC_3_ADDR , R12_COMMUNICATION_PORT_PAD_CONTROL_REGISTERS_IC_3_SIZE, R12_COMMUNICATION_PORT_PAD_CONTROL_REGISTERS_IC_3_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_3, REG_JACKREGISTER_IC_3_ADDR, REG_JACKREGISTER_IC_3_BYTE, R13_JACKREGISTER_IC_3_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_3, REG_DSP_ENABLE_REGISTER_IC_3_ADDR, REG_DSP_ENABLE_REGISTER_IC_3_BYTE, R14_DSP_ENABLE_REGISTER_IC_3_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_3, REG_CRC_IDEAL_1_IC_3_ADDR , R15_CRC_REGISTERS_IC_3_SIZE, R15_CRC_REGISTERS_IC_3_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_3, REG_GPIO_0_CONTROL_IC_3_ADDR , R16_GPIO_REGISTERS_IC_3_SIZE, R16_GPIO_REGISTERS_IC_3_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_3, REG_NON_MODULO_RAM_1_IC_3_ADDR , R17_NON_MODULO_REGISTERS_IC_3_SIZE, R17_NON_MODULO_REGISTERS_IC_3_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_3, REG_WATCHDOG_ENABLE_IC_3_ADDR , R18_WATCHDOG_REGISTERS_IC_3_SIZE, R18_WATCHDOG_REGISTERS_IC_3_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_3, REG_SAMPLE_RATE_SETTING_IC_3_ADDR, REG_SAMPLE_RATE_SETTING_IC_3_BYTE, R19_SAMPLE_RATE_SETTING_IC_3_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_3, REG_ROUTING_MATRIX_INPUTS_IC_3_ADDR, REG_ROUTING_MATRIX_INPUTS_IC_3_BYTE, R20_ROUTING_MATRIX_INPUTS_IC_3_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_3, REG_ROUTING_MATRIX_OUTPUTS_IC_3_ADDR, REG_ROUTING_MATRIX_OUTPUTS_IC_3_BYTE, R21_ROUTING_MATRIX_OUTPUTS_IC_3_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_3, REG_SERIAL_DATAGPIO_PIN_CONFIG_IC_3_ADDR, REG_SERIAL_DATAGPIO_PIN_CONFIG_IC_3_BYTE, R22_SERIAL_DATAGPIO_PIN_CONFIG_IC_3_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_3, REG_DSP_SLEW_MODES_IC_3_ADDR, REG_DSP_SLEW_MODES_IC_3_BYTE, R23_DSP_SLEW_MODES_IC_3_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_3, REG_SERIAL_PORT_SAMPLE_RATE_SETTING_IC_3_ADDR, REG_SERIAL_PORT_SAMPLE_RATE_SETTING_IC_3_BYTE, R24_SERIAL_PORT_SAMPLE_RATE_SETTING_IC_3_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_3, REG_CLOCK_ENABLE_REG_0_IC_3_ADDR , R25_CLOCK_ENABLE_REGISTERS_IC_3_SIZE, R25_CLOCK_ENABLE_REGISTERS_IC_3_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_3, PROGRAM_ADDR_IC_3, PROGRAM_SIZE_IC_3, Program_Data_IC_3 );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_3, PARAM_ADDR_IC_3, PARAM_SIZE_IC_3, Param_Data_IC_3 );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_3, REG_DSP_RUN_REGISTER_IC_3_ADDR, REG_DSP_RUN_REGISTER_IC_3_BYTE, R28_DSP_RUN_REGISTER_IC_3_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_3, REG_DEJITTER_REGISTER_CONTROL_IC_3_ADDR, REG_DEJITTER_REGISTER_CONTROL_IC_3_BYTE, R29_DEJITTER_REGISTER_CONTROL_IC_3_Default );
	SIGMA_WRITE_REGISTER_BLOCK( DEVICE_ADDR_IC_3, REG_DEJITTER_REGISTER_CONTROL_IC_3_ADDR, REG_DEJITTER_REGISTER_CONTROL_IC_3_BYTE, R30_DEJITTER_REGISTER_CONTROL_IC_3_Default );
}

#endif
