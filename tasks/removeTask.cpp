#include "../headers/includes.h"

#ifndef REMOVETASK
#define REMOVETASK

void removeTask(std::string currGroup, int index)
{
	std::string groupPath = "data/"+currGroup+".txt";
	std::ifstream inFile(groupPath);

	std::string donePath = "data/done"+currGroup+".txt";
	std::ofstream doneFile(donePath);

	std::ofstream tempFile("data/temp.txt");;
        std::string line;
        
	int iter = 1;
	
        while( getline( inFile, line ) )
        {
                if(iter != index)
                {
                        tempFile << line << std::endl;
                }
		else{
			doneFile << line;
		}
		iter++;
        }

        const char* old = groupPath.c_str();
	remove(old);
	rename("data/temp.txt", old);
	
	tempFile.close();
        inFile.close();
	doneFile.close();
}

#endif
