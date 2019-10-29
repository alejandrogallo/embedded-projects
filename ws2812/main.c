#include <avr/io.h>
#include <util/delay.h>

#define WS2812_DIN_PIN PB0
#include "ws2812.h"


int main() {

  /*
#define NLIGHTS 16
  struct Led l[NLIGHTS] = {
    {0xff, 0, 0},
    {0xaa, 0, 0},
    {0xaa, 0xff, 0},
    {0, 0, 0xff},
    {0xff, 0, 0},
    {0, 0xff, 0},
    {0, 0, 0xff},
    {0xff, 0, 0},
    {0, 0xff, 0},
    {0, 0, 0xff},
    {0xff, 0, 0},
    {0, 0xff, 0},
    {0, 0, 0xff},
    {0xff, 0, 0},
    {0, 0xff, 0},
    {0, 0, 0xff},
  };
  */

  WS2812_INIT();

  uint8_t i;
  while (1) {
    struct Led ll = {0,0,0};
    /*WS2812_DIN_HIGH();*/
    /*WS2812_DIN_LOW();*/
    /*WS2812_DIN_HIGH();*/
    /*WS2812_DIN_LOW();*/
    for (i = 0; i < 0xff; i++) {
      ll.r = i; send_led(ll); _delay_ms(10);
    }
    for (i = 0; i < 0xff; i++) {
      ll.r = 0xff - i;
      ll.g = i; send_led(ll); _delay_ms(10);
    }
    _delay_ms(3000);
    for (i = 0xff; i > 0; i--) {
      ll.g = i; send_led(ll); _delay_ms(10);
    }
    _delay_ms(2000);
    for (i = 0; i < 0xff; i++) {
      ll.b = i; send_led(ll); _delay_ms(10);
    }
    for (i = 0xff; i > 0; i--) {
      ll.r = i - 0xff; ll.b = i; send_led(ll); _delay_ms(10);
    }
    /*send_leds(l, NLIGHTS);*/
    /*_delay_ms(1000);*/
    i++;
  }
  return 0;
}
