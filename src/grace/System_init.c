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
 *      C:/ti/grace_2_10_00_78/packages/ti/mcu/msp430/csl/system/templates/System_2xx_init.xdt
 */

#include <msp430.h>

/* USER CODE START (section: System_init_c_prologue) */
/* User defined includes, defines, global variables and functions */
/* USER CODE END (section: System_init_c_prologue) */

/*
 *  ======== System_graceInit ========
 *  Initialize MSP430 Status Register
 */
void System_graceInit(void)
{
    /* USER CODE START (section: System_graceInit_prologue) */
    /* User initialization code */
    /* USER CODE END (section: System_graceInit_prologue) */

    /* 
     * IFG1, Interrupt Flag Register 1
     * 
     * ~ACCVIFG -- No interrupt pending
     * ~NMIIFG -- No interrupt pending
     * ~OFIFG -- No interrupt pending
     * WDTIFG -- Interrupt pending
     * 
     * Note: ~<BIT> indicates that <BIT> has value zero
     */
    IFG1 &= ~(WDTIFG);

    /* 
     * IE1, Interrupt Enable Register 1
     * 
     * ~ACCVIE -- Interrupt not enabled
     * ~NMIIE -- Interrupt not enabled
     * ~OFIE -- Interrupt not enabled
     * WDTIE -- Interrupt enabled
     * 
     * Note: ~<BIT> indicates that <BIT> has value zero
     */
    IE1 |= WDTIE;

    /* 
     * IFG2, Interrupt Flag Register 2
     * 
     * ~UCB0TXIFG -- No interrupt pending
     * UCB0RXIFG -- Interrupt pending
     * ~UCA0TXIFG -- No interrupt pending
     * ~UCA0RXIFG -- No interrupt pending
     * 
     * Note: ~<BIT> indicates that <BIT> has value zero
     */
    IFG2 &= ~(UCB0RXIFG);

    /* 
     * IE2, Interrupt Enable Register 2
     * 
     * ~UCB0TXIE -- Interrupt disabled
     * UCB0RXIE -- Interrupt enabled
     * ~UCA0TXIE -- Interrupt disabled
     * ~UCA0RXIE -- Interrupt disabled
     * 
     * Note: ~<BIT> indicates that <BIT> has value zero
     */
    IE2 |= UCB0RXIE;

    /* 
     * SR, Status Register
     * 
     * ~SCG1 -- Disable System clock generator 1
     * ~SCG0 -- Disable System clock generator 0
     * ~OSCOFF -- Oscillator On
     * ~CPUOFF -- CPU On
     * GIE -- General interrupt enable
     * 
     * Note: ~<BIT> indicates that <BIT> has value zero
     */
    __bis_SR_register(GIE);

    /* USER CODE START (section: System_graceInit_epilogue) */
    /* User code */
    /* USER CODE END (section: System_graceInit_epilogue) */
}
