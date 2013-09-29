/*
 * printf.h
 *
 *  Created on: 27 Sep 2013
 *      Author: hclark
 */

#ifndef PRINTF_H_
#define PRINTF_H_

#define CLOCK_PORT P1OUT
#define CLOCK_BIT BIT4
#define DATA_PORT P1OUT
#define DATA_BIT BIT6


void printf(char *format, ...);
void putc(char);
void puts(char *);


#endif /* PRINTF_H_ */
