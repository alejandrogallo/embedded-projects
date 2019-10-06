#define __SFR_OFFSET 0
.nolist
#include <avr/io.h>
#include <avr/interrupt.h>
.list

.global TIM0_COMPA_vect
TIM0_COMPA_vect:
  in r18, PORTB
  ldi r19, 0b0000001
  eor r18, r19
  out PORTB, r18
  reti

.global main
main:
  ser r16
  out DDRB, r16
  clr r16
  out PORTB, r16

  in r16, TCCR0A
  ori r16, _BV(WGM01)
  out TCCR0A, r16 ; set system clock prescaler for counter

  in r16, TCCR0B
  ori r16, 0b00000101
  out TCCR0B, r16 ; set system clock prescaler for counter

  ;ser r16
  ;out OCR0B, r16

  ldi r16, 0xff
  out OCR0A, r16

  in r16, TIMSK0
  ori r16, (1<<OCIE0A)
  ;ori r16, (1<<OCIE0B)
  out TIMSK0, r16

  sei


  rjmp .-2

;.global main
;main:
  ;rjmp init

;loop:
  ;in r16, TCNT0
  ;out PORTB, r16
  ;in r16, TCNT0
  ;cpi r16, 0xff
  ;breq light
  ;rjmp loop

;;ldi r16, 0xff
;;out TCNT0, r16

;rjmp main

;.global main
;main:
;in r16, TCNT0
;cpi r16, 0xff
;breq light

light:

light2:

;TIM0_COMPB_vect:
  ;in r16, PORTB
  ;ldi r17, 1
  ;eor r16, r17
  ;out PORTB, r16
  ;rjmp loop
  ;reti
