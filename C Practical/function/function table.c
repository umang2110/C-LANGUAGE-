#include<stdio.h>
#include<conio.h>

void table(int n)
{
    int i;
    for(i=1; i<=10; i++)
    {
        printf("%d * %d = %d\n",n,i,n*i);
    }
}
void main()
{
    table(5);
}
