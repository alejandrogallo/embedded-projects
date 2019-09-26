#include <avr/io.h>
#include <util/delay.h>

#define WS2812_DDR DDRB
#define WS2812_PORT PORTB
#define WS2812_DIN_PIN PB0
#define WS2812_INIT() WS2812_DDR |= (1<<WS2812_DIN_PIN)
#define FAST
#ifdef FAST
#  define WS2812_DIN_HIGH() WS2812_PORT = 1
#  define WS2812_DIN_LOW() WS2812_PORT = 0
#else
#  define WS2812_DIN_HIGH() WS2812_PORT |= (1<<WS2812_DIN_PIN)
#  define WS2812_DIN_LOW() WS2812_PORT &= ~(1<<WS2812_DIN_PIN)
#endif

/*
T0H 350 ns
T0L 800 ns

T1H 700 ns
T1L 600 ns

nop = 80ns
*/

struct Led {
  uint8_t r;
  uint8_t g;
  uint8_t b;
};

void send_char(uint8_t c) {
  uint8_t i;
  for (i = 0; i < 8; i++, c<<=1) {
    if ( c & 0x80 ) {
      WS2812_DIN_HIGH();
      __asm("nop");
      __asm("nop");
      WS2812_DIN_LOW();
    } else {
      WS2812_DIN_HIGH();
      WS2812_DIN_LOW();
      __asm("nop");
      __asm("nop");
    }
  }
}

void send_led(struct Led l) {
  send_char(l.g);
  send_char(l.r);
  send_char(l.b);
  _delay_us(2);
}

void send_leds(struct Led ls[], uint8_t n) {
  uint8_t i;
  for (i = 0; i < n; i++) {
    send_char(ls[i].g);
    send_char(ls[i].r);
    send_char(ls[i].b);
  }
  _delay_us(2);
}

int main() {

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
