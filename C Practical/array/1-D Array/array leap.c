#include<stdio.h>
#include<conio.h>

void main()
{
    int i;

    int a[2];
    printf("enter first year = ");
    scanf("%d",&a[0]);
    printf("enter last year = ");
    scanf("%d",&a[1]);

    for(i=a[0]; i<=a[1]; i++)
    {
        if(i%4==0)
        {
            printf("%d ",i);
        }
    }
}

