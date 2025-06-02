#include<stdio.h>
#include<conio.h>

void main()
{
	char i,j,k;
	for(i='A';i<='E';i++)
	{
		for(k='B';k<=i;k++)
		{
			printf("  ");
		}
		for(j=i;j<='E';j++)
		{
			printf("%c ",j);
		}
		printf("\n");
	}
}
