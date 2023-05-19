#include "../headers/includes.h"

#ifndef ADDTASK
#define ADDTASK

void addTask(std::string currGroup)
{
	
	// Get and format date
	time_t rawtime;
	struct tm* timeinfo;	
	char buffer[80];
	time(&rawtime);
	timeinfo = localtime(&rawtime);
	strftime(buffer,sizeof(buffer),"%m/%d/%y", timeinfo);
	std::string str(buffer);

	// Open File
	std::string path = "data/"+currGroup+".txt";
	std::ofstream outfile(path, std::ios::out | std::ios::app);

	// Get Task
	std::string description;
	std::string date;
	std::cin.ignore();

	std::cout << "Add a description: ";
	std::getline(std::cin, description);
	
	std::cout << "Add when it is due: ";
	std::getline(std::cin, date);

	//   Write task to file and close it   
	//					
	//	name whenAdded whenDue		
	//				

	outfile << description << "\t[" << str << "]" << "\t[" << date << "]" << std::endl;
	outfile.close();
	std::cout << "Task Added to" << currGroup << ". \n" << std::endl;
}

#endif
