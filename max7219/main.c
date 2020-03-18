#include <avr/io.h>
#include <util/delay.h>

/*
 *                           Reg. Add.
 *                         |-----------|
 * D0 D1 D2 D3 D4 D5 D6 D7 D8 D9 D10 D11 D12 D13 D14 D15  |  Header
 * ----------------------------------------------------------------
 *                          0  0  0   0  (No op)
 *
 * b  b  b  b               0  0  0   1  (Digit 0)
 *    ...                      ...
 * b  b  b  b               1  0  0   0  (Digit 7)
 *
 *                          1  0  0   1  (Decode mode)
 * b  b  b  b               0  1  0   1  (Intensity :  4 bit)
 *
 *                                       Controls how many rows should
 *                                       be in the output
 * b  b  b                  1  1  0   1  (Scan Limit: 3 bit)
 * 0                        0  0  1   1  (Shutdown  : on)
 * 1                        0  0  1   1  (Shutdown  : off)
 * 0                        1  1  1   1  (test: Off)
 * 1                        1  1  1   1  (test: On)
 */

#define MAX7219_DDR DDRB
#define MAX7219_PORT PORTB
#define DIN PB1
#define CS PB2
#define CLK PB3

#define MAX7219_INTENSITY 0x0A

#define MAX7219_SCAN_LIMIT 0x0B
#ifndef MAX7219_SCAN_LIMIT_NUMBER
#  define MAX7219_SCAN_LIMIT_NUMBER 0x07
#endif

#define MAX7219_TEST     0x0F
#define MAX7219_TEST_ON  0x01
#define MAX7219_TEST_OFF 0x00

#define MAX7219_SHUTDOWN     0x0C
#define MAX7219_SHUTDOWN_ON  0x01
#define MAX7219_SHUTDOWN_OFF 0x00

#define CS_HIGH()  MAX7219_PORT |=  (1 << CS)
#define CS_LOW()   MAX7219_PORT &= ~(1 << CS)
#define DIN_HIGH() MAX7219_PORT |=  (1 << DIN)
#define DIN_LOW()  MAX7219_PORT &= ~(1 << DIN)
#define CLK_HIGH() MAX7219_PORT |=  (1 << CLK)
#define CLK_LOW()  MAX7219_PORT &= ~(1 << CLK)
#define NOP() __asm("nop"); __asm("nop"); __asm("nop"); __asm("nop")

void send_char(uint8_t c) {
  uint8_t i;
  DIN_LOW();
  for (i = 0; i < 8; ++i, c <<= 1) {
    CLK_LOW();
    if (c & 0x80) DIN_HIGH();
    else          DIN_LOW();
    CLK_HIGH();
  }
  CLK_LOW();
  DIN_LOW();
}
void send_spi(const uint8_t data, const uint8_t operation) {
  CS_LOW();
  send_char(operation);
  send_char(data);
  _delay_us(2);
  CS_HIGH();
}

void clear() {
  for (uint8_t i = 0 ; i<=MAX7219_SCAN_LIMIT_NUMBER ; ++i) send_spi(0, i+1);
}

typedef struct { uint8_t x, y; } Point;
void draw(const Point p) { send_spi(1 << (p.x), p.y+1); }
void draw_xy(const uint8_t x, const uint8_t y) { send_spi(1 << x, y + 1); }
void draw_screen(const uint8_t *s) {
  for (uint8_t i = 0 ; i<=MAX7219_SCAN_LIMIT_NUMBER ; ++i)
    send_spi(*(s+i), i+1);
}

int main() {

  uint8_t screen[MAX7219_SCAN_LIMIT_NUMBER];

  MAX7219_DDR |= 1 << DIN | 1 << CS | 1 << CLK;
  MAX7219_PORT = 0;

  //_delay_ms(500);
  //uint16_t a = 0b0101010101010101;

  // decode mode: none
  send_spi(0x00, 0x09);
  // scan limit
  // we set it to 07 because we want up to 7 digits
  send_spi(MAX7219_SCAN_LIMIT_NUMBER, MAX7219_SCAN_LIMIT);
  // intensity
  send_spi(0x00, MAX7219_INTENSITY);
  // display test
  send_spi(MAX7219_TEST_ON, MAX7219_TEST);
  send_spi(MAX7219_TEST_OFF, MAX7219_TEST);
  // turn on
  send_spi(MAX7219_SHUTDOWN_ON, MAX7219_SHUTDOWN);
  send_spi(MAX7219_SHUTDOWN_OFF, MAX7219_SHUTDOWN);
  send_spi(MAX7219_SHUTDOWN_ON, MAX7219_SHUTDOWN);



  while (1) {

    //uint8_t i, j;

    clear();

    for (uint8_t j = 0; j < MAX7219_SCAN_LIMIT_NUMBER; j++) {
    for (uint8_t i = 0; i<=255; i++) {
      //const uint8_t col = 1 << j;
      screen[j] |= i;
      //const uint8_t k = 1+j;
      //send_spi(i, k);
      //send_spi(i, 1);
      //send_spi(i, 2);
      //send_spi(i, 3);
      //send_spi(i, 4);
      //send_spi(i, 5);
      //send_spi(i, 6);
      //send_spi(i, 7);
      //send_spi(i, 8);
      draw_screen(screen);
      _delay_ms(50);
      //_delay_ms(100);
      //send_spi(i, j);
    }
      j++;
      clear();
    }

    for (uint8_t j = 0; j < MAX7219_SCAN_LIMIT_NUMBER; j++) {
    for (uint8_t i = 0; i<=255; i++) {

      //send_spi(1<<i, 1<<j);
      //const uint8_t col = 1 << j;
      send_spi(1, j);
      _delay_ms(100);
      send_spi(2, j);
      _delay_ms(100);
      send_spi(4, j);
      _delay_ms(100);
      send_spi(8, j);
      _delay_ms(100);
      send_spi(16, j);
      _delay_ms(100);
      send_spi(32, j);
      _delay_ms(100);
      send_spi(64, j);
      _delay_ms(100);
      send_spi(128, j);
      _delay_ms(100);
      clear();
    }
    }


//    send_spi(0x01, 0x0F);
 //   _delay_ms(1000);
  //  send_spi(0x00, 0x0C);
   // _delay_ms(1000);

  }

  return 0;
}
