#include <avr/io.h>
#include <util/delay.h>

#define DELAY 1000

int main() {

  DDRB |= (1<<PB0);
  PORTB = 0;

  while (1) {
    PORTB ^= (1<<PB0);
    _delay_ms(DELAY);
    PORTB ^= (1<<PB0);
    _delay_ms(DELAY);
  }

  return 0;
}
