/*
 * File:           C:\Users\doita\OneDrive\Documents\Analog Devices\SigmaStudio 4.6\Projects\adau1452-ad2410-tesla-amp\adau1452-ad2410-tesla-amp_IC_1_PARAM.h
 *
 * Created:        Saturday, August 21, 2021 10:56:28 PM
 * Description:    adau1452-ad2410-tesla-amp:IC 1 parameter RAM definitions.
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
#ifndef __ADAU1452_AD2410_TESLA_AMP_IC_1_PARAM_H__
#define __ADAU1452_AD2410_TESLA_AMP_IC_1_PARAM_H__


/* Module SafeLoadModule - SafeLoadModule*/
#define MOD_SAFELOADMODULE_COUNT                       13
#define MOD_SAFELOADMODULE_DEVICE                      "IC1"
#define MOD_SAFELOADMODULE_DATA_SAFELOAD0_ADDR         24576
#define MOD_SAFELOADMODULE_DATA_SAFELOAD1_ADDR         24577
#define MOD_SAFELOADMODULE_DATA_SAFELOAD2_ADDR         24578
#define MOD_SAFELOADMODULE_DATA_SAFELOAD3_ADDR         24579
#define MOD_SAFELOADMODULE_DATA_SAFELOAD4_ADDR         24580
#define MOD_SAFELOADMODULE_ADDRESS_SAFELOAD_ADDR       24581
#define MOD_SAFELOADMODULE_NUM_SAFELOAD_ADDR           24582

/* Module Sweep1 - Sweep (lookup/sine)*/
#define MOD_SWEEP1_COUNT                               5
#define MOD_SWEEP1_DEVICE                              "IC1"
#define MOD_SWEEP1_ALG0_FREQTABLE0_ADDR                24
#define MOD_SWEEP1_ALG0_FREQTABLE0_VALUE               SIGMASTUDIOTYPE_8_24_CONVERT(0.00625)
#define MOD_SWEEP1_ALG0_FREQTABLE0_TYPE                SIGMASTUDIOTYPE_8_24
#define MOD_SWEEP1_ALG0_FREQTABLE1_ADDR                25
#define MOD_SWEEP1_ALG0_FREQTABLE1_VALUE               SIGMASTUDIOTYPE_8_24_CONVERT(0.416666666666667)
#define MOD_SWEEP1_ALG0_FREQTABLE1_TYPE                SIGMASTUDIOTYPE_8_24
#define MOD_SWEEP1_ALG0_FREQTABLE2_ADDR                26
#define MOD_SWEEP1_ALG0_FREQTABLE2_VALUE               SIGMASTUDIOTYPE_8_24_CONVERT(1)
#define MOD_SWEEP1_ALG0_FREQTABLE2_TYPE                SIGMASTUDIOTYPE_8_24
#define MOD_SWEEP1_ALG0_FREQTABLE3_ADDR                27
#define MOD_SWEEP1_ALG0_FREQTABLE3_VALUE               SIGMASTUDIOTYPE_8_24_CONVERT(0.0078125)
#define MOD_SWEEP1_ALG0_FREQTABLE3_TYPE                SIGMASTUDIOTYPE_8_24
#define MOD_SWEEP1_ALG0_FREQTABLE4_ADDR                28
#define MOD_SWEEP1_ALG0_FREQTABLE4_VALUE               SIGMASTUDIOTYPE_8_24_CONVERT(1.52587890625E-05)
#define MOD_SWEEP1_ALG0_FREQTABLE4_TYPE                SIGMASTUDIOTYPE_8_24

/* Module ADIsurround1 - ADI Surround*/
#define MOD_ADISURROUND1_COUNT                         29
#define MOD_ADISURROUND1_DEVICE                        "IC1"
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001DELAYA_ADDR 38
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001DELAYA_FIXPT 0x000001F8
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001DELAYA_VALUE SIGMASTUDIOTYPE_INTEGER_CONVERT(504)
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001DELAYA_TYPE SIGMASTUDIOTYPE_INTEGER
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001DELAYB_ADDR 39
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001DELAYB_FIXPT 0x000000C0
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001DELAYB_VALUE SIGMASTUDIOTYPE_INTEGER_CONVERT(192)
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001DELAYB_TYPE SIGMASTUDIOTYPE_INTEGER
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001DELAYC_ADDR 40
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001DELAYC_FIXPT 0x000001E0
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001DELAYC_VALUE SIGMASTUDIOTYPE_INTEGER_CONVERT(480)
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001DELAYC_TYPE SIGMASTUDIOTYPE_INTEGER
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001DELAYD_ADDR 41
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001DELAYD_FIXPT 0x00000000
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001DELAYD_VALUE SIGMASTUDIOTYPE_INTEGER_CONVERT(0)
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001DELAYD_TYPE SIGMASTUDIOTYPE_INTEGER
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001DELAYE_ADDR 42
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001DELAYE_FIXPT 0x000001B0
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001DELAYE_VALUE SIGMASTUDIOTYPE_INTEGER_CONVERT(432)
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001DELAYE_TYPE SIGMASTUDIOTYPE_INTEGER
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001DELAYF_ADDR 43
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001DELAYF_FIXPT 0x00000030
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001DELAYF_VALUE SIGMASTUDIOTYPE_INTEGER_CONVERT(48)
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001DELAYF_TYPE SIGMASTUDIOTYPE_INTEGER
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001DELAYA2_ADDR 44
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001DELAYA2_FIXPT 0x000001F8
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001DELAYA2_VALUE SIGMASTUDIOTYPE_INTEGER_CONVERT(504)
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001DELAYA2_TYPE SIGMASTUDIOTYPE_INTEGER
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001DELAYRS_ADDR 45
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001DELAYRS_FIXPT 0x00000210
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001DELAYRS_VALUE SIGMASTUDIOTYPE_INTEGER_CONVERT(528)
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001DELAYRS_TYPE SIGMASTUDIOTYPE_INTEGER
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001DIL_ADDR 46
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001DIL_FIXPT 0x000000F0
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001DIL_VALUE SIGMASTUDIOTYPE_INTEGER_CONVERT(240)
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001DIL_TYPE SIGMASTUDIOTYPE_INTEGER
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001F3A1_ADDR 47
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001F3A1_VALUE SIGMASTUDIOTYPE_8_24_CONVERT(0.974156870921681)
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001F3A1_TYPE SIGMASTUDIOTYPE_8_24
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001F3B1_ADDR 48
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001F3B1_VALUE SIGMASTUDIOTYPE_8_24_CONVERT(-0.987078435460841)
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001F3B1_TYPE SIGMASTUDIOTYPE_8_24
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001F3B0_ADDR 49
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001F3B0_VALUE SIGMASTUDIOTYPE_8_24_CONVERT(0.987078435460841)
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001F3B0_TYPE SIGMASTUDIOTYPE_8_24
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001F2A2_ADDR 51
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001F2A2_VALUE SIGMASTUDIOTYPE_8_24_CONVERT(-0.963652984223705)
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001F2A2_TYPE SIGMASTUDIOTYPE_8_24
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001F2A1_ADDR 52
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001F2A1_VALUE SIGMASTUDIOTYPE_8_24_CONVERT(1.96298008938934)
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001F2A1_TYPE SIGMASTUDIOTYPE_8_24
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001F2B2_ADDR 53
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001F2B2_VALUE SIGMASTUDIOTYPE_8_24_CONVERT(0.981658268403261)
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001F2B2_TYPE SIGMASTUDIOTYPE_8_24
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001F2B1_ADDR 54
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001F2B1_VALUE SIGMASTUDIOTYPE_8_24_CONVERT(-1.96331653680652)
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001F2B1_TYPE SIGMASTUDIOTYPE_8_24
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001F2B0_ADDR 55
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001F2B0_VALUE SIGMASTUDIOTYPE_8_24_CONVERT(0.981658268403261)
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001F2B0_TYPE SIGMASTUDIOTYPE_8_24
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001F4B1_ADDR 56
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001F4B1_VALUE SIGMASTUDIOTYPE_8_24_CONVERT(-0.97448228335744)
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001F4B1_TYPE SIGMASTUDIOTYPE_8_24
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001F4B0_ADDR 57
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001F4B0_VALUE SIGMASTUDIOTYPE_8_24_CONVERT(0.97448228335744)
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001F4B0_TYPE SIGMASTUDIOTYPE_8_24
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001F4A1_ADDR 58
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001F4A1_VALUE SIGMASTUDIOTYPE_8_24_CONVERT(0.94896456671488)
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001F4A1_TYPE SIGMASTUDIOTYPE_8_24
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001GAIN1_ADDR 61
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001GAIN1_VALUE SIGMASTUDIOTYPE_8_24_CONVERT(1)
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001GAIN1_TYPE SIGMASTUDIOTYPE_8_24
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001GAIN2_ADDR 62
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001GAIN2_VALUE SIGMASTUDIOTYPE_8_24_CONVERT(0)
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001GAIN2_TYPE SIGMASTUDIOTYPE_8_24
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001GAIN3_ADDR 63
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001GAIN3_VALUE SIGMASTUDIOTYPE_8_24_CONVERT(0.158489319246)
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001GAIN3_TYPE SIGMASTUDIOTYPE_8_24
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001GAIN4_ADDR 64
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001GAIN4_VALUE SIGMASTUDIOTYPE_8_24_CONVERT(0.316277660168)
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001GAIN4_TYPE SIGMASTUDIOTYPE_8_24
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001ONEBYROOT2_ADDR 66
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001ONEBYROOT2_VALUE SIGMASTUDIOTYPE_8_24_CONVERT(0.707945823669434)
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001ONEBYROOT2_TYPE SIGMASTUDIOTYPE_8_24
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001DECVAL_ADDR 67
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001DECVAL_VALUE SIGMASTUDIOTYPE_8_24_CONVERT(5.8995482032011E-05)
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001DECVAL_TYPE SIGMASTUDIOTYPE_8_24
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001ROOT_ADDR 68
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001ROOT_VALUE SIGMASTUDIOTYPE_8_24_CONVERT(2.82842707633972)
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001ROOT_TYPE SIGMASTUDIOTYPE_8_24
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001CNTR1_ADDR 70
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001CNTR1_VALUE SIGMASTUDIOTYPE_8_24_CONVERT(0.00171661376953123)
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001CNTR1_TYPE SIGMASTUDIOTYPE_8_24
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001CNTR2_ADDR 72
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001CNTR2_FIXPT 0x00000006
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001CNTR2_VALUE SIGMASTUDIOTYPE_INTEGER_CONVERT(6)
#define MOD_ADISURROUND1_ALG0_ADISURROUNDALGS3001CNTR2_TYPE SIGMASTUDIOTYPE_INTEGER

/* Module Crossover1 - Crossover*/
#define MOD_CROSSOVER1_COUNT                           84
#define MOD_CROSSOVER1_DEVICE                          "IC1"
#define MOD_CROSSOVER1_ALG1_LOW_FILT1_PARAMB2_ADDR     73
#define MOD_CROSSOVER1_ALG1_LOW_FILT1_PARAMB2_VALUE    SIGMASTUDIOTYPE_8_24_CONVERT(0.00026165269506589)
#define MOD_CROSSOVER1_ALG1_LOW_FILT1_PARAMB2_TYPE     SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG1_LOW_FILT1_PARAMB2_ADDR     73
#define MOD_CROSSOVER1_ALG1_LOW_FILT1_PARAMB2_VALUE    SIGMASTUDIOTYPE_8_24_CONVERT(0.00026165269506589)
#define MOD_CROSSOVER1_ALG1_LOW_FILT1_PARAMB2_TYPE     SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG1_LOW_FILT1_PARAMB1_ADDR     74
#define MOD_CROSSOVER1_ALG1_LOW_FILT1_PARAMB1_VALUE    SIGMASTUDIOTYPE_8_24_CONVERT(0.00052330539013178)
#define MOD_CROSSOVER1_ALG1_LOW_FILT1_PARAMB1_TYPE     SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG1_LOW_FILT1_PARAMB1_ADDR     74
#define MOD_CROSSOVER1_ALG1_LOW_FILT1_PARAMB1_VALUE    SIGMASTUDIOTYPE_8_24_CONVERT(0.00052330539013178)
#define MOD_CROSSOVER1_ALG1_LOW_FILT1_PARAMB1_TYPE     SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG1_LOW_FILT1_PARAMB0_ADDR     75
#define MOD_CROSSOVER1_ALG1_LOW_FILT1_PARAMB0_VALUE    SIGMASTUDIOTYPE_8_24_CONVERT(0.00026165269506589)
#define MOD_CROSSOVER1_ALG1_LOW_FILT1_PARAMB0_TYPE     SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG1_LOW_FILT1_PARAMB0_ADDR     75
#define MOD_CROSSOVER1_ALG1_LOW_FILT1_PARAMB0_VALUE    SIGMASTUDIOTYPE_8_24_CONVERT(0.00026165269506589)
#define MOD_CROSSOVER1_ALG1_LOW_FILT1_PARAMB0_TYPE     SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG1_LOW_FILT1_PARAMA2_ADDR     76
#define MOD_CROSSOVER1_ALG1_LOW_FILT1_PARAMA2_VALUE    SIGMASTUDIOTYPE_8_24_CONVERT(-0.95477455992104)
#define MOD_CROSSOVER1_ALG1_LOW_FILT1_PARAMA2_TYPE     SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG1_LOW_FILT1_PARAMA2_ADDR     76
#define MOD_CROSSOVER1_ALG1_LOW_FILT1_PARAMA2_VALUE    SIGMASTUDIOTYPE_8_24_CONVERT(-0.95477455992104)
#define MOD_CROSSOVER1_ALG1_LOW_FILT1_PARAMA2_TYPE     SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG1_LOW_FILT1_PARAMA1_ADDR     77
#define MOD_CROSSOVER1_ALG1_LOW_FILT1_PARAMA1_VALUE    SIGMASTUDIOTYPE_8_24_CONVERT(1.95372794914078)
#define MOD_CROSSOVER1_ALG1_LOW_FILT1_PARAMA1_TYPE     SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG1_LOW_FILT1_PARAMA1_ADDR     77
#define MOD_CROSSOVER1_ALG1_LOW_FILT1_PARAMA1_VALUE    SIGMASTUDIOTYPE_8_24_CONVERT(1.95372794914078)
#define MOD_CROSSOVER1_ALG1_LOW_FILT1_PARAMA1_TYPE     SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG1_LOW_FILT2_PARAMB2_ADDR     78
#define MOD_CROSSOVER1_ALG1_LOW_FILT2_PARAMB2_VALUE    SIGMASTUDIOTYPE_8_24_CONVERT(0.00026165269506589)
#define MOD_CROSSOVER1_ALG1_LOW_FILT2_PARAMB2_TYPE     SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG1_LOW_FILT2_PARAMB2_ADDR     78
#define MOD_CROSSOVER1_ALG1_LOW_FILT2_PARAMB2_VALUE    SIGMASTUDIOTYPE_8_24_CONVERT(0.00026165269506589)
#define MOD_CROSSOVER1_ALG1_LOW_FILT2_PARAMB2_TYPE     SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG1_LOW_FILT2_PARAMB1_ADDR     79
#define MOD_CROSSOVER1_ALG1_LOW_FILT2_PARAMB1_VALUE    SIGMASTUDIOTYPE_8_24_CONVERT(0.00052330539013178)
#define MOD_CROSSOVER1_ALG1_LOW_FILT2_PARAMB1_TYPE     SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG1_LOW_FILT2_PARAMB1_ADDR     79
#define MOD_CROSSOVER1_ALG1_LOW_FILT2_PARAMB1_VALUE    SIGMASTUDIOTYPE_8_24_CONVERT(0.00052330539013178)
#define MOD_CROSSOVER1_ALG1_LOW_FILT2_PARAMB1_TYPE     SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG1_LOW_FILT2_PARAMB0_ADDR     80
#define MOD_CROSSOVER1_ALG1_LOW_FILT2_PARAMB0_VALUE    SIGMASTUDIOTYPE_8_24_CONVERT(0.00026165269506589)
#define MOD_CROSSOVER1_ALG1_LOW_FILT2_PARAMB0_TYPE     SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG1_LOW_FILT2_PARAMB0_ADDR     80
#define MOD_CROSSOVER1_ALG1_LOW_FILT2_PARAMB0_VALUE    SIGMASTUDIOTYPE_8_24_CONVERT(0.00026165269506589)
#define MOD_CROSSOVER1_ALG1_LOW_FILT2_PARAMB0_TYPE     SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG1_LOW_FILT2_PARAMA2_ADDR     81
#define MOD_CROSSOVER1_ALG1_LOW_FILT2_PARAMA2_VALUE    SIGMASTUDIOTYPE_8_24_CONVERT(-0.95477455992104)
#define MOD_CROSSOVER1_ALG1_LOW_FILT2_PARAMA2_TYPE     SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG1_LOW_FILT2_PARAMA2_ADDR     81
#define MOD_CROSSOVER1_ALG1_LOW_FILT2_PARAMA2_VALUE    SIGMASTUDIOTYPE_8_24_CONVERT(-0.95477455992104)
#define MOD_CROSSOVER1_ALG1_LOW_FILT2_PARAMA2_TYPE     SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG1_LOW_FILT2_PARAMA1_ADDR     82
#define MOD_CROSSOVER1_ALG1_LOW_FILT2_PARAMA1_VALUE    SIGMASTUDIOTYPE_8_24_CONVERT(1.95372794914078)
#define MOD_CROSSOVER1_ALG1_LOW_FILT2_PARAMA1_TYPE     SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG1_LOW_FILT2_PARAMA1_ADDR     82
#define MOD_CROSSOVER1_ALG1_LOW_FILT2_PARAMA1_VALUE    SIGMASTUDIOTYPE_8_24_CONVERT(1.95372794914078)
#define MOD_CROSSOVER1_ALG1_LOW_FILT2_PARAMA1_TYPE     SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG0_LOW_FILT1_PARAMB2_ADDR     83
#define MOD_CROSSOVER1_ALG0_LOW_FILT1_PARAMB2_VALUE    SIGMASTUDIOTYPE_8_24_CONVERT(0.00026165269506589)
#define MOD_CROSSOVER1_ALG0_LOW_FILT1_PARAMB2_TYPE     SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG0_LOW_FILT1_PARAMB2_ADDR     83
#define MOD_CROSSOVER1_ALG0_LOW_FILT1_PARAMB2_VALUE    SIGMASTUDIOTYPE_8_24_CONVERT(0.00026165269506589)
#define MOD_CROSSOVER1_ALG0_LOW_FILT1_PARAMB2_TYPE     SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG0_LOW_FILT1_PARAMB1_ADDR     84
#define MOD_CROSSOVER1_ALG0_LOW_FILT1_PARAMB1_VALUE    SIGMASTUDIOTYPE_8_24_CONVERT(0.00052330539013178)
#define MOD_CROSSOVER1_ALG0_LOW_FILT1_PARAMB1_TYPE     SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG0_LOW_FILT1_PARAMB1_ADDR     84
#define MOD_CROSSOVER1_ALG0_LOW_FILT1_PARAMB1_VALUE    SIGMASTUDIOTYPE_8_24_CONVERT(0.00052330539013178)
#define MOD_CROSSOVER1_ALG0_LOW_FILT1_PARAMB1_TYPE     SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG0_LOW_FILT1_PARAMB0_ADDR     85
#define MOD_CROSSOVER1_ALG0_LOW_FILT1_PARAMB0_VALUE    SIGMASTUDIOTYPE_8_24_CONVERT(0.00026165269506589)
#define MOD_CROSSOVER1_ALG0_LOW_FILT1_PARAMB0_TYPE     SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG0_LOW_FILT1_PARAMB0_ADDR     85
#define MOD_CROSSOVER1_ALG0_LOW_FILT1_PARAMB0_VALUE    SIGMASTUDIOTYPE_8_24_CONVERT(0.00026165269506589)
#define MOD_CROSSOVER1_ALG0_LOW_FILT1_PARAMB0_TYPE     SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG0_LOW_FILT1_PARAMA2_ADDR     86
#define MOD_CROSSOVER1_ALG0_LOW_FILT1_PARAMA2_VALUE    SIGMASTUDIOTYPE_8_24_CONVERT(-0.95477455992104)
#define MOD_CROSSOVER1_ALG0_LOW_FILT1_PARAMA2_TYPE     SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG0_LOW_FILT1_PARAMA2_ADDR     86
#define MOD_CROSSOVER1_ALG0_LOW_FILT1_PARAMA2_VALUE    SIGMASTUDIOTYPE_8_24_CONVERT(-0.95477455992104)
#define MOD_CROSSOVER1_ALG0_LOW_FILT1_PARAMA2_TYPE     SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG0_LOW_FILT1_PARAMA1_ADDR     87
#define MOD_CROSSOVER1_ALG0_LOW_FILT1_PARAMA1_VALUE    SIGMASTUDIOTYPE_8_24_CONVERT(1.95372794914078)
#define MOD_CROSSOVER1_ALG0_LOW_FILT1_PARAMA1_TYPE     SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG0_LOW_FILT1_PARAMA1_ADDR     87
#define MOD_CROSSOVER1_ALG0_LOW_FILT1_PARAMA1_VALUE    SIGMASTUDIOTYPE_8_24_CONVERT(1.95372794914078)
#define MOD_CROSSOVER1_ALG0_LOW_FILT1_PARAMA1_TYPE     SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG0_LOW_FILT2_PARAMB2_ADDR     88
#define MOD_CROSSOVER1_ALG0_LOW_FILT2_PARAMB2_VALUE    SIGMASTUDIOTYPE_8_24_CONVERT(0.00026165269506589)
#define MOD_CROSSOVER1_ALG0_LOW_FILT2_PARAMB2_TYPE     SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG0_LOW_FILT2_PARAMB2_ADDR     88
#define MOD_CROSSOVER1_ALG0_LOW_FILT2_PARAMB2_VALUE    SIGMASTUDIOTYPE_8_24_CONVERT(0.00026165269506589)
#define MOD_CROSSOVER1_ALG0_LOW_FILT2_PARAMB2_TYPE     SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG0_LOW_FILT2_PARAMB1_ADDR     89
#define MOD_CROSSOVER1_ALG0_LOW_FILT2_PARAMB1_VALUE    SIGMASTUDIOTYPE_8_24_CONVERT(0.00052330539013178)
#define MOD_CROSSOVER1_ALG0_LOW_FILT2_PARAMB1_TYPE     SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG0_LOW_FILT2_PARAMB1_ADDR     89
#define MOD_CROSSOVER1_ALG0_LOW_FILT2_PARAMB1_VALUE    SIGMASTUDIOTYPE_8_24_CONVERT(0.00052330539013178)
#define MOD_CROSSOVER1_ALG0_LOW_FILT2_PARAMB1_TYPE     SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG0_LOW_FILT2_PARAMB0_ADDR     90
#define MOD_CROSSOVER1_ALG0_LOW_FILT2_PARAMB0_VALUE    SIGMASTUDIOTYPE_8_24_CONVERT(0.00026165269506589)
#define MOD_CROSSOVER1_ALG0_LOW_FILT2_PARAMB0_TYPE     SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG0_LOW_FILT2_PARAMB0_ADDR     90
#define MOD_CROSSOVER1_ALG0_LOW_FILT2_PARAMB0_VALUE    SIGMASTUDIOTYPE_8_24_CONVERT(0.00026165269506589)
#define MOD_CROSSOVER1_ALG0_LOW_FILT2_PARAMB0_TYPE     SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG0_LOW_FILT2_PARAMA2_ADDR     91
#define MOD_CROSSOVER1_ALG0_LOW_FILT2_PARAMA2_VALUE    SIGMASTUDIOTYPE_8_24_CONVERT(-0.95477455992104)
#define MOD_CROSSOVER1_ALG0_LOW_FILT2_PARAMA2_TYPE     SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG0_LOW_FILT2_PARAMA2_ADDR     91
#define MOD_CROSSOVER1_ALG0_LOW_FILT2_PARAMA2_VALUE    SIGMASTUDIOTYPE_8_24_CONVERT(-0.95477455992104)
#define MOD_CROSSOVER1_ALG0_LOW_FILT2_PARAMA2_TYPE     SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG0_LOW_FILT2_PARAMA1_ADDR     92
#define MOD_CROSSOVER1_ALG0_LOW_FILT2_PARAMA1_VALUE    SIGMASTUDIOTYPE_8_24_CONVERT(1.95372794914078)
#define MOD_CROSSOVER1_ALG0_LOW_FILT2_PARAMA1_TYPE     SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG0_LOW_FILT2_PARAMA1_ADDR     92
#define MOD_CROSSOVER1_ALG0_LOW_FILT2_PARAMA1_VALUE    SIGMASTUDIOTYPE_8_24_CONVERT(1.95372794914078)
#define MOD_CROSSOVER1_ALG0_LOW_FILT2_PARAMA1_TYPE     SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG1_CROSSOVERFILTER2WAYSPS300SS4P6ALG2LOWINVERT_ADDR 115
#define MOD_CROSSOVER1_ALG1_CROSSOVERFILTER2WAYSPS300SS4P6ALG2LOWINVERT_VALUE SIGMASTUDIOTYPE_8_24_CONVERT(1)
#define MOD_CROSSOVER1_ALG1_CROSSOVERFILTER2WAYSPS300SS4P6ALG2LOWINVERT_TYPE SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG1_CROSSOVERFILTER2WAYSPS300SS4P6ALG2LOWINVERT_ADDR 115
#define MOD_CROSSOVER1_ALG1_CROSSOVERFILTER2WAYSPS300SS4P6ALG2LOWINVERT_VALUE SIGMASTUDIOTYPE_8_24_CONVERT(1)
#define MOD_CROSSOVER1_ALG1_CROSSOVERFILTER2WAYSPS300SS4P6ALG2LOWINVERT_TYPE SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG0_CROSSOVERFILTER2WAYSPS300SS4P6ALG1LOWINVERT_ADDR 116
#define MOD_CROSSOVER1_ALG0_CROSSOVERFILTER2WAYSPS300SS4P6ALG1LOWINVERT_VALUE SIGMASTUDIOTYPE_8_24_CONVERT(1)
#define MOD_CROSSOVER1_ALG0_CROSSOVERFILTER2WAYSPS300SS4P6ALG1LOWINVERT_TYPE SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG0_CROSSOVERFILTER2WAYSPS300SS4P6ALG1LOWINVERT_ADDR 116
#define MOD_CROSSOVER1_ALG0_CROSSOVERFILTER2WAYSPS300SS4P6ALG1LOWINVERT_VALUE SIGMASTUDIOTYPE_8_24_CONVERT(1)
#define MOD_CROSSOVER1_ALG0_CROSSOVERFILTER2WAYSPS300SS4P6ALG1LOWINVERT_TYPE SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG1_HIGH_FILT1_PARAMB2_ADDR    24583
#define MOD_CROSSOVER1_ALG1_HIGH_FILT1_PARAMB2_VALUE   SIGMASTUDIOTYPE_8_24_CONVERT(0.757076375333885)
#define MOD_CROSSOVER1_ALG1_HIGH_FILT1_PARAMB2_TYPE    SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG1_HIGH_FILT1_PARAMB2_ADDR    24583
#define MOD_CROSSOVER1_ALG1_HIGH_FILT1_PARAMB2_VALUE   SIGMASTUDIOTYPE_8_24_CONVERT(0.757076375333885)
#define MOD_CROSSOVER1_ALG1_HIGH_FILT1_PARAMB2_TYPE    SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG1_HIGH_FILT1_PARAMB1_ADDR    24584
#define MOD_CROSSOVER1_ALG1_HIGH_FILT1_PARAMB1_VALUE   SIGMASTUDIOTYPE_8_24_CONVERT(-1.51415275066777)
#define MOD_CROSSOVER1_ALG1_HIGH_FILT1_PARAMB1_TYPE    SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG1_HIGH_FILT1_PARAMB1_ADDR    24584
#define MOD_CROSSOVER1_ALG1_HIGH_FILT1_PARAMB1_VALUE   SIGMASTUDIOTYPE_8_24_CONVERT(-1.51415275066777)
#define MOD_CROSSOVER1_ALG1_HIGH_FILT1_PARAMB1_TYPE    SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG1_HIGH_FILT1_PARAMB0_ADDR    24585
#define MOD_CROSSOVER1_ALG1_HIGH_FILT1_PARAMB0_VALUE   SIGMASTUDIOTYPE_8_24_CONVERT(0.757076375333885)
#define MOD_CROSSOVER1_ALG1_HIGH_FILT1_PARAMB0_TYPE    SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG1_HIGH_FILT1_PARAMB0_ADDR    24585
#define MOD_CROSSOVER1_ALG1_HIGH_FILT1_PARAMB0_VALUE   SIGMASTUDIOTYPE_8_24_CONVERT(0.757076375333885)
#define MOD_CROSSOVER1_ALG1_HIGH_FILT1_PARAMB0_TYPE    SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG1_HIGH_FILT1_PARAMA2_ADDR    24586
#define MOD_CROSSOVER1_ALG1_HIGH_FILT1_PARAMA2_VALUE   SIGMASTUDIOTYPE_8_24_CONVERT(-0.574061915083955)
#define MOD_CROSSOVER1_ALG1_HIGH_FILT1_PARAMA2_TYPE    SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG1_HIGH_FILT1_PARAMA2_ADDR    24586
#define MOD_CROSSOVER1_ALG1_HIGH_FILT1_PARAMA2_VALUE   SIGMASTUDIOTYPE_8_24_CONVERT(-0.574061915083955)
#define MOD_CROSSOVER1_ALG1_HIGH_FILT1_PARAMA2_TYPE    SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG1_HIGH_FILT1_PARAMA1_ADDR    24587
#define MOD_CROSSOVER1_ALG1_HIGH_FILT1_PARAMA1_VALUE   SIGMASTUDIOTYPE_8_24_CONVERT(1.45424358625158)
#define MOD_CROSSOVER1_ALG1_HIGH_FILT1_PARAMA1_TYPE    SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG1_HIGH_FILT1_PARAMA1_ADDR    24587
#define MOD_CROSSOVER1_ALG1_HIGH_FILT1_PARAMA1_VALUE   SIGMASTUDIOTYPE_8_24_CONVERT(1.45424358625158)
#define MOD_CROSSOVER1_ALG1_HIGH_FILT1_PARAMA1_TYPE    SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG1_HIGH_FILT2_PARAMB2_ADDR    24588
#define MOD_CROSSOVER1_ALG1_HIGH_FILT2_PARAMB2_VALUE   SIGMASTUDIOTYPE_8_24_CONVERT(0.757076375333885)
#define MOD_CROSSOVER1_ALG1_HIGH_FILT2_PARAMB2_TYPE    SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG1_HIGH_FILT2_PARAMB2_ADDR    24588
#define MOD_CROSSOVER1_ALG1_HIGH_FILT2_PARAMB2_VALUE   SIGMASTUDIOTYPE_8_24_CONVERT(0.757076375333885)
#define MOD_CROSSOVER1_ALG1_HIGH_FILT2_PARAMB2_TYPE    SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG1_HIGH_FILT2_PARAMB1_ADDR    24589
#define MOD_CROSSOVER1_ALG1_HIGH_FILT2_PARAMB1_VALUE   SIGMASTUDIOTYPE_8_24_CONVERT(-1.51415275066777)
#define MOD_CROSSOVER1_ALG1_HIGH_FILT2_PARAMB1_TYPE    SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG1_HIGH_FILT2_PARAMB1_ADDR    24589
#define MOD_CROSSOVER1_ALG1_HIGH_FILT2_PARAMB1_VALUE   SIGMASTUDIOTYPE_8_24_CONVERT(-1.51415275066777)
#define MOD_CROSSOVER1_ALG1_HIGH_FILT2_PARAMB1_TYPE    SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG1_HIGH_FILT2_PARAMB0_ADDR    24590
#define MOD_CROSSOVER1_ALG1_HIGH_FILT2_PARAMB0_VALUE   SIGMASTUDIOTYPE_8_24_CONVERT(0.757076375333885)
#define MOD_CROSSOVER1_ALG1_HIGH_FILT2_PARAMB0_TYPE    SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG1_HIGH_FILT2_PARAMB0_ADDR    24590
#define MOD_CROSSOVER1_ALG1_HIGH_FILT2_PARAMB0_VALUE   SIGMASTUDIOTYPE_8_24_CONVERT(0.757076375333885)
#define MOD_CROSSOVER1_ALG1_HIGH_FILT2_PARAMB0_TYPE    SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG1_HIGH_FILT2_PARAMA2_ADDR    24591
#define MOD_CROSSOVER1_ALG1_HIGH_FILT2_PARAMA2_VALUE   SIGMASTUDIOTYPE_8_24_CONVERT(-0.574061915083955)
#define MOD_CROSSOVER1_ALG1_HIGH_FILT2_PARAMA2_TYPE    SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG1_HIGH_FILT2_PARAMA2_ADDR    24591
#define MOD_CROSSOVER1_ALG1_HIGH_FILT2_PARAMA2_VALUE   SIGMASTUDIOTYPE_8_24_CONVERT(-0.574061915083955)
#define MOD_CROSSOVER1_ALG1_HIGH_FILT2_PARAMA2_TYPE    SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG1_HIGH_FILT2_PARAMA1_ADDR    24592
#define MOD_CROSSOVER1_ALG1_HIGH_FILT2_PARAMA1_VALUE   SIGMASTUDIOTYPE_8_24_CONVERT(1.45424358625158)
#define MOD_CROSSOVER1_ALG1_HIGH_FILT2_PARAMA1_TYPE    SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG1_HIGH_FILT2_PARAMA1_ADDR    24592
#define MOD_CROSSOVER1_ALG1_HIGH_FILT2_PARAMA1_VALUE   SIGMASTUDIOTYPE_8_24_CONVERT(1.45424358625158)
#define MOD_CROSSOVER1_ALG1_HIGH_FILT2_PARAMA1_TYPE    SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG0_HIGH_FILT1_PARAMB2_ADDR    24593
#define MOD_CROSSOVER1_ALG0_HIGH_FILT1_PARAMB2_VALUE   SIGMASTUDIOTYPE_8_24_CONVERT(0.757076375333885)
#define MOD_CROSSOVER1_ALG0_HIGH_FILT1_PARAMB2_TYPE    SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG0_HIGH_FILT1_PARAMB2_ADDR    24593
#define MOD_CROSSOVER1_ALG0_HIGH_FILT1_PARAMB2_VALUE   SIGMASTUDIOTYPE_8_24_CONVERT(0.757076375333885)
#define MOD_CROSSOVER1_ALG0_HIGH_FILT1_PARAMB2_TYPE    SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG0_HIGH_FILT1_PARAMB1_ADDR    24594
#define MOD_CROSSOVER1_ALG0_HIGH_FILT1_PARAMB1_VALUE   SIGMASTUDIOTYPE_8_24_CONVERT(-1.51415275066777)
#define MOD_CROSSOVER1_ALG0_HIGH_FILT1_PARAMB1_TYPE    SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG0_HIGH_FILT1_PARAMB1_ADDR    24594
#define MOD_CROSSOVER1_ALG0_HIGH_FILT1_PARAMB1_VALUE   SIGMASTUDIOTYPE_8_24_CONVERT(-1.51415275066777)
#define MOD_CROSSOVER1_ALG0_HIGH_FILT1_PARAMB1_TYPE    SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG0_HIGH_FILT1_PARAMB0_ADDR    24595
#define MOD_CROSSOVER1_ALG0_HIGH_FILT1_PARAMB0_VALUE   SIGMASTUDIOTYPE_8_24_CONVERT(0.757076375333885)
#define MOD_CROSSOVER1_ALG0_HIGH_FILT1_PARAMB0_TYPE    SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG0_HIGH_FILT1_PARAMB0_ADDR    24595
#define MOD_CROSSOVER1_ALG0_HIGH_FILT1_PARAMB0_VALUE   SIGMASTUDIOTYPE_8_24_CONVERT(0.757076375333885)
#define MOD_CROSSOVER1_ALG0_HIGH_FILT1_PARAMB0_TYPE    SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG0_HIGH_FILT1_PARAMA2_ADDR    24596
#define MOD_CROSSOVER1_ALG0_HIGH_FILT1_PARAMA2_VALUE   SIGMASTUDIOTYPE_8_24_CONVERT(-0.574061915083955)
#define MOD_CROSSOVER1_ALG0_HIGH_FILT1_PARAMA2_TYPE    SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG0_HIGH_FILT1_PARAMA2_ADDR    24596
#define MOD_CROSSOVER1_ALG0_HIGH_FILT1_PARAMA2_VALUE   SIGMASTUDIOTYPE_8_24_CONVERT(-0.574061915083955)
#define MOD_CROSSOVER1_ALG0_HIGH_FILT1_PARAMA2_TYPE    SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG0_HIGH_FILT1_PARAMA1_ADDR    24597
#define MOD_CROSSOVER1_ALG0_HIGH_FILT1_PARAMA1_VALUE   SIGMASTUDIOTYPE_8_24_CONVERT(1.45424358625158)
#define MOD_CROSSOVER1_ALG0_HIGH_FILT1_PARAMA1_TYPE    SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG0_HIGH_FILT1_PARAMA1_ADDR    24597
#define MOD_CROSSOVER1_ALG0_HIGH_FILT1_PARAMA1_VALUE   SIGMASTUDIOTYPE_8_24_CONVERT(1.45424358625158)
#define MOD_CROSSOVER1_ALG0_HIGH_FILT1_PARAMA1_TYPE    SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG0_HIGH_FILT2_PARAMB2_ADDR    24598
#define MOD_CROSSOVER1_ALG0_HIGH_FILT2_PARAMB2_VALUE   SIGMASTUDIOTYPE_8_24_CONVERT(0.757076375333885)
#define MOD_CROSSOVER1_ALG0_HIGH_FILT2_PARAMB2_TYPE    SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG0_HIGH_FILT2_PARAMB2_ADDR    24598
#define MOD_CROSSOVER1_ALG0_HIGH_FILT2_PARAMB2_VALUE   SIGMASTUDIOTYPE_8_24_CONVERT(0.757076375333885)
#define MOD_CROSSOVER1_ALG0_HIGH_FILT2_PARAMB2_TYPE    SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG0_HIGH_FILT2_PARAMB1_ADDR    24599
#define MOD_CROSSOVER1_ALG0_HIGH_FILT2_PARAMB1_VALUE   SIGMASTUDIOTYPE_8_24_CONVERT(-1.51415275066777)
#define MOD_CROSSOVER1_ALG0_HIGH_FILT2_PARAMB1_TYPE    SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG0_HIGH_FILT2_PARAMB1_ADDR    24599
#define MOD_CROSSOVER1_ALG0_HIGH_FILT2_PARAMB1_VALUE   SIGMASTUDIOTYPE_8_24_CONVERT(-1.51415275066777)
#define MOD_CROSSOVER1_ALG0_HIGH_FILT2_PARAMB1_TYPE    SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG0_HIGH_FILT2_PARAMB0_ADDR    24600
#define MOD_CROSSOVER1_ALG0_HIGH_FILT2_PARAMB0_VALUE   SIGMASTUDIOTYPE_8_24_CONVERT(0.757076375333885)
#define MOD_CROSSOVER1_ALG0_HIGH_FILT2_PARAMB0_TYPE    SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG0_HIGH_FILT2_PARAMB0_ADDR    24600
#define MOD_CROSSOVER1_ALG0_HIGH_FILT2_PARAMB0_VALUE   SIGMASTUDIOTYPE_8_24_CONVERT(0.757076375333885)
#define MOD_CROSSOVER1_ALG0_HIGH_FILT2_PARAMB0_TYPE    SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG0_HIGH_FILT2_PARAMA2_ADDR    24601
#define MOD_CROSSOVER1_ALG0_HIGH_FILT2_PARAMA2_VALUE   SIGMASTUDIOTYPE_8_24_CONVERT(-0.574061915083955)
#define MOD_CROSSOVER1_ALG0_HIGH_FILT2_PARAMA2_TYPE    SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG0_HIGH_FILT2_PARAMA2_ADDR    24601
#define MOD_CROSSOVER1_ALG0_HIGH_FILT2_PARAMA2_VALUE   SIGMASTUDIOTYPE_8_24_CONVERT(-0.574061915083955)
#define MOD_CROSSOVER1_ALG0_HIGH_FILT2_PARAMA2_TYPE    SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG0_HIGH_FILT2_PARAMA1_ADDR    24602
#define MOD_CROSSOVER1_ALG0_HIGH_FILT2_PARAMA1_VALUE   SIGMASTUDIOTYPE_8_24_CONVERT(1.45424358625158)
#define MOD_CROSSOVER1_ALG0_HIGH_FILT2_PARAMA1_TYPE    SIGMASTUDIOTYPE_8_24
#define MOD_CROSSOVER1_ALG0_HIGH_FILT2_PARAMA1_ADDR    24602
#define MOD_CROSSOVER1_ALG0_HIGH_FILT2_PARAMA1_VALUE   SIGMASTUDIOTYPE_8_24_CONVERT(1.45424358625158)
#define MOD_CROSSOVER1_ALG0_HIGH_FILT2_PARAMA1_TYPE    SIGMASTUDIOTYPE_8_24

/* Module MasterVolume - Multiple Volume Control*/
#define MOD_MASTERVOLUME_COUNT                         16
#define MOD_MASTERVOLUME_DEVICE                        "IC1"
#define MOD_MASTERVOLUME_ALG0_TARGET_ADDR              94
#define MOD_MASTERVOLUME_ALG0_TARGET_VALUE             SIGMASTUDIOTYPE_8_24_CONVERT(0.000398107170553497)
#define MOD_MASTERVOLUME_ALG0_TARGET_TYPE              SIGMASTUDIOTYPE_8_24
#define MOD_MASTERVOLUME_ALG0_TARGET_ADDR              94
#define MOD_MASTERVOLUME_ALG0_TARGET_VALUE             SIGMASTUDIOTYPE_8_24_CONVERT(0.000398107170553497)
#define MOD_MASTERVOLUME_ALG0_TARGET_TYPE              SIGMASTUDIOTYPE_8_24
#define MOD_MASTERVOLUME_ALG0_TARGET_ADDR              94
#define MOD_MASTERVOLUME_ALG0_TARGET_VALUE             SIGMASTUDIOTYPE_8_24_CONVERT(0.000398107170553497)
#define MOD_MASTERVOLUME_ALG0_TARGET_TYPE              SIGMASTUDIOTYPE_8_24
#define MOD_MASTERVOLUME_ALG0_TARGET_ADDR              94
#define MOD_MASTERVOLUME_ALG0_TARGET_VALUE             SIGMASTUDIOTYPE_8_24_CONVERT(0.000398107170553497)
#define MOD_MASTERVOLUME_ALG0_TARGET_TYPE              SIGMASTUDIOTYPE_8_24
#define MOD_MASTERVOLUME_ALG0_TARGET_ADDR              94
#define MOD_MASTERVOLUME_ALG0_TARGET_VALUE             SIGMASTUDIOTYPE_8_24_CONVERT(0.000398107170553497)
#define MOD_MASTERVOLUME_ALG0_TARGET_TYPE              SIGMASTUDIOTYPE_8_24
#define MOD_MASTERVOLUME_ALG0_TARGET_ADDR              94
#define MOD_MASTERVOLUME_ALG0_TARGET_VALUE             SIGMASTUDIOTYPE_8_24_CONVERT(0.000398107170553497)
#define MOD_MASTERVOLUME_ALG0_TARGET_TYPE              SIGMASTUDIOTYPE_8_24
#define MOD_MASTERVOLUME_ALG0_TARGET_ADDR              94
#define MOD_MASTERVOLUME_ALG0_TARGET_VALUE             SIGMASTUDIOTYPE_8_24_CONVERT(0.000398107170553497)
#define MOD_MASTERVOLUME_ALG0_TARGET_TYPE              SIGMASTUDIOTYPE_8_24
#define MOD_MASTERVOLUME_ALG0_TARGET_ADDR              94
#define MOD_MASTERVOLUME_ALG0_TARGET_VALUE             SIGMASTUDIOTYPE_8_24_CONVERT(0.000398107170553497)
#define MOD_MASTERVOLUME_ALG0_TARGET_TYPE              SIGMASTUDIOTYPE_8_24
#define MOD_MASTERVOLUME_ALG0_SLEW_MODE_ADDR           95
#define MOD_MASTERVOLUME_ALG0_SLEW_MODE_FIXPT          0x0000208A
#define MOD_MASTERVOLUME_ALG0_SLEW_MODE_VALUE          SIGMASTUDIOTYPE_INTEGER_CONVERT(8330)
#define MOD_MASTERVOLUME_ALG0_SLEW_MODE_TYPE           SIGMASTUDIOTYPE_INTEGER
#define MOD_MASTERVOLUME_ALG0_SLEW_MODE_ADDR           95
#define MOD_MASTERVOLUME_ALG0_SLEW_MODE_FIXPT          0x0000208A
#define MOD_MASTERVOLUME_ALG0_SLEW_MODE_VALUE          SIGMASTUDIOTYPE_INTEGER_CONVERT(8330)
#define MOD_MASTERVOLUME_ALG0_SLEW_MODE_TYPE           SIGMASTUDIOTYPE_INTEGER
#define MOD_MASTERVOLUME_ALG0_SLEW_MODE_ADDR           95
#define MOD_MASTERVOLUME_ALG0_SLEW_MODE_FIXPT          0x0000208A
#define MOD_MASTERVOLUME_ALG0_SLEW_MODE_VALUE          SIGMASTUDIOTYPE_INTEGER_CONVERT(8330)
#define MOD_MASTERVOLUME_ALG0_SLEW_MODE_TYPE           SIGMASTUDIOTYPE_INTEGER
#define MOD_MASTERVOLUME_ALG0_SLEW_MODE_ADDR           95
#define MOD_MASTERVOLUME_ALG0_SLEW_MODE_FIXPT          0x0000208A
#define MOD_MASTERVOLUME_ALG0_SLEW_MODE_VALUE          SIGMASTUDIOTYPE_INTEGER_CONVERT(8330)
#define MOD_MASTERVOLUME_ALG0_SLEW_MODE_TYPE           SIGMASTUDIOTYPE_INTEGER
#define MOD_MASTERVOLUME_ALG0_SLEW_MODE_ADDR           95
#define MOD_MASTERVOLUME_ALG0_SLEW_MODE_FIXPT          0x0000208A
#define MOD_MASTERVOLUME_ALG0_SLEW_MODE_VALUE          SIGMASTUDIOTYPE_INTEGER_CONVERT(8330)
#define MOD_MASTERVOLUME_ALG0_SLEW_MODE_TYPE           SIGMASTUDIOTYPE_INTEGER
#define MOD_MASTERVOLUME_ALG0_SLEW_MODE_ADDR           95
#define MOD_MASTERVOLUME_ALG0_SLEW_MODE_FIXPT          0x0000208A
#define MOD_MASTERVOLUME_ALG0_SLEW_MODE_VALUE          SIGMASTUDIOTYPE_INTEGER_CONVERT(8330)
#define MOD_MASTERVOLUME_ALG0_SLEW_MODE_TYPE           SIGMASTUDIOTYPE_INTEGER
#define MOD_MASTERVOLUME_ALG0_SLEW_MODE_ADDR           95
#define MOD_MASTERVOLUME_ALG0_SLEW_MODE_FIXPT          0x0000208A
#define MOD_MASTERVOLUME_ALG0_SLEW_MODE_VALUE          SIGMASTUDIOTYPE_INTEGER_CONVERT(8330)
#define MOD_MASTERVOLUME_ALG0_SLEW_MODE_TYPE           SIGMASTUDIOTYPE_INTEGER
#define MOD_MASTERVOLUME_ALG0_SLEW_MODE_ADDR           95
#define MOD_MASTERVOLUME_ALG0_SLEW_MODE_FIXPT          0x0000208A
#define MOD_MASTERVOLUME_ALG0_SLEW_MODE_VALUE          SIGMASTUDIOTYPE_INTEGER_CONVERT(8330)
#define MOD_MASTERVOLUME_ALG0_SLEW_MODE_TYPE           SIGMASTUDIOTYPE_INTEGER

/* Module S Splitter1 - Single Control Splitter*/
#define MOD_SSPLITTER1_COUNT                           1
#define MOD_SSPLITTER1_DEVICE                          "IC1"
#define MOD_SSPLITTER1_SINGLECTRLSPLITS3004GAIN_ADDR   113
#define MOD_SSPLITTER1_SINGLECTRLSPLITS3004GAIN_VALUE  SIGMASTUDIOTYPE_8_24_CONVERT(1)
#define MOD_SSPLITTER1_SINGLECTRLSPLITS3004GAIN_TYPE   SIGMASTUDIOTYPE_8_24

/* Module Nx2-1 - Stereo Switch Nx2*/
#define MOD_NX2_1_COUNT                                1
#define MOD_NX2_1_DEVICE                               "IC1"
#define MOD_NX2_1_STEREOMUXSIGMA300NS1INDEX_ADDR       114
#define MOD_NX2_1_STEREOMUXSIGMA300NS1INDEX_FIXPT      0x00000002
#define MOD_NX2_1_STEREOMUXSIGMA300NS1INDEX_VALUE      SIGMASTUDIOTYPE_INTEGER_CONVERT(2)
#define MOD_NX2_1_STEREOMUXSIGMA300NS1INDEX_TYPE       SIGMASTUDIOTYPE_INTEGER

#endif