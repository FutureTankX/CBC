/*
* ADC.h
*
* Created: 18/1/2019 1:02:48 PM
*  Author: Moath
*/


#ifndef ADC_H_
#define ADC_H_


#include <avr/io.h>
#include <stdint.h>


#define _BV(bit) \
(1 << (bit))
#define CHECK_BIT(var,pos) ((var) & (1<<(pos)))


void ADC_init(uint8_t __Channel);
uint8_t ADC_read (void);

#endif /* ADC_H_ */