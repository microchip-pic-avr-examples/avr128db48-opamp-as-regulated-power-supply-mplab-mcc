/**
 * DAC0 Generated Driver File
 * 
 * @file dac0.c
 * 
 * @ingroup dac0
 * 
 * @brief This is the generated driver implementation file for the DAC0 driver
 *
 * @version DAC0 Driver Version 1.0.0
*/
/*
Copyright (c) [2012-2020] Microchip Technology Inc.  

    All rights reserved.

    You are permitted to use the accompanying software and its derivatives 
    with Microchip products. See the Microchip license agreement accompanying 
    this software, if any, for additional info regarding your rights and 
    obligations.
    
    MICROCHIP SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT 
    WARRANTY OF ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT 
    LIMITATION, ANY WARRANTY OF MERCHANTABILITY, TITLE, NON-INFRINGEMENT 
    AND FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT WILL MICROCHIP OR ITS
    LICENSORS BE LIABLE OR OBLIGATED UNDER CONTRACT, NEGLIGENCE, STRICT 
    LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR OTHER LEGAL EQUITABLE 
    THEORY FOR ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES INCLUDING BUT NOT 
    LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT OR CONSEQUENTIAL DAMAGES, 
    OR OTHER SIMILAR COSTS. 
    
    To the fullest extend allowed by law, Microchip and its licensors 
    liability will not exceed the amount of fees, if any, that you paid 
    directly to Microchip to use this software. 
    
    THIRD PARTY SOFTWARE:  Notwithstanding anything to the contrary, any 
    third party software accompanying this software is subject to the terms 
    and conditions of the third party's license agreement.  To the extent 
    required by third party licenses covering such third party software, 
    the terms of such license will apply in lieu of the terms provided in 
    this notice or applicable license.  To the extent the terms of such 
    third party licenses prohibit any of the restrictions described here, 
    such restrictions will not apply to such third party software.
*/



#include "../dac0.h"
/**
 * \brief Initialize DAC interface
 */
int8_t DAC0_Initialize(void)
{
    // DATA Register 
	DAC0.DATA = 0x0;
    // ENABLE enabled; OUTEN enabled; RUNSTDBY enabled; 
	DAC0.CTRLA = 0xC1;

    return 0;
}

void DAC0_Enable(void)
{
    DAC0.CTRLA |= DAC_ENABLE_bm;
}

void DAC0_Disable(void)
{
    DAC0.CTRLA &= ~DAC_ENABLE_bm;
}

void DAC0_SetOutput(dac_resolution_t value)
{
    value     = value << DAC_DATA_gp;
	value     = value & 0xFFC0;
    DAC0.DATA = value;
}

uint8_t DAC0_GetResolution(void)
{
    return 10;
}