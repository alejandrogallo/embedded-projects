MCU = attiny85
MCU = attiny13
MCU = attiny45


F_CPU = 1200000UL
F_CPU = 4000000
F_CPU = 9600000L
F_CPU = 8000000L

CFLAGS += -I../ -L../lib/

TARGET = main

SOURCES = main.c ../lib/light_ws2812.c
