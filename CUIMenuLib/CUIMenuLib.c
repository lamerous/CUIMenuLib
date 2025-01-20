#include "CUIMenuLib.h"
#include "getch.h"

void clear_screen(){
	printf("\033[H\033[J");
}

void displayMenu(struct Menu menu){
	clear_screen();
	printf("%s%s%s",GREEN, menu.title, WHITE);
	for (int i = 0; i < menu.menuSize; i++){
		if (i == menu.selectedIndex){
			printf("%s> %s\n", GREEN, menu.menuItems[i]);
		}
		else{
			printf("  %s\n", menu.menuItems[i]);
		}
		printf("%s", WHITE);
	}
}

void updateMenu(struct Menu *menu){
    char ch = getch();
	if (ch == '\033'){ // Ожидание спец. символов
		getchar();  // Пропускаем символ "["
		switch (getch()){
			case 'A':
				if (menu->selectedIndex > 0){
					menu->selectedIndex--;
				}
				break;
			case 'B':
				if (menu->selectedIndex < menu->menuSize-1){
					menu->selectedIndex++;
				}
				break;
			// ...
		}
	}
	if (ch == '\n'){
		clear_screen();
		menu->taskStarters[menu->selectedIndex]();
	}
}
