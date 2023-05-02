CC = g++
INCDIRS = -I/usr/include
LIBS = -L./groups -lgroups_mylib -lm -L./tasks -ltasks_mylib -lm
HEADERS = headers/includes.h headers/structs.h headers/prototypes.h

all: todos 

todos: main.o groups tasks
	$(CC) main.o -o todos $(INCDIRS) $(LIBS)

main.o: main.cpp $(HEADERS)
	$(CC) main.cpp -c $(INCDIRS)

groups:
	cd groups && $(MAKE)

tasks:
	cd tasks && $(MAKE)

clean: 
	rm *.o

pristine:
	rm *.o
	test -f todos && rm todos
	cd groups && $(MAKE) pristine
	cd tasks && $(MAKE) pristine

.PHONY: groups tasks
