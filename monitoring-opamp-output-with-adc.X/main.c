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
#include "mcc_generated_files/system/system.h"

uint16_t adc_sample();

/*
    Main application
*/

int main(void)
{
    /* Initializes MCU, drivers and middleware */
    SYSTEM_Initialize();
    
    /* In this example we have output voltage of approx. 1.88V (VDD = 5V, op amp resistor ladder = WIP4), 
	 * verify that we are within +/- 0.1V of this. 
     * LSB of result (12 bit = 4095 levels) is approx. 1mV (5V/4095 = 1,22 mV) */
    while(1)
    {
        uint16_t OP_out = adc_sample();
        
        if ((1780<OP_out) & (OP_out<1980))
		{
			/*Your code goes here*/
		}
    }    
}

uint16_t adc_sample()
{
	uint16_t res;
    
	ADC0.COMMAND = ADC_STCONV_bm;       // Start conversion
    while (!ADC0_IsConversionDone());   // Wait for result ready
    
	/*Right shift result by 4 due to 16 over samples (divide by 16) */
    res = ADC0_GetConversionResult() >> 4;
    
	return res;
}

/**
    End of File
*/