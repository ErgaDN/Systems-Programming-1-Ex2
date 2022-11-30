CC = gcc
FLAGS = -Wall -g
OBJECTS_MAIN = main.o


all: mains

mains: OBJECTS_MAIN my_mat.o
	$(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) my_mat.o


OBJECTS_MAIN: main.c my_mat.h
	$(CC) $(FLAGS) -c main.c -lm

my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -fPIC -c my_mat.c -lm


.PHONY: clean all

clean:
	rm -f *.o mains

