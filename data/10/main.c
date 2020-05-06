#include<stdio.h>
#include<stdlib.h>

int main (int argc, char *argv[])
{
	int choixMenu;
	
	printf("===Menu===\n\n");
	printf("1. Royal Cheese\n");
	printf("2. Mc Deluxe\n");
	printf("3. Mc Bacon\n");
	printf("4. Big Mac\n");
	printf("5. Nuggets x 12\n");
	printf("Votre Choix ?\n");
	scanf("%d", &choixMenu);
	
	printf("\n");

	
	
	switch (choixMenu)
	{
		case 1:
			printf("Vous avez choisi le Royal Cheese. Bon choix !`\n");
			break;
		case 2:
			printf("Vous avez choisi le Mc Deluxe, pas le top !!\n");
			break; 
		case 3:
			printf("Vous avez choisi le Mc Bacon, vraiment bon !\n");
			break;
		case 4:
			printf("Vous avez choisi le Big Mac, faut essayer avec du bacon !!\n");
			break;
		case 5:
			printf("Des nuggets, je vous conseille la sauce BBQ\n");
			break;
		default:
			printf("Vous n'avez pas rentre un nom correct, vous mangerez vos doigts\n");	    
	}

	printf("\n \n");

	return 0;
}


