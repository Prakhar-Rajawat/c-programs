#include <stdio.h> // Defines maximum size of array

int main()
{
  int arr[10];
  int i;

  /* Input array elements */
  printf("Enter elements in array: ");
  for (i = 0; i < 10; i++)
  {
    printf("Enter elements in array[%d]:", i);
    scanf("%d", &arr[i]);
  }

  /*
   * Print array in reversed order
   */
  printf("\nArray in reverse order: ");
  for (i = 9; i >= 0; i--)
  {
    printf("%d\t", arr[i]);
  }

  return 0;
}

// #include <stdio.h>
// int main()
// {
//   int array[100], n, c, t, end;

//   scanf("%d", &n);
//   end = n - 1;

//   for (c = 0; c < n; c++)
//   {
//     scanf("%d", &array[c]);
//   }

//   for (c = 0; c < n / 2; c++)
//   {
//     t = array[c];
//     array[c] = array[end];
//     array[end] = t;
//     end--;
//   }

//   printf("Reversed array elements are:\n");

//   for (c = 0; c < n; c++)
//   {
//     printf("%d\n", array[c]);
//   }

//   return 0;
// }