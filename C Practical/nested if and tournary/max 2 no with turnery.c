#include<stdio.h>
#include<conio.h>
int main()
{
	int n1,n2,max;
	printf("enter two no:");
	scanf("%d %d",&n1,&n2);
	
	max = (n1>n2) ? n1 : n2 ;
	printf("maximum no is %d\n",max);
}
