// Write C program to print all alphabets from 1 to n. using do while loop.
#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,n;
	printf("enter no:");
	scanf("%d",&n);
	do
	{
		printf("%d ",i);
		i++;
	}
	while(i<=n);
}
