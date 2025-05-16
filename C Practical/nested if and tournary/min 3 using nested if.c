#include<stdio.h>
#include<conio.h>
void main()
{

int n1, n2, n3;

  printf("Enter three numbers: ");
  scanf("%d %d %d", &n1, &n2, &n3);

  int min;

  if (n1 < n2)
   {
    if (n1 < n3)
	 {
      min = n1;
     } 
	 else 
	 {
      min = n3;
     }
   } 
   else
    {
      if (n2 < n3) 
	  {
      min = n2;
      } 
	  else 
	  {
      min = n3;
      }
  }

  printf("Minimum number is: %d\n", min);
}
