# available parts: avrdude -p?
MCU = attiny13

# available programmers: avrdude -c?
PROGRAMMER_TYPE = usbasp

BAUD  = 9600UL

F_CPU = 1200000UL
F_CPU = 4000000
F_CPU = 9600000L
F_CPU = 8000000L

# Project name
TARGET = main

## Compilation options, type man avr-gcc if you're curious.
CPPFLAGS = -DF_CPU=$(F_CPU) -DBAUD=$(BAUD) -I.
CFLAGS += -Os -std=gnu99 -Wall
## Use short (8-bit) data types
CFLAGS += -funsigned-char -funsigned-bitfields -fpack-struct -fshort-enums
## Splits up object files per function
CFLAGS += -ffunction-sections -fdata-sections
LDFLAGS = -Wl,-Map,$(TARGET).map
## Optional, but often ends up with smaller code
LDFLAGS += -Wl,--gc-sections
LDFLAGS += -B$(realpath $(avrlibc)/avr/lib/avr25/tiny-stack)
## Relax shrinks code even more, but makes disassembly messy
## LDFLAGS += -Wl,--relax
## LDFLAGS += -Wl,-u,vfprintf -lprintf_flt -lm  ## for floating-point printf
## LDFLAGS += -Wl,-u,vfprintf -lprintf_min      ## for smaller printf

# Assembly flags
#ASMFLAGS ?= $(CFLAGS)
# c++ flags
#CXXFLAGS ?= $(CFLAGS)
