#include<stdio.h>
#include<stdlib.h>

int main(int agrc, char *argv[])
{
  int age = 20;

  int majeur = 0;
	majeur = age >= 18;
	{
	printf("Majeur vaut : %d\n", majeur);
}
  return 0;
}
