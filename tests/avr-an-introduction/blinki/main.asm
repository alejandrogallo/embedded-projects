#define __SFR_OFFSET 0
.nolist
#include <avr/io.h>
.list

#define temp r16

;.global init
;rjmp init

.global main
main:
ldi r16, 0b11111
in r17, DDRB
or r17, r16
out DDRB, r17

in r17, PORTB
or r17, r16
out PORTB, r17
rjmp light

.global light
light:
push r16
push r17
in r16, PORTB
ldi r17, 1
add r16, r17
out PORTB, r16
pop r17
pop r16
rjmp main



/*
init:
  ldi temp, (1<<PORTB0)
  in r17, DDRB
  or temp, r17
  out DDRB, temp
#warning PORTB is not
  ;sbi PORTB, 0
  rjmp main

.global main
main:
  ldi temp, (1<<PORTB0)
  in r17, PORTB
  eor temp, r17
  out PORTB, temp
  rjmp main
*/
