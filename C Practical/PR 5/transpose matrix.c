#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j,r,c;
    printf("enter array row size: ");
    scanf("%d",&r);
    printf("enter array col size: ");
    scanf("%d",&c);
    int a[r][c];
    printf("\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("a[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }

    }
    printf("\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("transpose matrix is:\n");
    int b[i][j];

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            b[j][i]=a[i][j];
        }
    }
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

}