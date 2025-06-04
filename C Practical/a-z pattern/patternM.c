#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j;
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(j==5||j==1)
			{
				printf("* ");
			}
			else if((j==2||j==4)&&i==2)
			{
				printf("* ");
			}
			else if(i==3&&j==3)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
			
		}
		printf("\n");
	}	
}
