#include<stdio.h>
#include<stdlib.h>

int menu()
{
        int choix = 0;

        while (choix < 1 || choix > 4)
        {

                printf("Menu :\n");
                printf("1 : Poulet de dinde aux escargots rotis a la sauce bearnaise\n");
                printf("2 : Concombres sucres a la sauce de myrtlles enrobee de chocolat\n");
                printf("3 : Escalope de dinde et sa gelee au poivre vert\n");
                printf("4 : La suprise du Chef\n");
                printf("Votre choix ? ");
                scanf("%d", &choix);
                if (choix < 1 || choix > 4)
                {
                        printf("Vous avez tape un numero qui n'est pas dans le menu !!\n");
                }

        }


        return choix;
}
