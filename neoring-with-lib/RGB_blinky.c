#include <util/delay.h>
#include <avr/io.h>
#include <avr/interrupt.h>

#define ws2812_port B
#define ws2812_pin  2
#define LED_LENGTH 16
#define ws2812_resettime  50

#include "lib/light_ws2812.h"

struct cRGB led[LED_LENGTH];

int main(void)
{
  #ifdef __AVR_ATtiny10__
  CCP=0xD8;		// configuration change protection, write signature
  CLKPSR=0;		// set cpu clock prescaler =1 (8Mhz) (attiny 4/5/9/10)
  #endif
  int i;
  const int colors[3][3] = {{123, 0, 1}, {244, 12, 10}, {123, 123, 0}};

  for (i = 0; i < LED_LENGTH; ++i) {
    led[i].r=0;led[i].g=00;led[i].b=0;    // Write red to array
    ws2812_setleds(led,i+1);
    _delay_ms(1);                         // wait for 500ms.
  }

  while(1)
  {
    led[0].r=255;led[0].g=100;led[0].b=0;    // Write red to array
    ws2812_setleds(led,1);
    _delay_ms(100);                         // wait for 500ms.
    for (i = 1; i < LED_LENGTH; ++i) {

      led[i-1].r=0;led[i-1].g=0;led[i-1].b=0;    // Write red to array
      led[i].r=colors[i%3][0];led[i].g=colors[i%3][1];led[i].b=colors[i%3][2];    // Write red to array
      ws2812_setleds(led,i);
      ws2812_setleds(led,i+1);
      _delay_ms(100);                         // wait for 500ms.

    }
    led[15].r=0;led[15].g=0;led[15].b=0;    // Write red to array
    ws2812_setleds(led,16);
    _delay_ms(100);                         // wait for 500ms.
  }
}
