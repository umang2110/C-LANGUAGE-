#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("enter num: ");
	scanf("%d",&n);
	
	int fact=1;
	while(n>=1)
	{
		fact=fact*n;
		n--;	
	}
	printf("factorial is %d",fact);	
}


