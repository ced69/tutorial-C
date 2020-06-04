#include<stdio.h>
#include<stdlib.h>
#include "../include/menu.h"

int main()
{
	int choix = 0;
	choix = menu();
	

	switch(choix)
	{
		case 1 :
			printf("Vous avez pris le poulet\n");
			break;
		case 2 :
			printf("Vous avez choisi les concombres\n");
			break;
		case 3 :
			printf("Vous avez pris l'escalope de dinde\n");
			break;
		case 4 :
			printf("Vous avez choisi la surprise du Chef\n");
			break;
		default :
			printf("Vous avez fait un mauvais choix\n");	
			break;	
	}
	return 0;
}

