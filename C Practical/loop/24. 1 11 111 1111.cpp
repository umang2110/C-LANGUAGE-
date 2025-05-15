#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("enter num: ");
	scanf("%d",&n);
	
	int i=1,b=0;
	while(i<=n)
	{
		b=b*10+1;
		printf("%d ",b);
		if(i<n)
		{
		  printf(",");
		}
		i++;
	}
	
}
