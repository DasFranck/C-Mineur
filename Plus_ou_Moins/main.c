#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    int nv = 1;         //declaration initialisation variables
    int compteur = 0;
    int essai;
    int MAX = 100;
    int MIN = 1;
    srand(time(NULL));
    int nbinconnu = (rand() % (MAX - MIN + 1)) + MIN;
    
    printf("Bienvenue dans ce Plus ou Moins.\n");
    
    while (nv)
    {
        compteur++;
        printf("\nEntrez un chiffre. Tentative %d\n", compteur);
        scanf("%d", &essai);
        if (essai > nbinconnu)
            printf("C'est moins.\n");
        else if (essai < nbinconnu)
            printf("C'est plus.\n");
        else
        {
           nv = 0;
        }
    }
    
    printf("\nBravo tu as gagné en %d coups.\n", compteur);
    return 0;
} 
