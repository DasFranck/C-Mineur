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

int *selectionsort(int *list, int length)
{
  int i;
  int j;
  int min;
  int tmp;
  i = 0;
  
  while (i < length - 1)
  {
    min = i;
    j = i + 1;
    
    while (j < length)
    {
      if (list[j] < list[min])
        min = j;
      j = j + 1;
    }

    if (min != i)
    {
      tmp = list[i];
      list[i] = list[min];
      list[min] = tmp;
    }
    i = i + 1;
  }

  return (list);
}

int *insertionsort(int *list, int length)
{
  int i;
  int tmp;
  int j;
  i = 1;

  while (i < length)
  {
    tmp = list[i];
    j = i;

    while (j > 0 && list[j - 1] > tmp)
    {
      list[j] = list[j - 1];
      j = j - 1;
    }

    list[j] = tmp;
    i = i + 1;
  }
  return (list);
}
