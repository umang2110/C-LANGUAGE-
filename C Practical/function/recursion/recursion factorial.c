#include<stdio.h>
#include<conio.h>

void recursion(int n,int fact)
{
    fact=fact*n;

    n--;
    if(n>=1)
    {
        recursion(n,fact);
    }
    else
    {
        printf("%d ",fact);
    }
}
void main()
{
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    recursion(n,1);
}