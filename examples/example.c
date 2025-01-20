#include "../CUIMenuLib/CUIMenuLib.h"

#define MENU_ITEMS 3

int run_menu = 1;

void menu1(){
	printf("Menu1\n");
	getch();
}

void menu2(){
	printf("Menu2\n");
	getch();
}

void quit(){
	run_menu = 0;
}

int main(){
	struct Menu menu;

	const char *menuItems[] = {"Menu1", "Menu2", "Quit"};
	void (*funcs[MENU_ITEMS])() = {menu1, menu2, quit};

	menu.title = "=== TEST MENU ===\n";
	menu.menuItems = menuItems;
	menu.taskStarters = funcs;
	menu.menuSize = MENU_ITEMS;
	menu.selectedIndex = 0;

	while (run_menu){
		displayMenu(menu);
		updateMenu(&menu);
	}
}
