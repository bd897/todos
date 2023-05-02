CC = g++
INCDIRS = -I/usr/include
LIBS =
HEADERS = ../headers/includes.h ../headers/structs.h ../headers/prototypes.h
OBJECTS = loadTasks.o printMenu.o taskSwitch.o addTask.o removeTask.o 

all: tasks

loadTasks.o: loadTasks.cpp $(HEADERS)
	$(CC) loadTasks.cpp -c $(INCDIRS)

printMenu.o: printMenu.cpp $(HEADERS)
	$(CC) printMenu.cpp -c $(INCDIRS)

taskSwitch.o: taskSwitch.cpp $(HEADERS)
	$(CC) taskSwitch.cpp -c $(INCDIRS)

addTask.o: addTask.cpp $(HEADERS)
	$(CC) addTask.cpp -c $(INCDIRS)

removeTask.o: removeTask.cpp $(HEADERS)
	$(CC) removeTask.cpp -c $(INCDIRS)

tasks: $(OBJECTS)
	ar -rc libtasks_mylib.a $(OBJECTS)
	ranlib libtasks_mylib.a

clean:
	rm *.o

pristine:
	rm *.o
	rm libtasks_mylib.a
