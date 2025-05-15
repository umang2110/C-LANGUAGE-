//1.5, 2.3, 3.1, 3.9
#include<stdio.h>
#include<conio.h>

void main()
{
	int i;
	float x=15;
	for(i=1;i<=10;i++)
	{
		printf("%.1f ",x/10);
		x+=8;
	}
} 
