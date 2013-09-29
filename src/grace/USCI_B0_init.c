/*
 *  This file is automatically generated and does not require a license
 *
 *  ==== WARNING: CHANGES TO THIS GENERATED FILE WILL BE OVERWRITTEN ====
 *
 *  To make changes to the generated code, use the space between existing
 *      "USER CODE START (section: <name>)"
 *  and
 *      "USER CODE END (section: <name>)"
 *  comments, where <name> is a single word identifying the section.
 *  Only these sections will be preserved.
 *
 *  Do not move these sections within this file or change the START and
 *  END comments in any way.
 *  ==== ALL OTHER CHANGES WILL BE OVERWRITTEN WHEN IT IS REGENERATED ====
 *
 *  This file was generated from
 *      C:/ti/grace_2_10_00_78/packages/ti/mcu/msp430/csl/communication/USCI_B0_init.xdt
 */

#include <msp430.h>

/* USER CODE START (section: USCI_B0_init_c_prologue) */
/* User defined includes, defines, global variables and functions */
/* USER CODE END (section: USCI_B0_init_c_prologue) */
    
/*
 *  ======== USCI_B0_graceInit ========
 *  Initialize Universal Serial Communication Interface B0 SPI 2xx
 */
void USCI_B0_graceInit(void)
{
    /* USER CODE START (section: USCI_B0_graceInit_prologue) */
    /* User initialization code */
    /* USER CODE END (section: USCI_B0_graceInit_prologue) */
    
    /* Disable USCI */
    UCB0CTL1 |= UCSWRST;
    
    /* 
     * Control Register 1
     * 
     * UCSSEL_2 -- SMCLK
     * UCSWRST -- Enabled. USCI logic held in reset state
     */
    UCB0CTL1 = UCSSEL_2 | UCSWRST;
    
    /* Enable USCI */
    UCB0CTL1 &= ~UCSWRST;
    
    /* USER CODE START (section: USCI_B0_graceInit_epilogue) */
    /* User code */
    /* USER CODE END (section: USCI_B0_graceInit_epilogue) */
}
