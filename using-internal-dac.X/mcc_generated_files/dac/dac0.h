/**
 * DAC0 Generated Driver API Header File
 * 
 * @file dac0.h
 * 
 * @defgroup  dac0 DAC0
 * 
 * @brief This is the generated header file for the DAC0 driver
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


#ifndef DAC0_H_INCLUDED
#define DAC0_H_INCLUDED

#include "../system/utils/compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

/** Datatype for the resolution of the DAC */
typedef uint16_t dac_resolution_t;

/**
 * @ingroup dac0
 * @brief  This routine initializes the DAC0 and must be called only once, before any other DAC0 routine is called.
 * If module is configured to disabled state, the clock to the DAC is disabled
 * if this is supported by the device's clock system.
 * @param void
 * @return Initialization status.
 * @retval 0 the DAC init was successful
 * @retval 1 the DAC init was not successful
 */
int8_t DAC0_Initialize(void);

/**
 * @ingroup dac0
 * @brief  This routine enables the DAC0
 * @param void
 * @return void
 */
void DAC0_Enable(void);

/**
 * @ingroup dac0
 * @brief  This routine disables the DAC0
 * @param void
 * @return void
 */
void DAC0_Disable(void);

/**
 * @ingroup dac0
 * @brief  This routine starts a conversion on DAC0
 * @param value - The digital value to be converted to analog voltage by the DAC
 * @return void
 */
 void DAC0_SetOutput(dac_resolution_t value);

/**
 * @ingroup dac0
 * @brief  This routine returns the number of bits in the DAC0 resolution
 * @param void
 * @return The number of bits in the resolution
 */
uint8_t DAC0_GetResolution(void);

#ifdef __cplusplus
}
#endif

#endif /* DAC0_H_INCLUDED */