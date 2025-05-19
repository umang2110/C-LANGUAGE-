//Write C program to find sum of first and last digit of a number.
#include<stdio.h>
#include<conio.h>
void main()
{
	int sum,n,last;
	printf("enter no:");
	scanf("%d",&n);
	if(n<10)
	{
		printf("sum is %d",n);
	}
	else
	{
	
	last=n%10;
	while(n>10)
	{
		n=n/10;
	}
	sum=n+last;
	printf("sum is %d",sum);
}
}
