/*
 * main.h
 *
 *  Created on: 23 Sep 2013
 *      Author: hclark
 */

#ifndef MAIN_H_
#define MAIN_H_

typedef unsigned char BYTE;

#define RXBUF_SIZE	256
extern BYTE rxBuf[256];
extern int rxIdx;
extern int txIdx;
extern int tick;

#define IDLERESETINTERVAL 3

#endif /* MAIN_H_ */
