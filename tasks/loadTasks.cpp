#include "../headers/includes.h"
#include <sstream>

#ifndef LOADTASKS
#define LOADTASKS

void loadTasks(std::string group)
{
	std::string file = "data/"+ group + ".txt";
	
	std::ifstream myfile(file);
	
	int iter = 1;
	std::string line, str;

	int i=0;

	if(myfile.is_open())
	{
		std::cout << "Tasks from group: " << group << "\n" << std::endl;	
		std::cout << "\t" << "   "<< "Description\t" << "Date Added\t" << "Date Due\t" << "\n" << std::endl;
	
		while( std::getline( myfile, line) )
		{	
			std::stringstream ss(line); 
			
			std::cout << "\t" << iter << ". ";
			while( std::getline( ss, str, '\t') )
			{
				std::stringstream ss(str);
				std::cout << str << "\t";
			}
			std::cout << std::endl;
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
