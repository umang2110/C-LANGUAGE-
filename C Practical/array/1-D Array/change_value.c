#include <stdio.h>
void main()
{

  int n, index, value;
  printf("Enter n :");
  scanf("%d", &n);

  int a[n];
  for (int i = 0; i < n; i++)
  {
    printf("a[%d] ", i);
    scanf("%d", &a[i]);
  }

  printf("\nEnter index  to update: ");
  scanf("%d", &index);

  printf("Enter value to update: ");
  scanf("%d", &value);

  a[index] = value;

  printf("\nUpdated array: ");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", a[i]);
  }
  printf("\n");
}