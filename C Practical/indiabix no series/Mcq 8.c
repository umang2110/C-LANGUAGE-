#include<stdio.h>
#include<conio.h>

void main()
{
	//3, 4, 7, 8, 11, 12,
	int i,x=3;
	for(i=1;i<=5;i++)
	{
		printf("%d %d ",x,x+1);
		x+=4;
	}
} 
