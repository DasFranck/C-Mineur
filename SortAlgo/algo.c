int *bubblesort(int *list, int length)
{
  int i;
  int j;
  int tmp;
  i = length - 2;
  
  while (i >= 0)
  {
    j = 0;
    
    while (j <= i)
    {
      if (list[j] > list[j+1])
      {
        tmp = list[j];
        list[j] = list[j+1];
        list[j+1] = tmp;
      }
      
      j = j + 1;
    }
    
    i = i - 1;
  }
  
  return(list);
}

/* 
** An optimised version of the bubble sort. 
**/

int *opt_bubblesort(int *list, int length)
{
  int i;
  int cont;
  int j;
  int tmp;
  i = length - 2;
  cont = 1;
  
  while (i >= 0 && cont)
  {
    cont = 0;
    j = 0;
    while (j <= i)
    {
      if (list[j] > list[j+1])
      {
        tmp = list[j];
        list[j] = list[j+1];
        list[j+1] = tmp;
        cont = 1;
      }
      j = j + 1;
    }
    i = i - 1;
  }
  return (list);
}
