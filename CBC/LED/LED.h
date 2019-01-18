/*
* LED.h
*
* Created: 18/1/2019 4:05:49 PM
*  Author: Moath
*/


#ifndef LED_H_
#define LED_H_


#include <avr/io.h>
#include <stdint.h>
#include <util/delay.h>

#define LED_RED_PIN					(PORTB0)
#define LED_GREEN_PIN				(PORTB1)
#define LED_BLUE_PIN				(PORTB2)

enum LED_Stats {
	
	RED,
	RED_FLASH,
	YELLOW,
	GREEN,
	GREEN_FLASH,
};

void LED_init(void);
void LED_stats (uint8_t __LED);

#endif /* LED_H_ */