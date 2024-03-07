CC=gcc
CFLAGS=-Wall -Wextra -pedantic

all: output output2 output3

output: fork-join.c
	$(CC) $(CFLAGS) -o output fork-join.c

output2: rendezvous.c
	$(CC) $(CFLAGS) -o output2 rendezvous.c

output3: barrier.c
	$(CC) $(CFLAGS) -o output3 barrier.c

clean:
	rm -f output output2 output3
