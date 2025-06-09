#include<stdio.h>
#include<conio.h>

void recursion(int i,int n,int sum)
{
    sum=sum+i;
    i++;
    if(i<=n)
    {
        recursion(i,n,sum);
    }
    else
    {
        printf("%d ",sum);
    }
}
void main()
{
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    recursion(1,n,0);
}