//Implement a C program to find an average and a grade of a student. Consider 5 subjects. Assign out of 100 marks for each subject. 
//Use conditions for evaluate grades based on average value.
#include<stdio.h>
#include<conio.h>

void main()
{
	float a,b,c,d,e;
	printf("enter Maths marks out of 100 : ");
	scanf("%f",&a);
	printf("enter English marks out of 100 : ");
	scanf("%f",&b);
	printf("enter COA marks out of 100 : ");
	scanf("%f",&c);
	printf("enter OS marks out of 100 : ");
	scanf("%f",&d);
	printf("enter DBMS marks out of 100 : ");
	scanf("%f",&e);
	
	float sum=a+b+c+d+e;
	float avg=sum/5;
	printf("\n");
	printf("average is %.2f",avg);
	printf("\n");
	if(avg>=90 && avg<=100)
	{
		printf("Grade is A");
	}
	else if(avg>=80 && avg<90)
	{
		printf("Grade is B");
	}
	else if(avg>=70 && avg<80)
	{
		printf("Grade is C");
	}
	else if(avg>=60 && avg<70)
	{
		printf("Grade is D");
	}
	else if(avg>=50 && avg<60)
	{
		printf("Grade is E");
	}
	else if(avg>=33 && avg<50)
	{
		printf("Grade is F");
	}
	else
	{
		printf("you are fail.");
	}
	
}
