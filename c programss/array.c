#include <stdio.h>

void main()
{

  int i;
  int Num[10];
  for (i = 0; i <= 9; i++)

  {
    printf("enter no:");
    scanf("%d", &Num[i]);
  }

  for (i = 0; i <= 9; i++)
  {

    if (Num[0] < Num[i])
    {
      Num[0] = Num[i];
    }
  }

  printf("max no.%d", Num[0]);
}
