#include "../headers/includes.h"

#ifndef LOADTASKS
#define LOADTASKS

void loadTasks(std::string group)
{
	std::string file = "data/"+ group + ".txt";
	
	std::ifstream myfile(file);
	
	int iter = 1;
	std::string line;

	if(myfile.is_open()){
		std::cout << "Tasks from group: " << group << "\n" << std::endl;
		while( std::getline( myfile, line) )
		{	
			std::cout << "\t" << iter << "--> " << line << "\n" << std::endl;
			iter++;
		}
		myfile.close();
	}
	else
	{
		printf("This group does not exist.\n");
	}
}

#endif
