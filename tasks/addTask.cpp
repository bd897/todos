#include "../headers/includes.h"

#ifndef ADDTASK
#define ADDTASK

void addTask(std::string currGroup)
{
	// Open File
	std::string path = "data/"+currGroup+".txt";
	std::ofstream outfile(path, std::ios::out | std::ios::app);

	// Get Task
	std::string description;
	std::string date;
	std::cin.ignore();

	std::cout << "Add a description: ";
	std::getline(std::cin, description);
	
	std::cout << "Add a date: ";
	std::getline(std::cin, date);

	// Write task to file and close it
	outfile << description << "\t [" << date << "]" << std::endl;
	outfile.close();

	std::cout << "Task Added to" << currGroup << ". \n" << std::endl;

}

#endif
