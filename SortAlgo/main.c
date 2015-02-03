#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "algo.h"

#define VERSION "0.2"

void printhelp();
void printversion();
int *fromchar(char *list[], int length);
void printlist(int *list, int length);

int main(int argc, char *argv[])
{
  if (argc == 1)
  {
    printf("Missing argument\nTry 'sortalgo --help' for more information\n");
    return (1);
  }   

  if (!strcmp(argv[1], "--help") || !strcmp(argv[1], "-h"))
  {
    printhelp();
    return (0);
  }

  else if (!strcmp(argv[1], "--version") || !strcmp(argv[1], "-v"))
  {
    printversion();
    return (0);
  }

  else if ((!strcmp(argv[1], "--bubblesort") || !strcmp(argv[1], "-bs")) && argc > 2)
  {
    printlist(bubblesort(fromchar(&argv[2], argc - 2), argc - 2), argc - 2);
    return (0);
  }

  else if ((!strcmp(argv[1], "--opt_bubblesort") || !strcmp(argv[1], "-obs")) && argc > 2)
  {
    printlist(opt_bubblesort(fromchar(&argv[2], argc - 2), argc - 2), argc - 2);
    return (0);
  }

  else if ((!strcmp(argv[1], "--selectionsort") || !strcmp(argv[1], "-ss")) && argc > 2)
  {
    printlist(selectionsort(fromchar(&argv[2], argc - 2), argc - 2), argc - 2); 
    return (0);
  }

  else if ((!strcmp(argv[1], "--insertionsort") || !strcmp(argv[1], "-is")) && argc > 2)
  {
    printlist(insertionsort(fromchar(&argv[2], argc - 2), argc - 2), argc - 2);
    return (0);
  }

  else
  {
    printf("Invalid argument\nTry 'sortalgo --help' for more information\n");
    return (2);
  }
}

void printhelp()
{
  printf("Sorting algorithms :\n--bubblesort : Bubble sort (-bs)\n--opt_bubblesort : Optimised version of the bubble sort (-obs)\n--selectionsort : Selection sort (-ss)\n--insertionsort : Insertion sort (-is)\n\n");
  printf("Misc :\n--help : Show this page (-h)\n--version : Show the version info (-v)\n");
}

void printversion()
{
  printf("SortAlgo %s, built on "__DATE__" at "__TIME__".\n", VERSION);
}

int   *fromchar(char *list[], int length)
{
  int i;
  i = 0;
  int *new = malloc(length * sizeof(int));

  while (i < length)
  {
    new[i] = atoi(list[i]);
    i++; 
  }

  return (new);
}

void  printlist(int *list, int length)
{
  int i;
  i = 0;
  while (i < length)
  {
    printf("%d ", list[i]);
    i = i + 1;
  }

  printf("\n");
}
