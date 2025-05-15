//  5.2, 4.8, 4.4, 4,
#include<stdio.h>
#include<conio.h>

void main()
{
	int i;
	float x=52;
	for(i=1;i<=10;i++)
	{
		printf("%.1f ",x/10);
		x-=4;
	}
} 
