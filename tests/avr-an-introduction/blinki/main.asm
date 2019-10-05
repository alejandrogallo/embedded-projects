#define __SFR_OFFSET 0
.nolist
#include <avr/io.h>
.list

#define temp r16

.global setup
setup:
in r16, TCCR0
ldi r16, 1
out TCCR0A, r16
rjmp main

.global main
main:
sei
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

TIM0_COMPA:
in r16, PORTB
andi r16, 0x00

TIM0_COMPB:
in r16, PORTB
andi r16, 0x00
