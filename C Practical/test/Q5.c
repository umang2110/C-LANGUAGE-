//Write C program to calculate factorial of a number.
#include<stdio.h>
#include<conio.h>
void main()
{
	int fact=1,n;
	printf("enter no:");
	scanf("%d",&n);
	while(n>=1)
	{
		fact=fact*n;
		n--;
	}
	printf("factorial is %d",fact);
}
