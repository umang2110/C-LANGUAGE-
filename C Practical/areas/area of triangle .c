#include<stdio.h>
#include<conio.h>

void main()
{
	//area of tringle r=1/2*b*h
	int h,b;
	float r;
	printf("enter base:");
	scanf("%d",&b);
	printf("enter height:");
	scanf("%d",&h);
	r=0.5*h*b;
	printf("area of rectangle is %.2f",r);
}
