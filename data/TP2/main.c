#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>

//Declaration d'une fonction
int generateMystereNumber()
{
	const int MAX = 100, MIN = 1;
	int back = 0;

	// Génération du nombre aléqtoire

	srand(time(NULL));
	back = (rand() % (MAX - MIN + 1)) + MIN;
	return back;
}



int main( int argc, char *argv[])
{
	bool found = false;
	int nombreMystere = 0;
	int nombreEntre = 0;
	const int MAX = 100, MIN = 1;
	int compteur = 0;
	int restart = 1;

	nombreMystere = generateMystereNumber();
	printf("Le nombre a trouver est: %d\n", nombreMystere);

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
			printf(" Voulez-vous refaire une partie ?\n");
			printf("1 : oui, 2 : non\n\nVotre choix : ");
			scanf("%d", &restart);				
		       	if (restart == 1)
			{
				found = false;
				compteur = 0;
				nombreMystere = generateMystereNumber();
				printf("Le nombre a trouver est: %d\n", nombreMystere);
   		
			}
		}


	 } 

	return 0;

}

