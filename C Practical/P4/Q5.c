#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j,k,m;
    for(i=5;i>=1;i--)
    {
    for(k=2;k<=i;k++)
    {
    printf(" ");
    }
    for(j=i;j<=5;j++)
    { 
     printf("%d",j);
     }
     for(m=4;m>=i;m--)
     {
     printf("%d",m);
     }
     
     printf("\n");
     }
}
    