#include<stdio.h>
#include<conio.h>

int main()
 {
  float x, y, z, result;
  printf("Enter the value of x: ");
  scanf("%f", &x);
  printf("Enter the value of y: ");
  scanf("%f", &y);
  result = 3 * (x - y);
  printf("(x - y)*3 = %.2f\n", result);

}
