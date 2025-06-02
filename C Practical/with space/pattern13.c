#include<stdio.h>
#include<conio.h>

void main()
{
	char i,j,k;
	for(i='A';i<='E';i++)
	{
		for(k='D';k>=i;k--)
		{
			printf("  ");
		}
		for(j=i;j>='A';j--)
		{
			printf("%c ",j);
		}
		printf("\n");
	}
	
}
