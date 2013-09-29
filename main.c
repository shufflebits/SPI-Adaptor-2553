/*
 * ======== Standard MSP430 includes ========
 */
#include <msp430.h>

/*
 * ======== Grace related includes ========
 */
#include <ti/mcu/msp430/Grace.h>

#include "main.h"
#include "printf.h"

BYTE rxBuf[256];
int rxIdx;
int txIdx;
int tick = 0;
int rxIdxStore = 0;
BYTE idleResetCounter = 0;


void waitForTick()
{
	tick = 0;
	while (tick < 1)
	{
//		_BIS_SR(LPM0_bits + GIE);
		while (rxIdx != txIdx)
		{
			{
				while (UCA0STAT & UCBUSY)
				{

				}
				UCA0TXBUF = rxBuf[txIdx++];
				if (txIdx >= RXBUF_SIZE)
				{
					txIdx = 0;
				}
			}

		}

	}
	if (rxIdxStore != rxIdx)
	{
		P1OUT = (P1OUT | BIT0) & ~ BIT6 ;
		rxIdxStore = rxIdx;
		idleResetCounter = 0;
	}
	else
	{

		P1OUT &= ~BIT0;
		if (idleResetCounter < IDLERESETINTERVAL)
		{
			idleResetCounter++;
			if ((P1IN & BIT3) == 0)
			{
				idleResetCounter = IDLERESETINTERVAL;
			}
		}
		else if (idleResetCounter == IDLERESETINTERVAL)
		{
			UCB0CTL1 |= UCSWRST;
			UCB0CTL1 &= ~UCSWRST;
			IE2 |= UCB0RXIE;
			P1OUT |= BIT6;
			idleResetCounter = IDLERESETINTERVAL + 1;
		}

	}

}

/*
 *  ======== main ========
 */

int main(void)
{
    Grace_init();                   // Activate Grace-generated configuration
    
    // >>>>> Fill-in user code here <<<<<
    int j = 0;
    while(1)
    {
    	int i;

    	for (i=0; i< 3; i++)
    	{
    		waitForTick();
    	}
    	if (!(P2IN & BIT6))
    	{
			printf("%i) Test output from SPI adaptor\r\n", j);
//    		putc(1);
			j++;
    	}

    }
    
    return (0);
}
