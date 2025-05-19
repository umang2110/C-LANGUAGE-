//Write C program to print multiplication table of any number.
#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,n;
	printf("enter no.:");
	scanf("%d",&n);
	while(i<=10)
	{
	printf("%d * %d = %d\n",n,i,n*i);	
	i++;
	}
}

