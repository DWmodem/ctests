#File: makefile

.SUFFIXES:
.SUFFIXES: .s .o .c .exe

CC = gcc
LIBS = 
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)
OBJS = power.exe

all: $(OBJS)

%.exe : %.c
	$(CC) $(LFLAGS) $< -o $@

clean:
	rm -f *.o *.exe
