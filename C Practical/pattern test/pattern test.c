#include<stdio.h>
#include<conio.h>

void main()
{
	//      1,8
	// 2,7       2,9
	// 3,6       3,10
	// 4,5       4,11
	
	
    //8,1        8,15
    int i,j,n,k,m;
    printf("enter row value:");
    scanf("%d",&n);
    int x=n,y=n;
    for(i=1;i<=n;i++)
    {
    	for(j=1;j<=(2*n)-1;j++)
    	{
    		if(j==x||j==y )
    		{
    			printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
		x++;
		y--;
		
	}
	int a=2;
	int b=(2*n)-2;
	for(k=1;k<n;k++)
	{
		for(m=1;m<=(2*n)-1;m++)
		{
			if(m==a||m==b)
    		{
    			printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
		a++;
		b--;
	}
    
}
