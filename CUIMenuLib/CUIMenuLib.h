#pragma once

#include <stdio.h>
#include "getch.h"

#define GREEN     "\033[0;35m"
#define RED       "\033[0;31m"
#define WHITE     "\033[0;37m"

struct Menu{
	const char *title;
	const char **menuItems;
	void (**taskStarters)();
	int menuSize, selectedIndex;	
};

void clear_screen();
void displayMenu(struct Menu menu);
void updateMenu(struct Menu *menu);

