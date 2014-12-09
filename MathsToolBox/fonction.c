#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "fonction.h"

void hypothenuse()
{
    float a, b, res;
    printf("Entrez le premier coté du triangle rectangle en centimètres : \n");
    scanf("%f", &a);
    printf("\nEntrez le second coté du triangle rectangle en centimètres : \n");
    scanf("%f", &b);
    res = sqrt(a * a + b * b);
    printf("\nLongueur de l'hypothénuse : %f cm\n", res);
}

void invhypothenuse()
{
    float h, a, res;
    printf("Entrez l'hypothénuse du triangle rectangle en centimètres : \n");
    scanf("%f", &h);
    printf("\nEntrez un coté du triangle rectangle en centimètres : \n");
    scanf("%f", &a);
    res = sqrt(h * h - a * a); 
    printf("\nLongueur de l'autre coté : %f cm\n", res);
}

void airecarre()
{
    float a, res;
    printf("Entrez un des coté d'un carré en centimètres : \n");
    scanf("%f", &a);
    res = a*a;
    printf("\nAire du carré : %f cm²\n", res);
}

void airerectangle()
{
    float a, b, res;
    printf("Entrez la largeur du rectangle en centimètres : \n");
    scanf("%f", &a);
    printf("\nEntrez la longueur du rectangle en centimètres : \n");
    scanf ("%f", &b);
    res = a*b;
    printf("\nAire du rectangle : %f cm²\n", res);
}

void airetrianglebh()
{
    float h, b, res;
    printf("Entrez la base du triangle en centimètres : \n");
    scanf("%f", &b);
    printf("\nEntrez la hauteur du triangle en centimètres : \n");
    scanf ("%f", &h);
    res = h*b/2;
    printf("\nAire du triangle rectangle : %f cm²\n", res);
}

void airetrianglecote()
{
    float a, b, c, s, res;
    printf("Entrez les trois cotés en centimètres : \n");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    s = 0.5*(a+b+c);
    res = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("\nAire du triangle rectangle : %f cm²\n", res);
}

void aireparrallelogramme()
{
    float b, h, res;
    printf("Entrez la base du parrallélogramme en centimètres : \n");
    scanf("%f", &b);
    printf("\nEntrez la hauteur du parrallélogramme en centimètres : \n");
    scanf("%f", &h);
    res = b*h;
    printf("\nAire du parrallèlogramma : %f cm²\n", res);
}

void airetrapeze()
{
    float h, b, c, res;
    printf("Entrez la base du trapèze en centimères : \n");
    scanf("%f", &b);
    printf("\nEntrez le coté parrallèle à la base du trapèze en centimètres : \n");
    scanf("%f", &c);
    res = h*(b+c)/2;
    printf("\nAire du trapèze : %f cm²\n", res);
}

void airecercle()
{
    float r, res;
    printf("Entrez le rayon du cercle en centimètres : \n");
    scanf("%f", &r);
    res = acos(-1)*r*r;
    printf("\nAire du cercle : %f cm²\n", res);
}

void aireellipse()
{
    float a, b, res;
    printf("Entrez la longueur du grand axe de l'ellipse : \n");
    scanf("%f", &a);
    printf("\nEntrez la longueur du petit axe de l'ellipse : \n");
    scanf("%f", &b);
    res = acos(-1)*a*b;
    printf("\nAire de l'ellipse : %f cm²\n", res);
}


