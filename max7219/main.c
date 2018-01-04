/*
 *   One MAX7219 connected to an 8x8 LED matrix.
 *    */

#include <avr/io.h>
#include <util/delay.h>
#include "alphabet.h"

#define CLK_HIGH()  PORTB |= (1<<PB0)
#define CLK_LOW()   PORTB &= ~(1<<PB0)
#define CS_HIGH()   PORTB |= (1<<PB1)
#define CS_LOW()    PORTB &= ~(1<<PB1)
#define DATA_HIGH() PORTB |= (1<<PB2)
#define DATA_LOW()  PORTB &= ~(1<<PB2)
#define INIT_PORT() DDRB |= (1<<PB0) | (1<<PB1) | (1<<PB2)

#define ON 1
#define OFF 0
#define TOGGLE 2


void spi_send(uint8_t data)
{
  uint8_t i;

  for (i = 0; i < 8; i++, data <<= 1)
  {
    CLK_LOW();
    if (data & 0x80)
      DATA_HIGH();
    else
      DATA_LOW();
    CLK_HIGH();
  }

}

void max7219_writec(uint8_t high_byte, uint8_t low_byte)
{
  CS_LOW();
  spi_send(high_byte);
  spi_send(low_byte);
  CS_HIGH();
}

void max7219_clear(void)
{
  uint8_t i;
  for (i = 0; i < 8; i++)
  {
    max7219_writec(i+1, 0);
  }
}

void max7219_init(void)
{
  INIT_PORT();
  // Decode mode: none
  max7219_writec(0x09, 0);
  // Intensity: 3 (0-15)
  max7219_writec(0x0A, 1);
  // Scan limit: All "digits" (rows) on
  max7219_writec(0x0B, 7);
  // Shutdown register: Display on
  max7219_writec(0x0C, 1);
  // Display test: off
  max7219_writec(0x0F, 0);
  max7219_clear();
}


uint8_t DISPLAY[8];

void refresh_matrix(void)
{
  uint8_t i;

  for (i = 0; i < 8; i++)

  {
    max7219_writec(i+1, DISPLAY[i]);
  }
}

void set_image(const __flash uint8_t im[8])
{
  uint8_t i;

  for (i = 0; i < 8; i++)
    DISPLAY[i] = im[i];
}

void set_pixel(uint8_t r, uint8_t c, uint8_t value)
{
  switch (value)
  {
    case 0: // Clear bit
      DISPLAY[r] &= (uint8_t) ~(0x80 >> c);
      break;
    case 1: // Set bit
      DISPLAY[r] |= (0x80 >> c);
      break;
    default: // XOR bit
      DISPLAY[r] ^= (0x80 >> c);
      break;
  }
}
void slide_left(const __flash uint8_t left[8], const __flash uint8_t right[8]){
  uint8_t i, j;
  for (j=0; j<8; j++){
    for (i=0; i<=7; i++){
      DISPLAY[i] = (left[i]<<j)|(right[i]>>(8-j));
    }
    refresh_matrix();
    _delay_ms(100);
  }
}

int main(void)
{
  //const __flash uint8_t * text[21] = {C, O, N, HEART, D, E, ALL_OFF, L, U,I,S,Y,A,L,E,J,A,N,D,R,O};
  //const __flash uint8_t * text[17] = {ALL_OFF,INVADER1,ALL_OFF, M,A,C,R,O,MINUS,P,A,R,T,Y,ALL_OFF,INVADER2, ALL_OFF};
  const __flash uint8_t * text[17] = {LESS, C, O, D, E, GREATER, ALL_OFF, INVADER1, ALL_OFF, LESS, SLASH, S,P,A,C,E, GREATER};
  uint8_t i;

  max7219_init();

  while(1)
  {
    /*for (i = 0; i<=5; i++){
      set_image(HEART1F);
      refresh_matrix();
      _delay_ms(500);
      set_image(HEART1);
      refresh_matrix();
      _delay_ms(500);
    }*/

    for (i=0; i< sizeof(text)/sizeof(text[0]); i++){
      set_image(text[i]);
      refresh_matrix();
      _delay_ms(10);
      slide_left(text[i],text[i+1]);
    }

      /*
    for (i = 0; i<112; i++){
      set_image(ALL[i]);
      refresh_matrix();
      _delay_ms(1500);
//      if (i<=111) slide_left(ALL[i], ALL[i+1]);
    }  */
/*
    set_image(HEART);
    refresh_matrix();
    _delay_ms(4500);
    // Invert DISPLAY
    for (i = 0 ; i < 8*8; i++)
    {
      set_pixel(i / 8, i % 8, 2);
      refresh_matrix();
      _delay_ms(10);
    }
    _delay_ms(4500);
    */
  }
}
