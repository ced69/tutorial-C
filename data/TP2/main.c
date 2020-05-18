#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>

int main( int argc, char *argv[])
{
	bool found = false;
	int nombreMystere = 0;
	int nombreEntre = 0;
	const int MAX = 100, MIN = 1;
	int compteur = 0;

	// Génération du nombre aléqtoire

	srand(time(NULL));
	nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

	// On demande un nombre


	while (found == false)
	{	
		printf("Quel est le chiffre mystere ?\n\n");
		scanf("%d", &nombreEntre);

		if (nombreEntre < nombreMystere)
		{
			printf(" C'est plus !!\n");
			compteur++;
		}
		if ( nombreEntre > nombreMystere)
		{
			printf("C'est moins !!\n");
			compteur++;
		}
		if ( nombreEntre == nombreMystere)
		{
			found = true;
			printf("Bravo vous avez trouve le nombre Mystere en %d coups !!!\n\n", compteur);
				
		}
	}

	return 0;

}
