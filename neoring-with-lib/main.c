#include <util/delay.h>
#include <avr/io.h>
#include <avr/interrupt.h>

#define ws2812_port B
#define ws2812_pin  2
#define LED_LENGTH 16
#define ws2812_resettime  50
#define DELAY_1 8000
#define LAPS 10

#include "lib/light_ws2812.h"

void clear(struct cRGB *led, int length) {
  uint8_t i;
  for (i = 0; i < length; ++i) {
    led[i].r=0;
    led[i].g=0;
    led[i].b=0;
  }
  ws2812_setleds(led,length);
}

struct cRGB led[LED_LENGTH];

int main(void)
{
  uint8_t i, lap;
  const uint8_t colors[3][3] = {
    {20, 128, 21},
    {244, 12, 10},
    {123, 123, 0}
  };

  clear(led, LED_LENGTH);
  _delay_ms(1e3);

  while(1)
  {

    for (lap = 0; lap < LAPS; ++lap) {

      led[0].r=255;led[0].g=100;led[0].b=0;
      ws2812_setleds(led,1);
      _delay_us(DELAY_1);
      for (i = 1; i < LED_LENGTH; ++i) {

        led[i-1].r=0;
        led[i-1].g=0;
        led[i-1].b=0;
        led[i].r=colors[i%3][0];
        led[i].g=colors[i%3][1];
        led[i].b=colors[i%3][2];
        ws2812_setleds(led,16);
        _delay_us(DELAY_1);

      }
      led[15].r=0;led[15].g=0;led[15].b=0;
      ws2812_setleds(led,16);
      _delay_us(DELAY_1);

    }

    clear(led, LED_LENGTH);

    for (lap = 0; lap < 255; ++lap) {


      for (i = 0; i < LED_LENGTH+1; ++i) {

        led[i].r = (2*lap) % 255;
        led[i].g = (255 - (1*lap)%255);
        led[i].b = 0;

        /*led[i].r = led[i-1].r;*/
        /*led[i].g = led[i-1].g;*/
        /*led[i].b = led[i-1].b;*/

        led[i-1].r = 0;
        led[i-1].g = 0;
        led[i-1].b = 0;

        ws2812_setleds(led,16);
        _delay_us(1);

      }


    }

  }
}
