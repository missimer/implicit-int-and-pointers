.PHONY: all clean

CFLAGS=-Wall
CC=gcc

all: test good.s bad.s

test: main.o my_struct.o
	$(CC) $(CFLAGS) $^ -o $@

main.o: main.c my_struct.h
	$(CC) $(CFLAGS) -c $< -o $@

my_struct.o: my_struct.c my_struct.h
	$(CC) $(CFLAGS) -c $< -o $@

good.s: main.c my_struct.h
	$(CC) $(CFLAGS) -DINCLUDE_PROTOTYPE -c $< -S -o $@

bad.s: main.c my_struct.h
	$(CC) $(CFLAGS) -c $< -S -o $@

clean:
	rm -rf *.o test *~ good.s bad.s
