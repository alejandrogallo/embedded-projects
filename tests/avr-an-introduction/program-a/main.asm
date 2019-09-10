.nolist
#include <avr/io.h>
.list

#define temp r16

.section .text
.global init
rjmp init

init:
  ldi temp, 0x00
  out DDRB, temp

.global main
main:
  ldi temp, 0x01
  in r17, PORTB
  or temp, r17
  out PORTB, temp
  rjmp main
