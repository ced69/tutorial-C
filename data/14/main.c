#include<stdio.h>
#include<stdlib.h>

int main ( int argc, char *argv [])
{
	int compteur = 0;

	while ( compteur < 100)
	{
		printf("La variable compteur vaut %d\n", compteur);
		compteur++;
	}

	return 0;
}

