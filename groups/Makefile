CC = g++
INCDIRS = -I/usr/include
LIBS =
HEADERS = ../headers/includes.h ../headers/structs.h ../headers/prototypes.h
OBJECTS = loadGroups.o printGroupMenu.o getGroup.o removeGroup.o groupSwitch.o addGroup.o

all: groups

loadGroups.o: loadGroups.cpp $(HEADERS)
	$(CC) loadGroups.cpp -c $(INCDIRS)

printGroupMenu.o: printGroupMenu.cpp $(HEADERS)
	$(CC) printGroupMenu.cpp -c $(INCDIRS)

getGroup.o: getGroup.cpp $(HEADERS)
	$(CC) getGroup.cpp -c $(INCDIRS)

removeGroup.o: removeGroup.cpp $(HEADERS)
	$(CC) removeGroup.cpp -c $(INCDIRS)

groupSwitch.o: groupSwitch.cpp $(HEADERS)
	$(CC) groupSwitch.cpp -c $(INCDIRS)

addGroup.o: addGroup.cpp $(HEADERS)
	$(CC) addGroup.cpp -c $(INCDIRS)

groups: $(OBJECTS)
	ar -rc libgroups_mylib.a $(OBJECTS)
	ranlib libgroups_mylib.a

clean:
	rm *.o

pristine:
	rm *.o
	rm libgroups_mylib.a

