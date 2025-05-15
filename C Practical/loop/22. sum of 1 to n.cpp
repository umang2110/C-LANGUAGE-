#include<stdio.h>
#include<conio.h>

int main()
{
	int n;
	printf("enter num: ");
	scanf("%d",&n);
	
	int i=1,sum=0;
	while(i<=n)
	{
		sum+=i;
		i++;
	}	
	printf("sum is %d",sum);
}





