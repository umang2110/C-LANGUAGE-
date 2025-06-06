#include<stdio.h>
#include<conio.h>

void feet(double n)
{
    double inch;

    inch=n*12;
    printf("%.2f foot equal to %.2f inch",n,inch);

}
void main()
{
    feet(12.7);
}
