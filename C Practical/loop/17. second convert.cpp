#include<stdio.h>
#include<conio.h>
int main()
 {
 	int s,h,m;
 	printf("enter second: ");
 	scanf("%d",&s);
 	
 	if(s>0)
 	{
 		h=s/3600;
 		if(h>=1)
 		{
 			m=s%3600;
 			m=m/60;
 			s=s%60;
 			printf("%d:%d:%d",h,m,s);
		}
		else
		{
			m=s/60;
			s=s%60;
			printf("%d:%d:%d",h,m,s);
		}
	}
	else
	{
		printf("second is not negative");
	}
 }





















