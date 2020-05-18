#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main (int argc, char *argv[])

{
	int nombreMystere = 0, nombreEntre = 0;
	const int MAX = 100, MIN = 1;

	// Generation du nombre aleatoire
	
	srand(time(NULL));
	nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

	/* La boucle du propgramme. Elle se répète tant que l'utilisateur n'a pas trouvé le nombre mystere */

	do
	{
		//On demande le nombre
		printf("Quel est le nombre ?\n");
		scanf("%d", &nombreEntre );

		//On compare le nombre entré avec le nombre mustère

		if (nombreMystere > nombreEntre)
			printf("C'est plus !\n\n");
		else if (nombreMystere < nombreEntre)
			printf("C'est moins !\n\n");
		else
			printf("Bravo vous avez trouvé le nombre mystere !!\n\n");
	} while (nombreEntre != nombreMystere);

	return 0;
}


