#include<stdio.h>
#include<conio.h>

void recursion(int n,int i)
{

    printf("%d ",n);
    n--;
    if(n>=1)
    {
        recursion(n,i);
    }
}
void main()
{
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    recursion(n,1);
}