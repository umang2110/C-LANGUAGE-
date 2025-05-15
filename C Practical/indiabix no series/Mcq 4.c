#include<stdio.h>
#include<conio.h>

void main()
{
	// 22, 21, 23, 22, 24, 23
	int i,x=22;
	for(i=1;i<=5;i++)
	{
		printf("%d %d ",x,x-1);
		x++;
	}
}
