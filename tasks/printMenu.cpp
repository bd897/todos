#include "../headers/includes.h"

#ifndef PRINTMENU
#define PRINTMENU

void printMenu()
{
	printf("\n");
	printf("** Type [a] to add a task \n");
	printf("** Type [d+#] to delete a task \n");
	printf("** Type [b] to go back to groups \n");
	printf("** Type [q] to quit todo list \n");
	printf("** If you add a task keep it between 5-15 characters. \n");
}

#endif
