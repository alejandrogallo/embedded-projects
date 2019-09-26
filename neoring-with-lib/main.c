#include <util/delay.h>
#include <avr/io.h>
#include <avr/interrupt.h>

#define ws2812_port B
#define ws2812_pin  2
#define LED_LENGTH 16
#define ws2812_resettime  50
#define DELAY_1 200000
#define LAPS 10
#define CHAIN_LENGTH 13

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
  uint8_t i, lap, j;
  const uint8_t colors[CHAIN_LENGTH][3] = {
    {255, 0, 0},
    {0, 255, 0},
    {10, 21, 255},
    {239, 255, 13},
    {128, 10, 82},
    {0, 0, 255},
    {12, 234, 255},
    {123, 2, 255},
    {52, 2, 23},
    {234, 23, 24},
    {10, 23, 24},
    {10, 0, 24},
    {0, 0, 24}
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
        led[i].r=colors[i%CHAIN_LENGTH][0];
        led[i].g=colors[i%CHAIN_LENGTH][1];
        led[i].b=colors[i%CHAIN_LENGTH][2];
        ws2812_setleds(led,16);
        _delay_us(DELAY_1);

      }
      led[15].r=0;led[15].g=0;led[15].b=0;
      ws2812_setleds(led,16);
      _delay_us(DELAY_1);

    }

    clear(led, LED_LENGTH);

    for (j=0; j<CHAIN_LENGTH -1; j++){

      for (lap = 0; lap < 20; ++lap) {

        for (int k=0; k<10; k++){
        for (i = 0; i < LED_LENGTH+1; ++i) {

          led[i].r = (colors[j+1][0] - colors[j][0])/20 * lap + colors[j][0];
          led[i].g = (colors[j+1][1] - colors[j][1])/20 * lap + colors[j][1];
          led[i].b = (colors[j+1][2] - colors[j][2])/20 * lap + colors[j][2];

          led[i-1].r = 0;
          led[i-1].g = 0;
          led[i-1].b = 0;

          ws2812_setleds(led,16);
          _delay_us(1);

        }
        }


      }
    }

  }
}
