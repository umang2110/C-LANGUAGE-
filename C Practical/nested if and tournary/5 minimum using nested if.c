#include<stdio.h>
#include<conio.h>

int main()
{
 int a,b,c,d,e;
 printf("enter a:");
 scanf("%d",&a);
 printf("enter b:");
 scanf("%d",&b);
 printf("enter c:");
 scanf("%d",&c);
 printf("enter d:");
 scanf("%d",&d);
 printf("enter e:");
 scanf("%d",&e); 
 
 //a,b,c,d,e
 if(a<b)
 {
 	//a,c,d,e
 	if(a<c)
 	{
 		//a,d,e
 		if(a<d)
 		{
 			//a,e
 			if(a<e)
 			{
 				printf("a is min");
			}
			else
			{
				printf("e is min");
			}
		}
		else
		{
			//d,e
			if(d<e)
			{
				printf("d is min");
			}
			else
			{
				printf("e is min");
			}
		}
	}
	else
	{
		//c,d,e
		if(c<d)
		{
			//c,e
			if(c<e)
			{
				printf("c is min");
			}
			else
			{
				printf("e is min");
			}
		}
		else
		{
			//d,e
			if(d<e)
			{
				printf("d is min");
			}
			else
			{
				printf("e is min");
			}
		}
	}
 }
 else
 {
 	//b,c,d,e
 	if(b<c)
 	{
 		//b,d,e
 		if(b<d)
 		{
 			//b,e
 			if(b<e)
 			{
 				printf("b is min");
			}
			else
			{
				printf("e is min");
			}
		}
		else
		{
			//d,e
			if(d<e)
			{
				printf("d is min");
			}
			else
			{
				printf("e is min");
			}
		}
	}
	else
	{
		//c,d,e
		if(c<d)
		{
			//c,e
			if(c<e)
			{
				printf("c is min");
			}
			else
			{
				printf("e is min");
			}
		}
		else
		{
			//d,e
			if(d<e)
			{
				printf("d is min");
			}
			else
			{
				printf("e is min");
			}
			
		}	
	}
 }
}
 
