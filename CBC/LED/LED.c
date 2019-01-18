/*
* LED.c
*
* Created: 18/1/2019 4:06:04 PM
*  Author: Moath
*/

#include "LED.h"

void LED_init()
{
	//DDRB |= _BV(DDB2); /* set as output */
	DDRB |= _BV(DDB1);
	DDRB |= _BV(DDB0);
}

void LED_stats (uint8_t __LED)
{
	PORTB = 0;
	switch (__LED)
	{
		case RED:
		PORTB = _BV(LED_RED_PIN);
		break;
		
		case GREEN:
		PORTB = _BV(LED_GREEN_PIN);
		break;
		
		case YELLOW:
		PORTB = _BV(LED_GREEN_PIN) | _BV(LED_RED_PIN);
		break;
		
		case RED_FLASH:
		PORTB = _BV(LED_RED_PIN);
		_delay_ms(250);
		// 		PORTB &= ~_BV(LED_RED_PIN);
		// 		_delay_ms(250);
		break;
		
		case GREEN_FLASH:
		PORTB = _BV(LED_GREEN_PIN);
		_delay_ms(250);
		PORTB &= ~_BV(LED_GREEN_PIN);
		_delay_ms(250);
		break;
		
	}
}