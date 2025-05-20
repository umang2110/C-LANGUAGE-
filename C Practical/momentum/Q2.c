//Write C program to check a number is even or odd using ternary operator.
#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	printf("enter no:");
	scanf("%d",&n);
	(n%2==0)?printf("it is even"):printf("it is odd");
	
}
