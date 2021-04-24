-include config.mk

MCU   ?= attiny85
F_CPU ?= 9600000UL

# Also try BAUD = 19200 or 38400 if you're feeling lucky.
BAUD  ?= 9600UL

PROGRAMMER_TYPE ?= usbasp
# extra arguments to avrdude: baud rate, chip type, -F flag, etc.
PROGRAMMER_ARGS =

## The name of your project
TARGET ?= $(lastword $(subst /, ,$(CURDIR)))

CXX = avr-g++
CC = avr-gcc
AS = avr-gcc -xassembler-with-cpp
OBJCOPY = avr-objcopy
OBJDUMP = avr-objdump
AVRSIZE = avr-size
AVRDUDE = avrdude

SOURCES ?= $(wildcard *.asm *.c *.cpp *.cxx)
HEADERS ?= $(wildcard *.h *.hpp *.hxx)
OBJECTS = $(patsubst %.asm,%.o,$(patsubst %.cpp,%.o,$(SOURCES:.c=.o)))
DEPENDS = $(patsubst %.o,%.d,$(OBJECTS))

TARGET_ARCH = -mmcu=$(MCU)

all: $(TARGET).hex ## Hex file

## Explicit pattern rules:

define _print_what_is_done
@echo -e '\x1b[32m$< ==> $@\x1b[0m'
endef

%.d: %.c
	$(_print_what_is_done)
	$(CC) -M $< > $@

%.d: %.cxx
	$(_print_what_is_done)
	$(CXX) -M $< > $@

%.d: %.asm
	$(_print_what_is_done)
	$(AS) -M $< > $@

%.o: %.c
	$(_print_what_is_done)
	$(CC) $(CFLAGS) $(CPPFLAGS) $(TARGET_ARCH) -c -o $@ $<;

%.o: %.cxx
	$(_print_what_is_done)
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) $(TARGET_ARCH) -c -o $@ $<;

%.o: %.asm
	$(_print_what_is_done)
	$(AS) $(ASMFLAGS) $(CPPFLAGS) $(TARGET_ARCH) -c -o $@ $<;

$(TARGET).elf: $(eval include $(DEPENDS))
$(TARGET).elf: $(OBJECTS)
	$(CC) $(LDFLAGS) $(TARGET_ARCH) $^ $(LDLIBS) -o $@

%.hex: %.elf
	$(OBJCOPY) -j .text -j .data -O ihex $< $@

%.eeprom: %.elf
	$(OBJCOPY) -j .eeprom --change-section-lma .eeprom=0 -O ihex $< $@

%.lst: %.elf
	$(OBJDUMP) -S $< > $@

.PHONY: all disassemble disasm eeprom size clean squeaky_clean flash fuses

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
		$(TARGET).eeprom $(OBJECTS) $(DEPENDS))

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

fuses-show: ## Show fuses
	$(AVRDUDE) -c $(PROGRAMMER_TYPE) -p $(MCU) $(PROGRAMMER_ARGS) -nv 2>&1

## Called with no extra definitions, sets to defaults
fuses-set_default: FUSE_STRING=-U lfuse:w:$(LFUSE):m -U hfuse:w:$(HFUSE):m -U efuse:w:$(EFUSE):m
fuses-set_default: fuses ## Set default fuses

## Note: can also be set in firmware for modern chips
fuses-set_fast: LFUSE = 0xE2
fuses-set_fast: FUSE_STRING = -U lfuse:w:$(LFUSE):m
fuses-set_fast: fuses ## Set the fuse byte for full-speed mode

fuses-set_eeprom_save: HFUSE = 0xD7
fuses-set_eeprom_save: FUSE_STRING = -U hfuse:w:$(HFUSE):m
fuses-set_eeprom_save: fuses ## Set the EESAVE fuse byte to preserve EEPROM across flashes

fuses-clear_eeprom_save: FUSE_STRING = -U hfuse:w:$(HFUSE):m
fuses-clear_eeprom_save: fuses ## Clear the EESAVE fuse byte

config.mk: ## Create a test config.mk file
	@echo "Creating a default $@"
	$(file >$@,$(raw_config))

print-parts: ## Print possible part names with avrdude
	$(AVRDUDE) -p ? 2>&1 | less

print-programmer: ## Print possible programmer names with avrdude
	$(AVRDUDE) -c ? 2>&1 | less

tags: $(DEPENDS) ## Create tags with avr headers
	ctags -R `sed "s/.*://; s/[\]\s*$$//g" $<`

help: ## Prints help for targets with comments
	@awk -F ":.*## *" \
		'/^\S.*:/{if ($$2) print "\x1b[32m",$$1,"\x1b[0m","::::\x1b[35m",$$2,"\x1b[0m" }' \
		$(MAKEFILE_LIST) | \
	column -t -s "::::"

define raw_config
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
CPPFLAGS = -DF_CPU=$$(F_CPU) -DBAUD=$$(BAUD) -I.
CFLAGS += -Os -std=gnu99 -Wall
## Use short (8-bit) data types
CFLAGS += -funsigned-char -funsigned-bitfields -fpack-struct -fshort-enums
## Splits up object files per function
CFLAGS += -ffunction-sections -fdata-sections
LDFLAGS = -Wl,-Map,$$(TARGET).map
## Optional, but often ends up with smaller code
LDFLAGS += -Wl,--gc-sections
## Relax shrinks code even more, but makes disassembly messy
## LDFLAGS += -Wl,--relax
## LDFLAGS += -Wl,-u,vfprintf -lprintf_flt -lm  ## for floating-point printf
## LDFLAGS += -Wl,-u,vfprintf -lprintf_min      ## for smaller printf

# Assembly flags
#ASMFLAGS ?= $$(CFLAGS)
# c++ flags
#CXXFLAGS ?= $$(CFLAGS)
endef
