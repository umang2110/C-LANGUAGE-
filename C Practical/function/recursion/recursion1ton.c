#include<stdio.h>
#include<conio.h>

void recursion(int i,int n)
{
    printf("%d ",i);
    i++;
    if(i<=n)
    {
        recursion(i,n);
    }
}
void main()
{
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    recursion(1,n);
}