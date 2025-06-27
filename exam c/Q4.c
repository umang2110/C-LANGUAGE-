//Write a C program to find even elements from an 1D array using Pointer.
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
	printf("\nonly even no: ");
	
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
		printf("%d ",a[i]);
	    }
	}
	
}
