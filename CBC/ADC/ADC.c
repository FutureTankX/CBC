/*
* ADC.c
*
* Created: 17/1/2019 11:05:45 PM
*  Author: Moath
*/

#include "ADC.h"

void ADC_init(uint8_t __Channel)
{
	ADMUX = 0; /* Reset the register */
	switch (__Channel)
	{
		case 0:
		/* All Zero for channel 0 */
		break;
		case 1:
		ADMUX = _BV(MUX0);
		break;
		case 2:
		ADMUX = _BV(MUX1);
		break;
		case 3:
		ADMUX = _BV(MUX1) | _BV(MUX0);
		break;
	}
	
	ADCSRA =  _BV(ADPS1) | _BV(ADPS0); /* 1M/8 = 125k ACD Clock */
	
	ADCSRA |= _BV(ADEN); /* Enable the ADC */
}

uint8_t ADC_read ()
{
	ADCSRA |= _BV(ADSC);
	
	while (CHECK_BIT(ADCSRA,3))
	{
	}
	
	return(ADCL);
}