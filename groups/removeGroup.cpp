#include "../headers/includes.h"

#ifndef REMOVEGROUP
#define REMOVEGROUP

void removeGroup(int index)
{
	std::ifstream infile("data/groups.txt");
	std::ofstream outfile("data/temp.txt");
	std::string line;
	int iter = 1;

	while( getline( infile, line ) )
	{
		if(iter != index)
		{
			outfile << line << std::endl;
		}
		iter++;
	}
	infile.close();
	outfile.close();

	const char *p = "data/groups.txt";
	remove(p);
	rename("data/temp.txt", p);
}

#endif
