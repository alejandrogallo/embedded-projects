#fuses="-U lfuse:w:0x6a:m -U hfuse:w:0xff:m"
#avrdude -c usbasp -p attiny13 $fuses && make flash

fuses="-U lfuse:w:0x76:m -U hfuse:w:0xff:m"
avrdude -F -c usbasp -p attiny13 $fuses && make flash

#fuses="-U lfuse:w:0x7f:m -U hfuse:w:0xff:m"
#avrdude -c usbasp -p attiny13 $fuses && make flash
