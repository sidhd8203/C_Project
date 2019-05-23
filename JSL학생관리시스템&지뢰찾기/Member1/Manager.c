#include"Connect.h"

int main() {	
	
	
	int menu = 0;


	while (1) {
		showMenu();
		printf("¸Þ´º > ");
		scanf("%d", &menu);

		switch (menu) {
		case 1: addMember();
			break;
		case 2: deleteMember();
			break;
		case 3: change();
			break;
		case 4: searchPerson();
			break;
		case 5: grade();
			break;
		case 6: showAll();
			break;
		case 7: 
			return 0;
		}
	}

	return 0;
}