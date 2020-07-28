#include <avr/io.h>
#include <avr/pgmspace.h>
#include <util/delay.h>

#define WS2812_DIN_PIN PB0
#include "ws2812.h"

#define MAIN_DELAY 10e3
#define SMALL_DELAY 500
#define NLIGHTS 3

void
interpolate_colors(struct Led led[], uint8_t length) {
  uint8_t i;
  struct Led current;
  current.r = led[0].r; current.g = led[0].g; current.b = led[0].b;
  send_led(current);
  _delay_ms(MAIN_DELAY);

  for (i = 1; i < length; i++) {

    while (
        current.r != led[i].r ||
        current.b != led[i].b ||
        current.g != led[i].g)
    {
      if (current.r < led[i].r) {
        current.r += 1;
      } else if (current.r > led[i].r) {
        current.r -= 1;
      }

      if (current.g < led[i].g) {
        current.g += 1;
      } else if (current.g > led[i].g) {
        current.g -= 1;
      }

      if (current.b < led[i].b) {
        current.b += 1;
      } else if (current.b > led[i].b) {
        current.b -= 1;
      }

      send_led(current);
      _delay_ms(SMALL_DELAY); 
    }

    current.r = led[i].r; current.g = led[i].g; current.b = led[i].b;

    send_led(current);
    _delay_ms(MAIN_DELAY);

  }


}

const struct Led l[] = {
  {0, 0, 0},
  {0, 0, 0xff},
  {0xff, 0, 0},
  {0, 0xff, 0},
  {0, 0, 0xff},
  {0, 0xbf, 0xff},
  {0, 0, 0xff},
  {0, 0x80, 0xff},
  {0, 0, 0xff},
  {0xff, 0, 0xff},
  {0, 0xaa, 0x22},
  {0xff, 0, 0xff},
  {0, 0, 0xff},
  {0xff, 0, 0xbf},
  {0, 0, 0xff},
  {0x40, 0xff, 0},
  {0x40, 0xff, 0xaf},
  {0x40, 0, 0},
  {0xff, 0xff, 0},
  {0, 0, 0xff},
};

int main() {


  WS2812_INIT();



  uint8_t i;
  while (1) {
    interpolate_colors(l, NLIGHTS);

    /*
    struct Led ll = {0,0,0};

    for (i = 0; i < 0xff; i++) {
      ll.r = i; send_led(ll); _delay_ms(SMALL_DELAY);
    }

    for (i = 0; i < 0xff; i++) {
      ll.r = 0xff - i;
      ll.g = i; send_led(ll); _delay_ms(SMALL_DELAY);
    }

    _delay_ms(MAIN_DELAY);

    for (i = 0xff; i > 0; i--) {
      ll.g = i; send_led(ll); _delay_ms(SMALL_DELAY);
    }

    _delay_ms(MAIN_DELAY);

    for (i = 0; i < 0xff; i++) {
      ll.b = i; send_led(ll); _delay_ms(SMALL_DELAY);
    }

    for (i = 0xff; i > 0; i--) {
      ll.r = i - 0xff; ll.b = i; send_led(ll); _delay_ms(SMALL_DELAY);
    }

    i++;
    */

  }
  return 0;
}
