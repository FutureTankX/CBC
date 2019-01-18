/*
* main.h
*
* Created: 18/1/2019 1:54:05 PM
*  Author: Moath
*/


#ifndef MAIN_H_
#define MAIN_H_


#ifndef  F_CPU
#define F_CPU						(1000000)
#endif

#define _BV(bit) \
(1 << (bit))
#define CHECK_BIT(var,pos) ((var) & (1<<(pos)))

#define INPUT_VOLTAGE				(16)
#define VCC							(5)
#define VOLTAGE_DIVIDER_RES_1		(2200)
#define VOLTAGE_DIVIDER_RES_2		(1000)

#define V9_6						(154)
#define V12_4						(199)
#define V13_1						(210)
#define V15_5						(240)

#include <util/delay.h>
#include <avr/io.h>
#include "ADC/ADC.h"
#include "LED/LED.h"



#endif /* MAIN_H_ */