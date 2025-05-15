#include<stdio.h>
#include<conio.h>

int main()
{
	int n;
	printf("enter n num: ");
	scanf("%d",&n);
	
	int i=1;
	while(i<=n)
	{
		if(i%2==0)
		printf("%d ",i);
		i++;
	}
}
