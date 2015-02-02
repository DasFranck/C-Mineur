#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "algo.h"

#define VERSION "0.1"

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

  else
  {
    printf("Invalid argument\nTry 'sortalgo --help' for more information\n");
    int s[] = {12, 40, 15, 17, 21, 23, 89, 200, 18, 27, 13, 31, 7, 161, 0};
    printlist(bubblesort(s, 13), 13);
    return (2);
  }
}

void printhelp()
{
  printf("Sorting algorithms :\n--bubblesort : Bubble sort (-bs)\n--opt_bubblesort : Optimised version of the bubble sort (-obs)\n\n");
  printf("Misc :\n--help : Show this page(-h)\n--version : Show the version info (-v)\n");
}

void printversion()
{
  printf("SortAlgo %s, built on "__DATE__".\n", VERSION);
}

int   *fromchar(char *list[], int length)
{
  int i;
  i = 0;
  int *new = malloc(length * sizeof(int));

  while (i < length)
  {
    new[i] = strtol(list[i], NULL, 0);
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
