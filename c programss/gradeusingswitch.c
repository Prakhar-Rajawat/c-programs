#include <stdio.h>
int main()
{
  int marks;

  printf("enter marks (1-100):");
  scanf("%d", &marks);

  switch (marks / 10)
  {
  case 10:
  case 9:
    printf("Grade : A");
    break;

  case 8:
    printf("Grade : B");
    break;

  case 7:
    printf("Grade : C");
    break;

  case 6:
    printf("Grade : D");
    break;

  default:
    printf("Grade : F");
    break;
  }

  return 0;
}
