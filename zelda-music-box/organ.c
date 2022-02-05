/*
Simple routines to play notes out to a speaker
*/

#include <avr/io.h>
#include <util/delay.h>
#include "organ.h"
#include "pinDefinition.h"
#include "scale16.h"

void silence(uint32_t duration) {
  do {
    _delay_us(1);
  } while (--duration);
}

void playNote(uint32_t frequency, uint32_t duration) {
  uint32_t elapsed;
  uint32_t i;
  //HERE WE WILL TOGGLE THE LEDS 
  SPEAKER_PORT^=(1<<LED1);
  if (SPEAKER_PORT&(1<<LED1)){// LED1 is on
    SPEAKER_PORT&=~(1<<LED2); 
  }
  else{// LED1 is off 
    SPEAKER_PORT|=(1<<LED2);
  }
  //END OF TOGGLING LEDS
  if (frequency==SILENCE)
  {
    silence(duration);
  }
  else{
    for (elapsed = 0; elapsed < duration; elapsed += frequency) {
    /* For loop with variable delay selects the pitch */
      for (i = 0; i < frequency; i++) {
        _delay_us(1);
      }
      SPEAKER_PORT ^= (1 << SPEAKER);
    }
  }
}
