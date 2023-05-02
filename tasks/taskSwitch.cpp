#include "../headers/includes.h"
#include "../headers/prototypes.h"

#ifndef TASKSWITCH
#define TASKSWITCH

std::string taskSwitch(std::string currGroup)
{
	std::string in;
	std::cin >> in; 

	char caseIN = in[0];
	int i;

	switch(caseIN)
	{
		case 'a':
			addTask(currGroup);
			break;
		case 'd':
			i = stoi(in.substr(1));
			removeTask(currGroup, i);
			break;
		case 'b':
			currGroup = "groups";
			break;
		case 'q':
			currGroup = "q";
			break;
	}
	return currGroup;
}

#endif
