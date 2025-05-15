#include<stdio.h>
#include<conio.h>

void main()
{
	//simple intrest si=(p*r*t)/100
	int p,r,t;
	float si;
	printf("enter principle ammount:");
	scanf("%d",&p);
	printf("enter Rate of interest:");
	scanf("%d",&r);
	printf("enter Time in years:");
	scanf("%d",&t);
    si=(p*r*t)/100;
	printf("simple intrest si is %.2f",si);
}
