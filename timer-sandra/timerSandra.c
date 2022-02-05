
#include <avr/io.h>
#include <util/delay.h>
#include "scale16.h"
#include "organ.h"
#include "tempo.h"
#include "pinDefinition.h"



int main(void) {
  //init for speaker
  SPEAKER_DDR |= (1 << SPEAKER);    
  //init for leds, outputs
  SPEAKER_DDR |= (1<<LED1);  

  // uint8_t sounding = 0;
  uint16_t seconds = 0;
  while (1) {
    while( seconds < 4 ){
      // ten minutes
      // flicker
      SPEAKER_PORT ^= (1<<LED1); 
      _delay_ms(1000);
      seconds+=1;
    }

    while (1)
    {
      playNote(C6,T64);
      playNote(Cx6,T64);
      playNote(D6,T64);
      playNote(Dx6,T64);
      playNote(E6,T64);
      playNote(F6,T64);
      playNote(Fx6,T64);
      playNote(G6,T64);
      playNote(Gx6,T64);
      playNote(A6,T64);
      playNote(Ax6,T64);
      playNote(B6,T64);
      playNote(C7,T64);
      playNote(Cx7,T64);
      playNote(D7,T64);
      playNote(Dx7,T64);
      playNote(E7,T64);
      playNote(C6,T64);
      playNote(Cx6,T64);
      playNote(D6,T64);
      playNote(Dx6,T64);
      playNote(E6,T64);
      playNote(F6,T64);
      playNote(Fx6,T64);
      playNote(G6,T64);
      playNote(Gx6,T64);
      playNote(A6,T64);
      playNote(Ax6,T64);
      playNote(B6,T64);
      playNote(C7,T64);
      playNote(Cx7,T64);
      playNote(D7,T64);
      playNote(Dx7,T64);
      playNote(E7,T64);
      playNote(C6,T64);
      playNote(Cx6,T64);
      playNote(D6,T64);
      playNote(Dx6,T64);
      playNote(E6,T64);
      playNote(F6,T64);
      playNote(Fx6,T64);
      playNote(G6,T64);
      playNote(Gx6,T64);
      playNote(A6,T64);
      playNote(Ax6,T64);
      playNote(B6,T64);
      playNote(C7,T64);
      playNote(Cx7,T64);
      playNote(D7,T64);
      playNote(Dx7,T64);
      playNote(E7,T64);
      playNote(F7,T64);
      playNote(Fx7,T64);
      playNote(G7,T64);
      playNote(Gx7,T64);
      playNote(A7,T64);
      playNote(Ax7,T64);
      playNote(B7,T64);
      playNote(C8,T64);
      playNote(Cx8,T64);
      playNote(D8,T64);
      playNote(Dx8,T64);
      playNote(E8,T64);
      playNote(F8,T64);
      playNote(Fx8,T64);
      playNote(G8,T64);
      playNote(Gx8,T64);
      playNote(A8,T64);
      playNote(Ax8,T64);
      playNote(B8,T64);
      playNote(C9,T64);
      playNote(Cx9,T64);
      playNote(D9,T64);
      playNote(Dx9,T64);
      playNote(E9,T64);
      playNote(F9,T64);
      playNote(Fx9,T64);
      playNote(G9,T64);
      playNote(Gx9,T64);
      playNote(A9,T64);
      playNote(Ax9,T64);
      playNote(B9,T64);
      for(int i=0; i<10; i++){
        playNote(Fx7,T64);
        playNote(G7,T64);
        playNote(Gx7,T64);
        playNote(A7,T64);
        playNote(Ax7,T64);
        playNote(B7,T64);
        playNote(C8,T64);
        playNote(Cx8,T64);
        playNote(D8,T64);
        playNote(Dx8,T64);
        playNote(E8,T64);
        playNote(F8,T64);
        playNote(Fx8,T64);
        playNote(G8,T64);
        playNote(Gx8,T64);
        playNote(A8,T64);
        playNote(Ax8,T64);
        playNote(B8,T64);
        playNote(C9,T64);
        playNote(Cx9,T64);
        playNote(D9,T64);
        playNote(Dx9,T64);
        playNote(E9,T64);
        playNote(F9,T64);
        playNote(Fx9,T64);
        playNote(G9,T64);
        playNote(Gx9,T64);
        playNote(A9,T64);
        playNote(Ax9,T64);
        playNote(B9,T64);
      }
      playNote(D8,T64);
      playNote(Dx8,T64);
      playNote(E8,T64);
      playNote(F8,T64);
      playNote(Fx8,T64);
      playNote(G8,T64);
      playNote(Gx8,T64);
      playNote(A8,T64);
      playNote(Ax8,T64);
      playNote(B8,T64);
      playNote(C9,T64);
      playNote(Cx9,T64);
      playNote(D8,T64);
      playNote(Dx8,T64);
      playNote(E8,T64);
      playNote(F8,T64);
      playNote(Fx8,T64);
      playNote(G8,T64);
      playNote(Gx8,T64);
      playNote(A8,T64);
      playNote(Ax8,T64);
      playNote(B8,T64);
      playNote(C9,T64);
      playNote(Cx9,T64);
      playNote(D8,T64);
      playNote(Dx8,T64);
      playNote(E8,T64);
      playNote(F8,T64);
      playNote(Fx8,T64);
      playNote(G8,T64);
      playNote(Gx8,T64);
      playNote(A8,T64);
      playNote(Ax8,T64);
      playNote(B8,T64);
      playNote(C9,T64);
      playNote(Cx9,T64);
      playNote(D8,T64);
      playNote(Dx8,T64);
      playNote(E8,T64);
      playNote(F8,T64);
      playNote(Fx8,T64);
      playNote(G8,T64);
      playNote(Gx8,T64);
      playNote(A8,T64);
      playNote(Ax8,T64);
      playNote(B8,T64);
      playNote(C9,T64);
      playNote(Cx9,T64);
    }  
   
  }                                                 
  return 0;
}