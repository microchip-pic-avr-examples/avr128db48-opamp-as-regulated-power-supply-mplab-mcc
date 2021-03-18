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

#ifndef OPAMP_H_INCLUDED
#define OPAMP_H_INCLUDED

#include "../utils/compiler.h"
#include <stdbool.h>

#define OPAMP_TIMEBASE_VALUE (3)

/**
  @Summary
    Initializes the OPAMP_Initialize.

  @Description
    This routine initializes the OPAMP_Initialize.
    This routine should only be called once during system initialization.

  @Preconditions
    None

  @Param
    None
    
   @Example
    <code>
    OPAMP_Initialize();
    </code>
*/
void OPAMP_Initialize();

/**
 * @brief Enables the OPAMP System
 * @return None 
 * @param None
 */
void OPAMP_EnableSystem(void);

/**
 * @brief Disables the OPAMP System
 * @return None 
 * @param None
 */
void OPAMP_DisableSystem(void);
        
//OP0 Custom APIs

/**
 * @brief Sets OP0's positive input as per user selection
 * @return None 
 * @param [in] Desired positive input
          For the available positive inputs, refer to OPAMP_MUXPOS_t enum from the device header file
 */
void OPAMP_SetOP0PositiveInMux(OPAMP_OP0INMUX_MUXPOS_t value);

/**
 * @brief Sets OP0's negative input as per user selection
 * @return None 
 * @param [in] Desired negative input
          For the available negative inputs, refer to OPAMP_MUXNEG_t enum from the device header file
 */
void OPAMP_SetOP0NegativeInMux(OPAMP_OP0INMUX_MUXNEG_t value);

/**
 * @brief Sets the top resistor connection of the OP0's internal resistor ladder as per user selection
 * @return None 
 * @param [in] Desired top resistor connection
          For the available top resistor connections, refer to OPAMP_MUXTOP_t enum from the device header file
 */
void OPAMP_SetOP0TopResMux(OPAMP_OP0RESMUX_MUXTOP_t value);

/**
 * @brief Sets the bottom resistor connection of OP0's internal resistor ladder as per user selection
 * @return None 
 * @param [in] Desired bottom resistor connection
          For the available bottom resistor connections, refer to OPAMP_MUXBOT_t enum from the device header file
 */
void OPAMP_SetOP0BottomResMux(OPAMP_OP0RESMUX_MUXBOT_t value);

/**
 * @brief Sets the R1 and R2 values of OP0's internal resistor ladder as per user selection
 * @return None 
 * @param [in] Desired resistor selection
               For the available resistor values, refer to OPAMP_MUXWIP_t enum from the device header file
 */
void OPAMP_SetOP0WiperResMux(OPAMP_OP0RESMUX_MUXWIP_t value);

/**
 * @brief Sets OP0's settle time
 * @return None 
 * @param [in] Desired settle time of 0 to 127 in us
 */
void OPAMP_SetOP0SettleTime(uint8_t settleTime);

/**
 * @brief Checks if OP0's settling time is finished
 * @return boolean 
 * @param None
 */
bool OPAMP_IsOP0Settled(void);

/**
 * @brief Sets OP0's offset calibration
 * @return None 
 * @param [in] Desired offset
 */
void OPAMP_SetOP0OffsetCalibration(uint8_t calValue);
        
#endif /* OPAMP_H_INCLUDED */