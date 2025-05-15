#include<stdio.h>
#include<conio.h>

void main()
{
	//36, 34, 30, 28, 24, 22
	int i,x=36;
	for(i=1;i<=5;i++)
	{
		printf("%d %d ",x,x-2);
		x-=6;
	}
}
