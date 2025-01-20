#pragma once

#include <stdio.h>
#include "getch.h"

#define GREEN     "\033[0;35m"
#define RED       "\033[0;31m"
#define WHITE     "\033[0;37m"

struct Menu{
	const char *title;
	const char *condition;
	const char **menuItems;
	void (**taskStarters)();
	int menuSize, selectedIndex, showCondition;	
};

// Структура только для 7-ой лабораторной
struct Data{
	int *array;
	int **matrix;
	char *str, *str2;
	char **str_arr;

	int array_len;
	int rows, cols;
	int str_len, str2_len;
	int str_arr_len;

	int n1, n2;
	int flag1;
	int run_menu;
};

void clear_screen();
void displayMenu(struct Menu menu);
void updateMenu(struct Menu *menu, struct Data *data);

