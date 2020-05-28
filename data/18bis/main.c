#include<stdio.h>
#include<stdlib.h>


double conversion_to_francs(double euros)
{
	double francs = 0;

	francs = 6.55957 * euros;
	return francs;
}

double conversion_to_euros(int francs)
{
	double euros = 0;

	euros = francs / 6.55957;
	return euros;
}




int main ( int argc, char *argv[])
{
	printf("10 euros = %.2fF\n", conversion_to_francs(10));
	printf("50 euros = %.2fF\n", conversion_to_francs(50));
	printf("100 euros = %.2fF\n", conversion_to_francs(100));
	printf("200 euros = %.2fF\n", conversion_to_francs(200));

	printf("10 francs = %.2fE\n", conversion_to_euros(10));
	printf("50 francs = %.2fE\n", conversion_to_euros(50));
	printf("100 francs = %.2fE\n", conversion_to_euros(100));
	printf("200 francs = %.2fE\n", conversion_to_euros(200));

	return 0;
}

