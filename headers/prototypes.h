#include "includes.h"

#ifndef PROTOTYPES_H
#define PROTOTYPES_H

void loadTasks(std::string group);
void loadGroups();
void printGroupMenu();
void printMenu();
void removeGroup(int index);
std::string getGroup(int index);
std::string groupSwitch(std::string currGroup);
std::string taskSwitch(std::string currGroup);
void addTask(std::string currGroup);
void removeTask(std::string currGroup, int index);
void addGroup();

#endif
