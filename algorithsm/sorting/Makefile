CC=gcc
CFLAGS=-Wall -Og
DEPS=sort.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

all: mergesort

mergesort:	mergesort.o
	$(CC) -o mergesort mergesort.o

# server: server.o
# 	$(CC) -o server server.o

clean:
	rm -rf *.o *.dsYM mergesort
