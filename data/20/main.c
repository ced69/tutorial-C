#include<stdio.h>
#include<stdlib.h>

double aire_du_rectangle(double largeur, double hauteur)
{
	return largeur * hauteur;
}

int main(int argc, char argv[])

{
	printf("Rectangle de largeur 5 et de hauteur 10. Aire= %f\n", aire_du_rectangle(5, 10));
	printf("Rectange de largrur 2.5 et de hauteur 3.5. Aire = %f\n", aire_du_rectangle(2.5, 3.5));
	printf("Rectangle de largeur 4.6 et de hateur 8.6. Aire = %f\n", aire_du_rectangle(4.6, 8.6));

	return 0;
}
