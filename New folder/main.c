/*
 * main.c
 *
 *  Created on: 6 mar 2016
 *      Author: Roland
 */
#include <avr/io.h>
#include <util/delay.h>

int main (void){
	DDRC = 0b11111111;
	DDRB = 0b00000000;
	PORTC = 0b00100000;
	int licznik = 0;
	while(1){
		if(!bit_is_clear(PINB, 0)){
			if(licznik <6 ){
			PORTC = (PORTC >> 1);
			_delay_ms (250);
			licznik++;
			}

		}
		else if(licznik == 6)
		{
			licznik = 0;
			PORTC = (PORTC >> 1 );
		}

	}

}
