#include<stdio.h>
void main()
{
    int n;
    
    printf("entre n");
    scanf("%d",&n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        printf("a[%d]",i);
        scanf("%d",&a[i]);
    }
    printf("\n");

    for (int i = 0; i < n/2; i++)
    {
        int temp = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = temp;
    }

    printf("revers arrey :");
    for (int i = 0; i < n; i++)
    {
        printf("%d",a[i]);
    }
    
    
}
