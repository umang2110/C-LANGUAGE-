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
  result = 3 * (x + y + z);
  printf("3(x + y + z) = %.2f\n", result);

}
