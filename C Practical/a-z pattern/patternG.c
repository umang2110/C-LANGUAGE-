#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j;
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(((i==1||i==7)&&j==2)||((i==1||i==7)&&j==3)||((i==1||i==7)&&j==4))
			{
				printf("* ");
			}
			else if(((j==1||j==5)&&i==2)||(i==3&&j==1))
			{
				printf("* ");
			}
			else if((j==3||j==4||j==5)&&i==4)
			{
				printf("* ");
			}
			else if(((j==1||j==5)&&i==5)||((j==1||j==5)&&i==6))
			{
				printf("* ");
			}
			else if(i==4&&j==1)
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
