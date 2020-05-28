#include<stdio.h>
#include<stdlib.h>

void aire_du_rectangle(double largeur, double hauteur)

{
	double aire = 0;

	aire = largeur * hauteur;
	printf("Rectangle de largeur %f et de hauteur %f. Aire = %f\n", largeur, hauteur, aire);
}

int main(int argc, char *argv[])
{
	aire_du_rectangle (5, 10);
	aire_du_rectangle (2.5, 4.2);
	aire_du_rectangle (8.4, 9.6);

	return 0;
}


		 
