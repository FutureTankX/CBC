/*
* main.c
*
* Created: 12/1/2019 1:44:36 AM
* Author : Moath
*/

#include "main.h"

volatile uint8_t ADC_value;

int main() {
	
	//CLKPSR = 0; /* 8 MHz Clock */
	
	ADC_init(2);
	LED_init();
	
	while (1) {
		
		ADC_value = ADC_read();
		
		if (ADC_value < V9_6)
		{
			LED_stats(RED);
		}
		else if (ADC_value < V12_4)
		{
			LED_stats(YELLOW);
		}
		else if (ADC_value < V13_1)
		{
			LED_stats(GREEN);
		}
		else if (ADC_value < V15_5)
		{
			LED_stats(GREEN_FLASH);
		}
		else if (ADC_value > V15_5)
		{
			LED_stats(RED_FLASH);
		}
	}
}

