#include <util/delay.h>
#include <avr/io.h>
#include <avr/interrupt.h>

#define ws2812_port B
#define ws2812_pin  2
#define LED_LENGTH 1
#define ws2812_resettime  50
#define DELAY_1 200000
#define LAPS 10
#define COLOR_LENGTH 18

#include "lib/light_ws2812.h"

#define SET_RED led[0].r = 255; led[0].g=0; led[0].b=0;
#define SET_BLUE led[0].r = 0; led[0].g=0; led[0].b=255;
#define SET_GREEN led[0].r = 0; led[0].g=255; led[0].b=0;

// ms should be at least greater than 10
void
transition(
  struct cRGB *led, const uint8_t *color1, const uint8_t *color2, int ms
){
    int h = ms / 10;

    for (int lap = 0; lap <= h; ++lap) {

        led[0].r = (color2[0] - color1[0])/h * lap + color1[0];
        led[0].g = (color2[1] - color1[1])/h * lap + color1[1];
        led[0].b = (color2[2] - color1[2])/h * lap + color1[2];

        ws2812_setleds(led,1);
        _delay_ms(10);

    }

}

struct cRGB led[LED_LENGTH];

int main(void)
{
  //uint8_t i, lap, j;
  const uint8_t colors[COLOR_LENGTH][3] = {
    { 255 , 0   , 0   },
    { 0   , 255 , 0   },
    { 10  , 21  , 255 },
    { 178 , 34  , 34  },
    { 255 , 48  , 48  },
    { 218 , 165 , 32  },
    { 60  , 179 , 113 },
    { 123 , 104 , 238 },
    { 239 , 255 , 13  },
    { 128 , 10  , 82  },
    { 0   , 0   , 255 },
    { 12  , 234 , 255 },
    { 123 , 2   , 255 },
    { 52  , 2   , 23  },
    { 234 , 23  , 24  },
    { 10  , 23  , 24  },
    { 10  , 0   , 24  }
  };
  const uint8_t black[3] = {0,0,0};

  transition(led, black, black, 1000);
  _delay_ms(1e3);


  while(1)
  {

    for (uint8_t j=0; j< 255 ; j++){
      led[0].r = j;
      ws2812_setleds(led,1);
      _delay_ms(100);
    }
    _delay_ms(1000);
    for (uint8_t j=0; j< 255 ; j++){
      led[0].r = 255 - j;
      led[0].g = j;
      ws2812_setleds(led,1);
      _delay_ms(100);
    }
    _delay_ms(1000);
    for (uint8_t j=0; j< 255 ; j++){
      led[0].g = 255 - j;
      led[0].b = j;
      ws2812_setleds(led,1);
      _delay_ms(100);
    }
    _delay_ms(1000);


    /*transition(led, black, colors[0], 2000);*/
    /*_delay_ms(1000);*/
    /*transition(led, colors[0], colors[1], 2000);*/
    /*_delay_ms(2000);*/
    /*transition(led, colors[1], colors[2], 2000);*/
    /*_delay_ms(2000);*/


    for (uint8_t j=0; j<COLOR_LENGTH -1; j++){
      transition(led, colors[j], colors[j+1], 1000);
      _delay_ms(2000);
    }

    for (uint8_t r=0; r<255; r++){
    for (uint8_t g=0; g<255; g++){
    for (uint8_t b=0; b<255; b++){
      led[0].r = r-g*b; led[0].g=g- r*b; led[0].b=b-r*g;
      ws2812_setleds(led,1);
      _delay_ms(100);
    }
    }
    }

    for (uint8_t g=0; g<255; g++){
    for (uint8_t b=0; b<255; b++){
    for (uint8_t r=0; r<255; r++){
      led[0].r = r-g*b; led[0].g=g- r*b; led[0].b=b-r*g;
      ws2812_setleds(led,1);
      _delay_ms(100);
    }
    }
    }

  }
}
