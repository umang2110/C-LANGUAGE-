#include<stdio.h>
#include<conio.h>

int main(){
	
	int start,end;
	printf("enter starting: ");
	scanf("%d",&start);
	printf("enter ending: ");
	scanf("%d",&end);
	
	while(start<=end)
	{
		if(start%4==0)
		{
			printf("%d ",start);
	    }
	    start++;
	}
	
}
