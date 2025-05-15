//  8, 6, 9, 23, 87 
#include<stdio.h>
#include<conio.h>

void main()
{
	int i,x=8,b=1,c=2;
	for(i=1;i<=10;i++)
	{
		printf("%d ",x);
		x=x*b-c;
		b++;
		c++;
	}
} 
