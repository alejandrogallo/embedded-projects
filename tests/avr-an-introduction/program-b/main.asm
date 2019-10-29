.nolist
#include <avr/io.h>
.list

#define temp r16
#define LEDPIN PB0
#define BUTTONPIN PB1

.section .text
.global init
rjmp init

init:
  sbi DDRB, LEDPIN

.global main
main:
  ldi temp, 0x01
  in r17, PORTB
  ori r17, 0x01
  out PORTB, temp
  rjmp main
