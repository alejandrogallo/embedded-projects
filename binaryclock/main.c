






// Blink LED on PB0 using the timer interrupt
//
#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>


#define SECONDS_CALLIBRATION 5

uint8_t ticks=SECONDS_CALLIBRATION, seconds=0b000000;


void tick_second(void){
	if (ticks>=SECONDS_CALLIBRATION)
	{

		PORTB = seconds;
		if (seconds==31)
		{
			seconds=0;
		}
		seconds++;

		ticks=1;
	}
	ticks++;
}

int main(void)
{ 

  cli(); // Disable global interrupts

  // This is form timer 0, 
// TCCR0B is for setting the frequency
// 
//   Setting 	Divisor 	Frequency
// 			0x01 	 	1 	 		62500
// 			0x02  	8 	 		7812.5
// 			0x03  	64 		 	976.5625   <--DEFAULT
// 			0x04 	 	256 	 	244.140625
// 			0x05 	 	1024 	 	61.03515625
    // TCCR0B |= ((1 << CS02) | (1 << CS00)); // Timer 0 prescaling - divides by 1024 */
  TCCR0B |= 0x05;
  TCCR0A |= (1 << WGM01); // Put timer 0 in CTC mode

  OCR0A = 255; // Count 10 cycles for interrupt

  TIMSK |= (1 << OCIE0A); // enable timer compare interrupt

  DDRB |= 0b011111; // 

  

  sei(); // Enable global interrupts

  while(1) {
  	
	} 

}

ISR(TIMER0_COMPA_vect) // Interrupt Service Routine
{ 
  tick_second();
}