#include "../headers/includes.h"

#ifndef ADDGROUP
#define ADDGROUP

void addGroup()
{
	// Get Group Name
	std::string groupName;
	std::cin.ignore();
	std::cout << "What is the name of the Group you would like to add?";
	std::getline(std::cin, groupName);

	// Open Group File and add name
	std::string pathAllGroups = "data/groups.txt";
	std::ofstream groupsFile(pathAllGroups, std::ios::out | std::ios::app); 
	groupsFile << groupName << std::endl;
	groupsFile.close();

	// Create Text File With Name
        std::string pathNewGroup  = "data/" + groupName + ".txt";
	std::ofstream newGroup(pathNewGroup);
	newGroup.close();
}

#endif
