CC = gcc
FLAGS = -Wall -g
AR = ar
OBJECTS_MAIN = main.o
MAIN = arrayMemoryLeak


all: connections libmy_mat.a

connections: $(OBJECTS_MAIN) libmy_mat.a
	$(CC) $(FLAGS) -o connections $(OBJECTS_MAIN) libmy_mat.a -lm

libmy_mat.a: my_mat.o 
	$(AR) -rsc libmy_mat.a my_mat.o


OBJECTS_MAIN: main.c my_mat.h
	$(CC) $(FLAGS) -c main.c -lm

my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -fPIC -c my_mat.c -lm

valgrind:
	valgrind --leak-check=full ./$(MAIN)


.PHONY: clean all

clean:
	rm -f *.o mains

