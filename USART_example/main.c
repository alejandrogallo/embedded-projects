

#include <avr/io.h>
#include <util/delay.h>
#include "USART.h"




#define LED 0



int main(void){

	DDRB |= (1<<LED);

	initUSART();
	printString("Hello World\r\n");

	while(1){
		PORTB ^= (1<<LED);
		_delay_ms(100);
	}

	return 1;
}