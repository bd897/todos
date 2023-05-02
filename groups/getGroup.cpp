#include "../headers/includes.h"

#ifndef GETGROUP
#define GETGROUP

std::string getGroup(int index)
{
	std::ifstream myfile("data/groups.txt");
	int iter = 1;
	std::string line;
	std::string theLine;

	while( std::getline( myfile, line) )
	{
		if(iter == index){
		       	theLine = line;
			iter++;
		}
		else iter++;
	}
	return theLine;
}

#endif
