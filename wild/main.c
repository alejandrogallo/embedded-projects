#include <avr/io.h>
#include <avr/pgmspace.h>
#include <util/delay.h>

#define I PORTB1
#define L PORTB2
#define D PORTB0
#define W PORTB4
#define W_ON PORTB |= (1<<W)
#define W_OFF PORTB &= ~(1<<W)

const uint8_t sequence[] = {
  0b1000, 0b0100, 0b0010, 0b0001,
  0xf, 0xf, 0, 0xf, 0xf, 0,
  0b0001, 0b0010, 0b0100,
  0b1000, 0b1100, 0b1110, 0b1111,
  0b1110, 0b1100, 0b1000,
};
const uint8_t screen[4] = {D, L, I, W};

void light(const uint8_t a) {
  uint8_t i;
  for (i=0; i<4; i++) {
    if (a & (1<<i)) {
      PORTB |= (1<<screen[i]);
    } else {
      PORTB &= ~(1<<screen[i]);
    }
  }
}

int main(int argc, char *argv[])
{
  DDRB |= (1<<W) | (1<<I) | (1<<L) | (1<<D);
  uint8_t i;
  uint8_t n = sizeof(sequence) / sizeof(uint8_t);
  while (1) {
    for (i=0; i<n; i++) {
      light(sequence[i]);
      _delay_ms(500);
    }
  }

  return 0;
}
