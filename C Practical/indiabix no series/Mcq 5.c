#include<stdio.h>
#include<conio.h>

void main()
{
	//53, 53, 40, 40, 27, 27,
	int i,x=53;
	for(i=1;i<=5;i++)
	{
		printf("%d %d ",x,x);
		x-=13;
	}
} 
