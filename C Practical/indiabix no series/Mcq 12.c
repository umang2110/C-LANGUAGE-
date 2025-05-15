//14, 28, 20, 40, 32, 64,
#include<stdio.h>
#include<conio.h>

void main()
{
	int i,x=14;
	for(i=1;i<=5;i++)
	{
		printf("%d ",x);
		x= 2*x;
		printf("%d ",x);
		x-=8;
	}
} 
