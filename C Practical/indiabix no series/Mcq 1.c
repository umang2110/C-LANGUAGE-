#include<stdio.h>
#include<conio.h>

void main()
{
	//2, 1, (1/2), (1/4), (1/8),
	int i,n=2;
	printf("2 1 ");
	for(i=1;i<=10;i++)
	{
		printf("1/%d ",n);
		n=n*2;
	}
	
	
	
}
