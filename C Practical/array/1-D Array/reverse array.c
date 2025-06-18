#include<stdio.h>
#include<conio.h>

void main()
{
    int n,i;
    printf("enter number:");
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    printf("\n");
    
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    for(i=0;i<n/2;i++)
    {
      int temp=a[i];
      a[i]= a[n-i-1];
      a[n-i-1] = temp;
    }
    for(i=0; i<n;i++)
    {
    printf("%d ",a[i]);
    }
    printf("\n");

}

    