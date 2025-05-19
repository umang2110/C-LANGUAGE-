// Write C program to count number of digits in a number.
#include<stdio.h>
#include<conio.h>
void main()
{
	int  n,count=0;
	printf("enter no:");
	scanf("%d",&n);
	while(n>0)
	{
		n=n/10;
		count++;
	}
	printf("no is %d digit",count);
}
