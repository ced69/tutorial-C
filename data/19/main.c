#include<stdio.h>
#include<stdlib.h>

void punition(int nombre_de_lignes)
{
	int i;

	for(i = 0 ; i < nombre_de_lignes ; i++)
	{
		printf("Je ne dois pas copier sur mes camarades\n");

	}
}

int main(int argc, char *argv[])
{
	punition(10);

	return 0;
}
