#include "../headers/includes.h"

#ifndef LOADGROUPS
#define LOADGROUPS

void loadGroups()
{
	std::string file = "data/groups.txt";
	
	std::ifstream myfile(file);
	
	int iter = 1;
	std::string line;

	if(myfile.is_open()){
		std::cout << "Current Task Groups: \n" << std::endl;
		while( std::getline( myfile, line) )
		{	
			std::cout << iter << " --> " << line << "\n" << std::endl;
			iter++;
		}
		myfile.close();
	}
	else
	{
		printf("Failed Opening Groups File.\n");
	}
}

#endif
