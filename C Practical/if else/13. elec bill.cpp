#include<stdio.h>
#include<conio.h>

int main()
{
	double no,bill;
	printf("enter unit:");
	scanf("%lf",&no);
	
	if(no<=20)
		bill=no*0.5;
	else if(no<=40)
	    bill=20*0.5 + (no-20)*1;
	else if(no<=60)
	    bill=20*0.5 + 20*1 + (no-40)*1.5;    
	else if(no<=100)
	    bill=20*0.5 + 20*1 + 20*1.5 + (no-60)*2 ;    
	else if(no>100)
	    bill=20*0.5 + 20*1 + 20*1.5 + 40*2 + (no-100)*5;    
		    
	printf("electricity bill=%lf",bill);
	
}
