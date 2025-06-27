//Write a C program to find the average of all elements in a 2D array using a function.
#include<stdio.h>
#include<conio.h>

void avg(int sum,int r,int c)
{
	int q=r*c;
	printf("avg is %d",sum/q);
}

void main()
{
	int i,j,r,sum=0,c;
	printf("enter row size: ");
	scanf("%d",&r);
	printf("enter col size: ");
	scanf("%d",&c);
	int a[r][c];
	printf("\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d]= ",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
			
		}
		printf("\n");
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum=sum+a[i][j];	
		}
	}
	
	avg(sum,r,c);
	
}
