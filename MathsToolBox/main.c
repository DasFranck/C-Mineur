#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "fonction.h"

void c();
void c1();
void c2();
void c21();

void c ()
{
    int choice, c;
    printf("1. Aires\n2. Cotés\n");
    scanf("%d", &choice);
    switch (choice){
    case 1 :
        c1();
        break;
    case 2 :
        c2();
        break;
    default:
        break;
    }
}

void c1 ()
{
    int choice;
    printf("\n  1. Carré\n  2. Cercle\n  3. Ellipse\n  4. Parrallélogramme\n  5. Rectangle \n  6. Trapèze\n  7. Triangle\n");
    scanf("%d", &choice);
    switch (choice){
    case 1 :
        break;
    case 2 :
        break;
    case 3 :
        break;
    case 4 :
        break;
    case 5 :
        break;
    case 6 :
        break;
    case 7 :
        break;
    default :
        break;
    }
}

void c2 ()
{
    int choice;
    printf("\n  1.Triangle Rectangle\n");
    scanf("%d", &choice);
    switch (choice){
    case 1 :
        c21();
        break;
    default :
        break;
    }
}

void c21 ()
{   
    int choice;
    printf("\n    1. Hypothénuse\n    2. Cotés adjacents à l'angle droit\n");
    scanf("%d", &choice);
    switch (choice){
    case 1 :
        
        break;
    case 2:

        break;
    default:
        break;
    }
}

void main ()
{
    int choice;
    int continu = 1;
    printf("Bienvenue dans MathsToolBox");
    do
    {
        printf("\nQue voulez-vous calculer ?\n");
        c();
        printf("\nVoulez-vous continuer ?\n  0.Non\n  1.Oui\n");
        scanf("%d", &continu);
    } while(continu);
}
