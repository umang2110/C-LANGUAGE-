#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,k;
	
	for(i=10;i>=6;i--)
	{
		for(k=i;k>6;k--)
		{
			printf("  ");
		}
		
		for(j=i;j<=10;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	
}
