#include<stdio.h>
#include<conio.h>
void main()
{

int n1, n2, n3, max;

  printf("Enter three numbers: ");
  scanf("%d %d %d", &n1, &n2, &n3);
  
  max = (n1 > n2) ? ( (n1 > n3) ? n1 : n3) : ( (n2 > n3) ? n2 : n3);

  printf("Maximum number is: %d\n", max);

  
}
