#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,n;
	printf("enter 5 or 8 no:");
	scanf("%d",&n);
	
	if(n==8)
	{
		for(i=1;i<=15;i++)
		{
			for(j=1;j<=15;j++)
			{
				if((i==1||i==15)&&j==8)
				{
					printf("*");
				}
				else if((j==7||j==9)&&i==2)
				{
					printf("* ");
				}
				else if((j==6||j==10)&&i==3)
				{
					printf("* ");
				}
				else if((j==5||j==11)&&i==4)
				{
					printf("* ");
				}
				else if((j==4||j==12)&&i==5)
				{
					printf("* ");
				}
				else if((j==3||j==13)&&i==6)
				{
					printf("* ");
				}
				else if((j==2||j==14)&&i==7)
				{
					printf("* ");
				}
				else if((j==1||j==15)&&i==8)
				{
					printf("* ");
				}
				else if((j==2||j==14)&&i==9)
				{
					printf("* ");
				}
				else if((j==3||j==13)&&i==10)
				{
					printf("* ");
				}
				else if((j==4||j==12)&&i==11)
				{
					printf("* ");
				}
				else if((j==5||j==11)&&i==12)
				{
					printf("* ");
				}
				else if((j==6||j==10)&&i==13)
				{
					printf("* ");
				}
				else if((j==7||j==9)&&i==14)
				{
					printf("* ");
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");
		}	
	}
	else if(n==5)
	{
		for(i=1;i<=11;i++)
		{
			for(j=1;j<=11;j++)
			{
				if((i==1||i==11)&&j==6)
				{
					printf("*");
				}
				else if((j==5||j==7)&&i==2)
				{
					printf("* ");
				}
				else if((j==4||j==8)&&i==3)
				{
					printf("* ");
				}
				else if((j==3||j==9)&&i==4)
				{
					printf("* ");
				}
				else if((j==2||j==10)&&i==5)
				{
					printf("* ");
				}
				else if((j==1||j==11)&&i==6)
				{
					printf("* ");
				}
				else if((j==2||j==10)&&i==7)
				{
					printf("* ");
				}
				else if((j==3||j==9)&&i==8)
				{
					printf("* ");
				}
				else if((j==4||j==8)&&i==9)
				{
					printf("* ");
				}
				else if((j==5||j==7)&&i==10)
				{
					printf("* ");
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");
		}
	}
	else
	{
		printf(" please enter 5 or 8 no !");
	}
}