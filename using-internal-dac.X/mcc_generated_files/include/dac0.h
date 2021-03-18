/**
  @Company
    Microchip Technology Inc.

  @Description
    This Source file provides APIs.
    Generation Information :
    Driver Version    :   1.0.0
*/
/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/


#ifndef DAC0_H_INCLUDED
#define DAC0_H_INCLUDED

#include "../utils/compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

/** Datatype for the resolution of the DAC */
typedef uint16_t dac_resolution_t;

/**
 * \brief Initialize DAC interface
 * If module is configured to disabled state, the clock to the DAC is disabled
 * if this is supported by the device's clock system.
 *
 * \return Initialization status.
 * \retval 0 the DAC init was successful
 * \retval 1 the DAC init was not successful
 */
int8_t DAC0_Initialize();

/**
 * \brief Enable DAC0
 * 1. If supported by the clock system, enables the clock to the DAC
 * 2. Enables the DAC module by setting the enable-bit in the DAC control register
 *
 * \return Nothing
 */
void DAC0_Enable();

/**
 * \brief Disable DAC0
 * 1. Disables the DAC module by clearing the enable-bit in the DAC control register
 * 2. If supported by the clock system, disables the clock to the DAC
 *
 * \return Nothing
 */
void DAC0_Disable();

/**
 * \brief Start a conversion on DAC0
 *
 * \param[in] value The digital value to be converted to analogue voltage by the DAC
 *
 * \return Nothing
 */
void DAC0_SetOutput(dac_resolution_t value);

/**
 * \brief Return the number of bits in the DAC resolution
 *
 * \return The number of bits in the DAC resolution
 */
uint8_t DAC0_GetResolution();

#ifdef __cplusplus
}
#endif

#endif /* DAC0_H_INCLUDED */