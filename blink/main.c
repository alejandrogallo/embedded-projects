#include <avr/io.h>
#include <util/delay.h>

#define BLUE 1<<3
#define RED 1<<0
#define GREEN 1<<1

#define DELAY 1000
#define led PORTB0

int
main(void) {

  DDRB = 0b111111;

  while (1) {
    PORTB = (1<<0);
    _delay_ms(DELAY);
    PORTB = (1<<1);
    _delay_ms(DELAY);
    PORTB = (1<<2);
    _delay_ms(DELAY);
    PORTB = (1<<3);
    _delay_ms(DELAY);
    PORTB = (1<<4);
    _delay_ms(DELAY);
    PORTB = (1<<5);
    _delay_ms(DELAY);
    PORTB = 0;
  }
  return 0;
}

// vim: path+=/usr/lib/avr/include
