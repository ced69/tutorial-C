#include<stdio.h>
#include<stdlib.h>

int menu()
{
	int choix = 0;
		
	while (choix < 1 || choix > 4)
	{

		printf("Menu :\n");
		printf("1 : Poulet de dinde aux escargots rotis a la sauce bearnaise\n");
		printf("2 : Concombres sucres a la sauce de myrtlles enrobee de chocolat\n");
		printf("3 : Escalope de dinde et sa gelee au poivre vert\n");
		printf("4 : La suprise du Chef\n");
		printf("Votre choix ? ");
		scanf("%d", &choix);
		if (choix < 1 || choix > 4)
		{
			printf("Vous avez tape un numero qui n'est pas dans le menu !!\n");
		}

	}


	return choix;
}

int main(int argc, char *argv[])
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

