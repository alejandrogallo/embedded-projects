
#include <avr/io.h>
#include <util/delay.h>
#include "scale16.h"
#include "organ.h"
#include "tempo.h"
#include "pinDefinition.h"


void playSong(uint64_t song[100][2]);


int main(void) {
  //init for speaker
  SPEAKER_DDR |= (1 << SPEAKER);    
  //init for leds, outputs
  SPEAKER_DDR |= (1<<LED1);
  SPEAKER_DDR |= (1<<LED2);             
  uint8_t isBeginning = 1;
  uint8_t random = 251;
  while (1) {
    if (isBeginning){
    // Opening
    playNote(SILENCE,T1);
    playNote(Gx7,T2);
    playNote(Gx7,T8);
    playNote(Dx7,T8);
    playNote(Dx7,T8);
    playNote(Gx7,T8);
    playNote(Fx7,T16);
    playNote(E7,T16);
    playNote(Fx7,T8);
    playNote(Fx7,T2);
    playNote(SILENCE,T4);
    playNote(Gx7,T2);
    playNote(Gx7,T8);
    playNote(E7,T8);
    playNote(E7,T8);
    playNote(Gx7,T8);
    playNote(G7,T16);
    playNote(F7,T16);
    playNote(G7,T2);
    playNote(SILENCE,T4);
    playNote(SILENCE,T8);
    playNote(SILENCE,T1);
    playNote(Gx7,T4);
    playNote(Dx7,T4);
    playNote(SILENCE,T8);
    playNote(Gx7,T8);
    playNote(Gx7,T16);
    playNote(Ax7,T16);
    playNote(C8,T16);
    playNote(Cx8,T16);
    playNote(Dx8,T2);
    playNote(Dx8,T4);
    playNote(E8,T8);
    playNote(Fx8,T8);
    playNote(Gx8,T2);
    playNote(Gx8,T8);
    playNote(SILENCE,T16);
    playNote(Gx8,T16);
    playNote(Gx8,T8);
    playNote(Fx8,T16);
    playNote(E8,T16);
    playNote(Fx8,T8);
    playNote(Fx8,T16);
    playNote(E8,T16);
    playNote(Dx8,T2);
    playNote(Dx8,T4);
    playNote(Cx8,T8);
    playNote(Cx8,T16);
    playNote(Dx8,T16);
    playNote(E8,T2);
    playNote(Dx8,T8);
    playNote(Cx8,T8);
    playNote(B7,T8);
    playNote(B7,T16);
    playNote(Cx8,T16);
    playNote(Dx8,T2);
    playNote(Cx8,T8);
    playNote(B7,T8);
    playNote(Ax7,T8);
    playNote(Ax7,T16);
    playNote(C8,T16);
    playNote(D8,T2);
    playNote(F8,T4);
    playNote(Dx8,T1);
    //WINDMILL
    //LED TRANSITION BEGIN
    _delay_ms(500);
    SPEAKER_PORT^=(1<<LED1);
    _delay_ms(500);
    SPEAKER_PORT^=(1<<LED2);
    //LED TRANSITION END
    playNote(D7,T8);
    playNote(F7,T8);
    playNote(D8,T2);
    playNote(D7,T8);
    playNote(F7,T8);
    playNote(D8,T2);
    playNote(E8,T4T8);
    //playNote(E8,T8);
    playNote(F8,T8);
    playNote(E8,T8);
    playNote(F8,T8);
    playNote(E8,T8);
    playNote(C8,T8);
    playNote(A7,T2);
    playNote(A7,T4);
    playNote(D7,T4);
    playNote(F7,T8);
    playNote(G7,T8);
    playNote(A7,T2);
    playNote(A7,T4);
    playNote(A7,T4);
    playNote(D7,T4);
    playNote(F7,T8);
    playNote(G7,T8);
    playNote(E7,T2);
    playNote(E7,T4);
    playNote(D7,T8);
    playNote(F7,T8);
    playNote(D8,T2);
    playNote(D7,T8);
    playNote(F7,T8);
    playNote(D8,T2);
    playNote(E8,T4);
    playNote(E8,T8);
    playNote(F8,T8);
    playNote(E8,T8);
    playNote(F8,T8);
    playNote(E8,T8);
    playNote(C8,T8);
    playNote(A7,T2);
    playNote(A7,T4);
    playNote(D7,T4);
    playNote(F7,T8);
    playNote(G7,T8);
    playNote(A7,T2);
    playNote(A7,T4);
    playNote(D7,T4);
    playNote(D7,T8);
    //Temple of time
    //LED TRANSITION BEGIN
    _delay_ms(500);
    SPEAKER_PORT^=(1<<LED1);
    _delay_ms(500);
    SPEAKER_PORT^=(1<<LED2);
    //LED TRANSITION END
    playNote(A7,T4);
    playNote(D7,T2);
    playNote(F7,T4);
    playNote(A7,T4);
    playNote(D7,T2);
    playNote(F7,T4);
    playNote(A7,T8);
    playNote(C8,T8);
    playNote(B7,T4);
    playNote(G7,T4);
    playNote(F7,T8);
    playNote(G7,T8);
    playNote(A7,T4);
    playNote(D7,T4);
    playNote(C7,T8);
    playNote(E7,T8);
    playNote(D7,T2);
    //LED TRANSITION BEGIN
    _delay_ms(500);
    SPEAKER_PORT^=(1<<LED1);
    _delay_ms(500);
    SPEAKER_PORT^=(1<<LED2);
    //LED TRANSITION END
    //SARIA 
    playNote(F8,T8);
    playNote(A8,T8);
    playNote(B8,T4);
    playNote(F8,T8);
    playNote(A8,T8);
    playNote(B8,T4);
    playNote(F8,T8);
    playNote(A8,T8);
    playNote(B8,T8);
    playNote(E9,T8);
    playNote(D9,T4);
    playNote(B8,T8);
    playNote(C9,T8);
    playNote(B8,T8);
    playNote(G8,T8);
    playNote(E8,T2);
    playNote(E8,T8);
    playNote(D8,T8);
    playNote(E8,T8);
    playNote(G8,T8);
    playNote(E8,T2);
    playNote(SILENCE,T4);
    playNote(F8,T8);
    playNote(A8,T8);
    playNote(B8,T4);
    playNote(F8,T8);
    playNote(A8,T8);
    playNote(B8,T4);
    playNote(F8,T8);
    playNote(A8,T8);
    playNote(B8,T8);
    playNote(E9,T8);
    playNote(D9,T4);
    playNote(B8,T8);
    playNote(C9,T8);
    playNote(E9,T8);
    playNote(B8,T8);
    playNote(G8,T2);
    playNote(G8,T8);
    playNote(B8,T8);
    playNote(G8,T8);
    playNote(D8,T8);
    playNote(E8,T2);
    //happy birthday
    _delay_ms(1000);
    playNote(G8,T8);
    playNote(G8,T8);
    playNote(A8,T4);
    playNote(G8,T4);
    playNote(C9,T4);
    playNote(B8,T4);
    playNote(G8,T8);
    playNote(G8,T8);
    playNote(A8,T4);
    playNote(G8,T4);
    playNote(D9,T4);
    playNote(C9,T4);
    playNote(G8,T8);
    playNote(G8,T8);
    playNote(G9,T4);
    playNote(E9,T4);
    playNote(C9,T4);
    playNote(B8,T4);
    playNote(A8,T2);
    playNote(F9,T2);
    playNote(F9,T2);
    playNote(E9,T2);
    playNote(C9,T2);
    playNote(D9,T2);
    playNote(C9,2*T1);
   

    isBeginning=0;
    }
    else{
        //Flickering of light!
        random=(random*109+89)%251;
        if (random >=125)
        {
            SPEAKER_PORT |= (1<<LED1);
        }
        else{
            SPEAKER_PORT &= ~(1<<LED1);
        }
        _delay_ms(10);
        if (SPEAKER_PORT&(1<<LED1)){// LED1 is on
            SPEAKER_PORT&=~(1<<LED2); 
        }
        else{// LED1 is off 
            SPEAKER_PORT|=(1<<LED2);
        }
        _delay_ms(10);

    }

  }                                                 
  return 0;
}