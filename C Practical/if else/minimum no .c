#include<stdio.h>
#include<conio.h>
int main()
{
  int num1, num2;

  printf("Enter two numbers: ");
  scanf("%d %d", &num1, &num2);

  if (num1 < num2)
   {
    printf("Minimum number is: %d\n", num1);
   } else 
   {
    printf("Minimum number is: %d\n", num2);
   }

}
