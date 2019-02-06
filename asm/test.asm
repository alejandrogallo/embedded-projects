ldi r24, 0xFF ; 255
ldi r25, 0x52 ; 82
ldi r26, 0x07 ; 7
subi  r24, 0x01 ; 1
sbci  r25, 0x00 ; 0
sbci  r26, 0x00 ; 0
brne  .-8       ; 0xa2 
rjmp  .+0       ; 0xac 
nop
