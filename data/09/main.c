#include<stdio.h>
#include<stdlib.h>

int main (int argc, char *argv[])
{
	int age =5;

	switch (age)
{
case 2:
	printf("Salut bebe !\n");
	break;
case 6:
	printf("Salut gamin !\n");
	break;
case 12:
	printf("Salut l'ado !\n");
	break;
case 16:
	printf("Toujous puceau ?\n");
	break;
case 18:
	printf("C'est bon tu es majeur !!\n");
	break;
case 20:
	printf("Alors t'as le permis ?\n");
	break;
case 70:
	printf("Salut papy, ca va ?\n");
	break;
default:
	printf("Je n'ai aucune réponse pour ton age\n");
	break;
}
	return 0;
}



