#include <stdio.h>

void main()
{

  int l, b, p;

  printf("enter length:");
  scanf("%d", &l);

  printf("enter breath:");
  scanf("%d", &b);

  p = 2 * (l + b);

  printf("perimeter is:%d", p);
}