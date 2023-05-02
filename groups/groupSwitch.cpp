#include "../headers/includes.h"
#include "../headers/prototypes.h"

#ifndef GROUPSWITCH
#define GROUPSWITCH

std::string groupSwitch(std::string currGroup)
{	
	std::string in;
	std::cin >> in;
	
	char caseIN = in[0];
	int i;

	switch(caseIN)
	{
		case 'e':
			i= stoi(in.substr(1));
			currGroup = getGroup(i);
			break;
		case 'a':
			addGroup();
			break;
		case 'd':
			i = stoi(in.substr(1));
			removeGroup(i);
			break;
		case 'q':
			currGroup = "q";
			break;
	}
	return currGroup;
}

#endif
