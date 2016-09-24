/******************************************************************************
*  Filename:       hw_adi_2_refsys_h
*  Revised:        2015-02-12 20:48:43 +0100 (to, 12 feb 2015)
*  Revision:       42710
*
* Copyright (c) 2015, Texas Instruments Incorporated
* All rights reserved.
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions are met:
*
* 1) Redistributions of source code must retain the above copyright notice,
*    this list of conditions and the following disclaimer.
*
* 2) Redistributions in binary form must reproduce the above copyright notice,
*    this list of conditions and the following disclaimer in the documentation
*    and/or other materials provided with the distribution.
*
* 3) Neither the name of the ORGANIZATION nor the names of its contributors may
*    be used to endorse or promote products derived from this software without
*    specific prior written permission.
*
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
* AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
* IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
* ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
* LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
* CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
* SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
* INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
* CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
* ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
* POSSIBILITY OF SUCH DAMAGE.
*
******************************************************************************/

#ifndef __HW_ADI_2_REFSYS_H__
#define __HW_ADI_2_REFSYS_H__

//*****************************************************************************
//
// This section defines the register offsets of
// ADI_2_REFSYS component
//
//*****************************************************************************
// Reference System Control 0
#define ADI_2_REFSYS_O_REFSYSCTL0                                   0x00000000

// SOC LDO Control 0
#define ADI_2_REFSYS_O_SOCLDOCTL0                                   0x00000002

// SOC LDO Control 1
#define ADI_2_REFSYS_O_SOCLDOCTL1                                   0x00000003

// SOC LDO Control 2
#define ADI_2_REFSYS_O_SOCLDOCTL2                                   0x00000004

// SOC LDO Control 3
#define ADI_2_REFSYS_O_SOCLDOCTL3                                   0x00000005

// SOC LDO Control 4
#define ADI_2_REFSYS_O_SOCLDOCTL4                                   0x00000006

// SOC LDO Control 5
#define ADI_2_REFSYS_O_SOCLDOCTL5                                   0x00000007

//*****************************************************************************
//
// Register: ADI_2_REFSYS_O_REFSYSCTL0
//
//*****************************************************************************
// Field:   [4:0] TRIM_IREF
//
// Internal. Only to be used through TI provided API.
#define ADI_2_REFSYS_REFSYSCTL0_TRIM_IREF_M                         0x0000001F
#define ADI_2_REFSYS_REFSYSCTL0_TRIM_IREF_S                                  0

//*****************************************************************************
//
// Register: ADI_2_REFSYS_O_SOCLDOCTL0
//
//*****************************************************************************
// Field:   [7:4] VTRIM_UDIG
//
// Internal. Only to be used through TI provided API.
#define ADI_2_REFSYS_SOCLDOCTL0_VTRIM_UDIG_M                        0x000000F0
#define ADI_2_REFSYS_SOCLDOCTL0_VTRIM_UDIG_S                                 4

// Field:   [3:0] VTRIM_BOD
//
// Internal. Only to be used through TI provided API.
#define ADI_2_REFSYS_SOCLDOCTL0_VTRIM_BOD_M                         0x0000000F
#define ADI_2_REFSYS_SOCLDOCTL0_VTRIM_BOD_S                                  0

//*****************************************************************************
//
// Register: ADI_2_REFSYS_O_SOCLDOCTL1
//
//*****************************************************************************
// Field:   [7:4] VTRIM_COARSE
//
// Internal. Only to be used through TI provided API.
#define ADI_2_REFSYS_SOCLDOCTL1_VTRIM_COARSE_M                      0x000000F0
#define ADI_2_REFSYS_SOCLDOCTL1_VTRIM_COARSE_S                               4

// Field:   [3:0] VTRIM_DIG
//
// Internal. Only to be used through TI provided API.
#define ADI_2_REFSYS_SOCLDOCTL1_VTRIM_DIG_M                         0x0000000F
#define ADI_2_REFSYS_SOCLDOCTL1_VTRIM_DIG_S                                  0

//*****************************************************************************
//
// Register: ADI_2_REFSYS_O_SOCLDOCTL2
//
//*****************************************************************************
// Field:   [2:0] VTRIM_DELTA
//
// Internal. Only to be used through TI provided API.
#define ADI_2_REFSYS_SOCLDOCTL2_VTRIM_DELTA_M                       0x00000007
#define ADI_2_REFSYS_SOCLDOCTL2_VTRIM_DELTA_S                                0

//*****************************************************************************
//
// Register: ADI_2_REFSYS_O_SOCLDOCTL3
//
//*****************************************************************************
// Field:   [7:6] ITRIM_DIGLDO_LOAD
//
// Internal. Only to be used through TI provided API.
#define ADI_2_REFSYS_SOCLDOCTL3_ITRIM_DIGLDO_LOAD_M                 0x000000C0
#define ADI_2_REFSYS_SOCLDOCTL3_ITRIM_DIGLDO_LOAD_S                          6

// Field:   [5:3] ITRIM_DIGLDO
//
// Internal. Only to be used through TI provided API.
// ENUMs:
// BIAS_120P                Internal. Only to be used through TI provided API.
// BIAS_100P                Internal. Only to be used through TI provided API.
// BIAS_80P                 Internal. Only to be used through TI provided API.
// BIAS_60P                 Internal. Only to be used through TI provided API.
#define ADI_2_REFSYS_SOCLDOCTL3_ITRIM_DIGLDO_M                      0x00000038
#define ADI_2_REFSYS_SOCLDOCTL3_ITRIM_DIGLDO_S                               3
#define ADI_2_REFSYS_SOCLDOCTL3_ITRIM_DIGLDO_BIAS_120P              0x00000038
#define ADI_2_REFSYS_SOCLDOCTL3_ITRIM_DIGLDO_BIAS_100P              0x00000028
#define ADI_2_REFSYS_SOCLDOCTL3_ITRIM_DIGLDO_BIAS_80P               0x00000018
#define ADI_2_REFSYS_SOCLDOCTL3_ITRIM_DIGLDO_BIAS_60P               0x00000000

// Field:   [2:0] ITRIM_UDIGLDO
//
// Internal. Only to be used through TI provided API.
#define ADI_2_REFSYS_SOCLDOCTL3_ITRIM_UDIGLDO_M                     0x00000007
#define ADI_2_REFSYS_SOCLDOCTL3_ITRIM_UDIGLDO_S                              0

//*****************************************************************************
//
// Register: ADI_2_REFSYS_O_SOCLDOCTL4
//
//*****************************************************************************
// Field:   [6:5] UDIG_ITEST_EN
//
// Internal. Only to be used through TI provided API.
#define ADI_2_REFSYS_SOCLDOCTL4_UDIG_ITEST_EN_M                     0x00000060
#define ADI_2_REFSYS_SOCLDOCTL4_UDIG_ITEST_EN_S                              5

// Field:   [4:2] DIG_ITEST_EN
//
// Internal. Only to be used through TI provided API.
#define ADI_2_REFSYS_SOCLDOCTL4_DIG_ITEST_EN_M                      0x0000001C
#define ADI_2_REFSYS_SOCLDOCTL4_DIG_ITEST_EN_S                               2

// Field:     [1] BIAS_DIS
//
// Internal. Only to be used through TI provided API.
#define ADI_2_REFSYS_SOCLDOCTL4_BIAS_DIS                            0x00000002
#define ADI_2_REFSYS_SOCLDOCTL4_BIAS_DIS_BITN                                1
#define ADI_2_REFSYS_SOCLDOCTL4_BIAS_DIS_M                          0x00000002
#define ADI_2_REFSYS_SOCLDOCTL4_BIAS_DIS_S                                   1

// Field:     [0] UDIG_LDO_EN
//
// Internal. Only to be used through TI provided API.
// ENUMs:
// EN                       Internal. Only to be used through TI provided API.
// DIS                      Internal. Only to be used through TI provided API.
#define ADI_2_REFSYS_SOCLDOCTL4_UDIG_LDO_EN                         0x00000001
#define ADI_2_REFSYS_SOCLDOCTL4_UDIG_LDO_EN_BITN                             0
#define ADI_2_REFSYS_SOCLDOCTL4_UDIG_LDO_EN_M                       0x00000001
#define ADI_2_REFSYS_SOCLDOCTL4_UDIG_LDO_EN_S                                0
#define ADI_2_REFSYS_SOCLDOCTL4_UDIG_LDO_EN_EN                      0x00000001
#define ADI_2_REFSYS_SOCLDOCTL4_UDIG_LDO_EN_DIS                     0x00000000

//*****************************************************************************
//
// Register: ADI_2_REFSYS_O_SOCLDOCTL5
//
//*****************************************************************************
// Field:     [3] IMON_ITEST_EN
//
// Internal. Only to be used through TI provided API.
#define ADI_2_REFSYS_SOCLDOCTL5_IMON_ITEST_EN                       0x00000008
#define ADI_2_REFSYS_SOCLDOCTL5_IMON_ITEST_EN_BITN                           3
#define ADI_2_REFSYS_SOCLDOCTL5_IMON_ITEST_EN_M                     0x00000008
#define ADI_2_REFSYS_SOCLDOCTL5_IMON_ITEST_EN_S                              3

// Field:   [2:0] TESTSEL
//
// Internal. Only to be used through TI provided API.
// ENUMs:
// VDD_AON                  Internal. Only to be used through TI provided API.
// VREF_AMP                 Internal. Only to be used through TI provided API.
// ITEST                    Internal. Only to be used through TI provided API.
// NC                       Internal. Only to be used through TI provided API.
#define ADI_2_REFSYS_SOCLDOCTL5_TESTSEL_M                           0x00000007
#define ADI_2_REFSYS_SOCLDOCTL5_TESTSEL_S                                    0
#define ADI_2_REFSYS_SOCLDOCTL5_TESTSEL_VDD_AON                     0x00000004
#define ADI_2_REFSYS_SOCLDOCTL5_TESTSEL_VREF_AMP                    0x00000002
#define ADI_2_REFSYS_SOCLDOCTL5_TESTSEL_ITEST                       0x00000001
#define ADI_2_REFSYS_SOCLDOCTL5_TESTSEL_NC                          0x00000000


#endif // __ADI_2_REFSYS__
