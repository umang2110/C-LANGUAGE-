#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j;
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(j==1||j==5)
			{
				printf("* ");
		    }
		    else if((j==2||j==4)&&i==6)
		    {
		    	printf("* ");
			}
			else if(j==3&&i==5)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
	
	}	printf("\n");
}
}