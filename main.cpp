#include "headers/includes.h"
#include "headers/structs.h"
#include "headers/prototypes.h"


int main(int argc, char *argv[])
{	
	char in;
	std::string currGroup = "groups";

	while(currGroup != "q")
	{
		if(currGroup == "groups")
		{
			system("clear");
			loadGroups();
			printGroupMenu();
			currGroup = groupSwitch(currGroup);
		}
		else
		{
			system("clear");
			loadTasks(currGroup);
			printMenu();
			currGroup = taskSwitch(currGroup);
		}
	}

	std::cout << argv[0] << std::endl;

	return 0;	
}
