#include <avr/io.h>
#include <util/delay.h>

#define BLUE 1<<3
#define RED 1<<0
#define GREEN 1<<1

#define DELAY 100

int
main(void) {

  while (1) {
    _delay_ms(DELAY);
    PORTB ^= BLUE;
    _delay_ms(DELAY);
    PORTB ^= RED;
    _delay_ms(DELAY);
    PORTB ^= GREEN;
  }
  return 0;
}

// vim: path+=/usr/lib/avr/include
