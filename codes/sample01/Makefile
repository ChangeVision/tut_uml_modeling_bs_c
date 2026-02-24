# Makefile for Bowling Score System

CC = gcc
CFLAGS = -Wall -Wextra -std=c99 -pedantic -O2
TARGET = sample
OBJS = main.o sample.o

.PHONY: all clean run

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

main.o: main.c sample.h
	$(CC) $(CFLAGS) -c main.c

sample.o: sample.c sample.h
	$(CC) $(CFLAGS) -c sample.c

clean:
	rm -f $(TARGET) $(OBJS)

run: $(TARGET)
	./$(TARGET)
