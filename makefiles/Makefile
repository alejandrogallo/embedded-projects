-include config.mk

MCU   ?= attiny85
F_CPU ?= 9600000UL

# Also try BAUD = 19200 or 38400 if you're feeling lucky.
BAUD  ?= 9600UL

## A directory for common include files and the simple USART library.
## If you move either the current folder or the Library folder, you'll
##  need to change this path to match.
LIBDIR = ./
PROGRAMMER_TYPE ?= usbasp
# extra arguments to avrdude: baud rate, chip type, -F flag, etc.
PROGRAMMER_ARGS =

## The name of your project (without the .c)
TARGET ?= $(lastword $(subst /, ,$(CURDIR)))

CXX = avr-g++
CC = avr-gcc
OBJCOPY = avr-objcopy
OBJDUMP = avr-objdump
AVRSIZE = avr-size
AVRDUDE = avrdude


# Object files: will find all .c/.h files in current directory
#  and in LIBDIR.  If you have any other (sub-)directories with code,
#  you can add them in to SOURCES below in the wildcard statement.
SOURCES ?= $(wildcard *.c *.cpp *.cxx)
OBJECTS = $(SOURCES:.c=.o) $(SOURCES:.cxx=.o) $(SOURCES:.cpp=.o)
HEADERS = $(SOURCES:.c=.h)

## Compilation options, type man avr-gcc if you're curious.
CPPFLAGS = -DF_CPU=$(F_CPU) -DBAUD=$(BAUD) -I. -I$(LIBDIR)
CFLAGS += -Os -g -std=gnu99 -Wall
## Use short (8-bit) data types
CFLAGS += -funsigned-char -funsigned-bitfields -fpack-struct -fshort-enums
## Splits up object files per function
CFLAGS += -ffunction-sections -fdata-sections
LDFLAGS = -Wl,-Map,$(TARGET).map
## Optional, but often ends up with smaller code
LDFLAGS += -Wl,--gc-sections
## Relax shrinks code even more, but makes disassembly messy
## LDFLAGS += -Wl,--relax
## LDFLAGS += -Wl,-u,vfprintf -lprintf_flt -lm  ## for floating-point printf
## LDFLAGS += -Wl,-u,vfprintf -lprintf_min      ## for smaller printf

TARGET_ARCH = -mmcu=$(MCU)

## Explicit pattern rules:
##  To make .o files from .c files
%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) $(CPPFLAGS) $(TARGET_ARCH) -c -o $@ $<;

$(TARGET).elf: $(OBJECTS)
	$(CC) $(LDFLAGS) $(TARGET_ARCH) $^ $(LDLIBS) -o $@

%.hex: %.elf
	$(OBJCOPY) -j .text -j .data -O ihex $< $@

%.eeprom: %.elf
	$(OBJCOPY) -j .eeprom --change-section-lma .eeprom=0 -O ihex $< $@

%.lst: %.elf
	$(OBJDUMP) -S $< > $@

.PHONY: all disassemble disasm eeprom size clean squeaky_clean flash fuses

all: $(TARGET).hex ## Hex file

# This creates approximate assembly-language equivalent of your code.
# Useful for debugging time-sensitive bits,
# or making sure the compiler does what you want.
disassemble: $(TARGET).lst ## Create listing file from .elf

size:  $(TARGET).elf ## Show how big the resulting program is
	$(AVRSIZE) -C --mcu=$(MCU) $(TARGET).elf

clean: ## Clean project files
	-@rm -vf $(wildcard $(TARGET).elf $(TARGET).hex $(TARGET).obj \
		$(TARGET).o $(TARGET).d $(TARGET).eep $(TARGET).lst \
		$(TARGET).lss $(TARGET).sym $(TARGET).map $(TARGET)~ \
		$(TARGET).eeprom)

##########------------------------------------------------------##########
##########              Programmer-specific details             ##########
##########           Flashing code to AVR using avrdude         ##########
##########------------------------------------------------------##########

flash: $(TARGET).hex ## Create hex file and program the device
	$(AVRDUDE) -c $(PROGRAMMER_TYPE) -p $(MCU) $(PROGRAMMER_ARGS) -U flash:w:$<

flash_eeprom: $(TARGET).eeprom ## Flash the eeprom
	$(AVRDUDE) -c $(PROGRAMMER_TYPE) -p $(MCU) $(PROGRAMMER_ARGS) -U eeprom:w:$<

avrdude_terminal: ## ??
	$(AVRDUDE) -c $(PROGRAMMER_TYPE) -p $(MCU) $(PROGRAMMER_ARGS) -nt


##########------------------------------------------------------##########
##########       Fuse settings and suitable defaults            ##########
##########------------------------------------------------------##########

## Mega 48, 88, 168, 328 default values
LFUSE = 0x62
HFUSE = 0xdf
EFUSE = 0x00

## Generic
FUSE_STRING = -U lfuse:w:$(LFUSE):m -U hfuse:w:$(HFUSE):m -U efuse:w:$(EFUSE):m

fuses: ## Set fuses
	$(AVRDUDE) -c $(PROGRAMMER_TYPE) -p $(MCU) $(PROGRAMMER_ARGS) $(FUSE_STRING)

fuses_show: ## Show fuses
	$(AVRDUDE) -c $(PROGRAMMER_TYPE) -p $(MCU) $(PROGRAMMER_ARGS) -nv

## Called with no extra definitions, sets to defaults
fuses_set_default: FUSE_STRING=-U lfuse:w:$(LFUSE):m -U hfuse:w:$(HFUSE):m -U efuse:w:$(EFUSE):m
fuses_set_default: fuses ## Set default fuses

## Note: can also be set in firmware for modern chips
fuses_set_fast: LFUSE = 0xE2
fuses_set_fast: FUSE_STRING = -U lfuse:w:$(LFUSE):m
fuses_set_fast: fuses ## Set the fuse byte for full-speed mode

fuses_set_eeprom_save: HFUSE = 0xD7
fuses_set_eeprom_save: FUSE_STRING = -U hfuse:w:$(HFUSE):m
fuses_set_eeprom_save: fuses ## Set the EESAVE fuse byte to preserve EEPROM across flashes

fuses_clear_eeprom_save: FUSE_STRING = -U hfuse:w:$(HFUSE):m
fuses_clear_eeprom_save: fuses ## Clear the EESAVE fuse byte

config.mk: ## Create a test config.mk file
	@echo "Creating a default $@"
	$(file >$@,$(raw_config))

print-parts: ## Print possible part names with avrdude
	$(AVRDUDE) -p ? 2>&1 | less

print-programmer: ## Print possible programmer names with avrdude
	$(AVRDUDE) -c ? 2>&1 | less

tags: ## Create tags with avr headers
	ctags -R /usr/lib/avr/include/ .

help: ## Prints help for targets with comments
	@awk -F ":.*## *" \
		'/^\S.*:/{if ($$2) print "\x1b[32m",$$1,"\x1b[0m","::::",$$2 }' \
		$(MAKEFILE_LIST) | \
	column -t -s "::::"

define raw_config
MCU = attiny85
MCU = attiny45
MCU = attiny13

PROGRAMMER_TYPE = usbasp

F_CPU = 1200000UL
F_CPU = 4000000
F_CPU = 9600000L
F_CPU = 8000000L

CFLAGS += -I../ -L../lib/

# Project name
TARGET = main

SOURCES = main.c ../lib/light_ws2812.c
endef
