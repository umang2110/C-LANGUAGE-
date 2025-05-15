#include<stdio.h>
#include<conio.h>

int main()
 {
  float x, y, z, result;
  printf("Enter the value of x: ");
  scanf("%f", &x);
  printf("Enter the value of y: ");
  scanf("%f", &y);
  printf("Enter the value of z: ");
  scanf("%f", &z);
  result = (x + y + z) * (x + y + z);
  printf("(x + y + z) * (x + y + z) = %.2f\n", result);

}
