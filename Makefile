CC = gcc
CFLAGS = -O0 -Wall
EXECUTABLE = main_optimal


default: phonebook.o
	$(CC) $(CFLAGS) phonebook.o smaz.c main_optimal.c -o main_optimal

%.o: %.c
	$(CC) -c $(CFLAGS) -o $@ $<

clean:
	rm -f $(EXECUTABLE) *.o perf.*

