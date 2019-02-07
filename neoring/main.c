#include <avr/io.h>
#include <avr/power.h>
#include <util/delay.h>
#include <util/delay_basic.h>
#include "colors.h"


// microseconds
#define T0H  0.35
#define T0L  0.8

// microseconds
#define T1H  0.7
#define T1L  0.6

// microseconds
#define TRESET  50
#define MAIN_DELAY 

#define DATA_PIN 1<<3

void
send_zero() {
  PORTB  |= DATA_PIN;
  _delay_us(T0H);
  PORTB  = 0;
  _delay_us(T0L);
}

void
send_one() {
  PORTB  |= DATA_PIN;
  _delay_us(T1H);
  PORTB  = 0;
  _delay_us(T1L);
}


void
send_rgb(uint8_t r, uint8_t g, uint8_t b) {

  for (uint8_t i = 0;  i < 8; i++) {
    if (b & 1<<i)
      send_one();
    else
      send_zero();
  }

  for (uint8_t i = 0;  i < 8; i++) {
    if (r & 1<<i)
      send_one();
    else
      send_zero();
  }

  for (uint8_t i = 0;  i < 8; i++) {
    if (g & 1<<i)
      send_one();
    else
      send_zero();
  }

}

void
clear() {
  for (uint8_t i = 0; i < 15; ++i) {
    SEND_OFF
  }
  _delay_us(TRESET);
}

void
test() {
  for (uint8_t i = 0; i < 4; ++i) {
    SEND_RED
    SEND_GREEN
  }
  _delay_us(TRESET);
}

int
main(void) {

#if defined(__AVR_ATtiny45__)
  if (F_CPU == 8000000) clock_prescale_set(clock_div_1);
#endif

  DDRB |= DATA_PIN;
  PORTB = 0;

    /*CCP=0xD8;   // configuration change protection, write signature*/
    /*CLKPSR=0;*/

  /*DDRB |= 1<<2;*/
  for (int i = 0; i<1; i++) {
    PORTB ^= DATA_PIN;
    _delay_us(1e6);
    PORTB ^= DATA_PIN;
    _delay_us(1e6);
  }

  while (1){


    /*test();*/
    /*MAIN_DELAY*/
    /*clear();*/
    /*MAIN_DELAY*/

    _delay_us(TRESET);

    send_rgb(255, 0, 0);
    _delay_us(TRESET); MAIN_DELAY
    send_rgb(200, 0, 0);
    _delay_us(TRESET); MAIN_DELAY
    send_rgb(150, 0, 0);
    _delay_us(TRESET); MAIN_DELAY
    send_rgb(100, 0, 0);
    _delay_us(TRESET); MAIN_DELAY
    send_rgb(150, 0, 0);
    _delay_us(TRESET); MAIN_DELAY
    send_rgb(200, 0, 0);
    _delay_us(TRESET); MAIN_DELAY

    /*send_rgb(0, 255, 0);*/
    /*_delay_us(TRESET); MAIN_DELAY*/
    /*send_rgb(0, 200, 0);*/
    /*_delay_us(TRESET); MAIN_DELAY*/
    /*send_rgb(0, 150, 0);*/
    /*_delay_us(TRESET); MAIN_DELAY*/
    /*send_rgb(0, 100, 0);*/
    /*_delay_us(TRESET); MAIN_DELAY*/
    /*send_rgb(0, 150, 0);*/
    /*_delay_us(TRESET); MAIN_DELAY*/
    /*send_rgb(0, 200, 0);*/
    /*_delay_us(TRESET); MAIN_DELAY*/

    /*send_rgb(0, 0, 255);*/
    /*_delay_us(TRESET); MAIN_DELAY*/
    /*send_rgb(0, 0, 200);*/
    /*_delay_us(TRESET); MAIN_DELAY*/
    /*send_rgb(0, 0, 150);*/
    /*_delay_us(TRESET); MAIN_DELAY*/
    /*send_rgb(0, 0, 100);*/
    /*_delay_us(TRESET); MAIN_DELAY*/
    /*send_rgb(0, 0, 150);*/
    /*_delay_us(TRESET); MAIN_DELAY*/
    /*send_rgb(0, 0, 200);*/
    /*_delay_us(TRESET); MAIN_DELAY*/

    /*SEND_GREEN*/
    /*_delay_us(TRESET); MAIN_DELAY*/
    /*SEND_RED*/
    /*_delay_us(TRESET); MAIN_DELAY*/

    /*SEND_BLUE*/
    /*SEND_OFF*/
    /*SEND_OFF*/
    /*_delay_us(TRESET);*/
    /*MAIN_DELAY*/

    /*clear();*/
    /*MAIN_DELAY*/

    /*SEND_OFF*/
    /*SEND_OFF*/
    /*SEND_RED*/
    /*SEND_BLUE*/
    /*_delay_us(TRESET);*/
    /*MAIN_DELAY*/

    /*SEND_OFF*/
    /*SEND_OFF*/
    /*SEND_GREEN*/
    /*_delay_us(TRESET);*/
    /*MAIN_DELAY*/

  }

  return 0;
}

// vim:path+=/usr/lib/avr/include
