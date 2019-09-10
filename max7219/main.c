#include <avr/io.h>
#include <util/delay.h>

#define MAX7219_DDR DDRB
#define MAX7219_PORT PORTB
#define DIN PB0
#define CS PB1
#define CLK PB2

#define CS_HIGH() MAX7219_PORT |= (1 << CS)
#define CS_LOW() MAX7219_PORT &= ~(1 << CS)
#define DIN_HIGH() MAX7219_PORT |= (1 << DIN)
#define DIN_LOW() MAX7219_PORT &= ~(1 << DIN)
#define CLK_HIGH() MAX7219_PORT |= (1 << CLK)
#define CLK_LOW() MAX7219_PORT &= ~(1 << CLK)
#define NOP() __asm("nop"); __asm("nop"); __asm("nop"); __asm("nop")

void send_char(uint8_t c) {
  uint8_t i;
  __asm("nop");
  DIN_LOW();
  for (i = 0; i < 8; ++i, c <<= 1) {
    CLK_LOW();
    NOP();
    NOP();
    NOP();
    NOP();
    NOP();
    if (c & 0x80) DIN_HIGH();
    else          DIN_LOW();
    NOP();
    CLK_HIGH();
    NOP();
    NOP();
    NOP();
    NOP();
    NOP();
    NOP();
  }
  CLK_LOW();
  DIN_LOW();
}
void send_spi(uint8_t data, uint8_t operation) {
  CS_LOW();
  send_char(operation);
  send_char(data);
  _delay_us(2);
  CS_HIGH();
}

void clear() {
  uint8_t i;
  for (i = 0 ; i<=8 ; ++i) {
    send_spi(0, i+1);
  }
}

int main() {

  MAX7219_DDR |= 1 << DIN | 1 << CS | 1 << CLK;
  MAX7219_PORT = 0;

  //_delay_ms(500);
  //uint16_t a = 0b0101010101010101;

  // decode mode: none
  send_spi(0x00, 0x09);
  _delay_ms(100);
  // scan limit
  send_spi(0x07, 0x0B);
  _delay_ms(100);
  // intensity
  send_spi(0x01, 0x0A);
  _delay_ms(100);
  // display test
  send_spi(0x00, 0x0F);
  _delay_ms(100);
  // turn on
  send_spi(0x01, 0x0C);
  _delay_ms(100);
  clear();
  _delay_ms(100);


  while (1) {

    uint8_t i, j;
    send_spi(0x01, 0x0C);
    _delay_ms(1000);

    for (i = 1; i<8; i++) {
      for (j = 1; j<8; j++) {
        /*send_spi(0b10101010, 0b00000100);*/
        /*send_spi(0b10101000, 0b00000100);*/
        /*clear();*/
        _delay_ms(1000);
        send_spi(i, j);
      }
    }

    send_spi(0x01, 0x0F);
    _delay_ms(1000);
    send_spi(0x00, 0x0C);
    _delay_ms(1000);

  }

  return 0;
}
