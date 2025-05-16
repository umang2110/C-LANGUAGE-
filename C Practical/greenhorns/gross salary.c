#include<stdio.h>
#include<conio.h>
//GROSS SALARY=BASE SALARY+HRA+DA+TA
int main()
 {
  float bs,hra,da,ta,gs;
  printf("Enter the value of base salary: ");
  scanf("%f", &bs);
  printf("Enter the value of HRA: ");
  scanf("%f", &hra);
  printf("Enter the value of DA: ");
  scanf("%f", &da);
  printf("Enter the value of TA: ");
  scanf("%f", &ta);
  gs = bs+hra+da+ta;
  printf("Gross Salary = %.2f\n", gs);

}
