#include<stdio.h>

void main()
{
    int n;

    printf("Enter n :");
    scanf("%d",&n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        printf("a[%d]",i);
        scanf("%d",&a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        
        printf("%d ",a[i]);
    }
        
    
}