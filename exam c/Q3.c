//Write a C program that defines a function to print only odd elements from 1D array elements.
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	printf("Enter array size: ");
	scanf("%d",&n);
	int a[n];
	
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nonly odd no: ");
	
	for(i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		{
		printf("%d ",a[i]);
	    }
	}
	
}
