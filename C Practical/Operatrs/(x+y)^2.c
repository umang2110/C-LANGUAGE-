#include<stdio.h>
#include<conio.h>

int main()
 {
  float x, y, result;
  printf("Enter the value of x: ");
  scanf("%f", &x);
  printf("Enter the value of y: ");
  scanf("%f", &y);
  result = (x + y) * (x + y);
  printf("(x + y)^2 = %.2f\n", result);

}
