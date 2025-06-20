#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j,r,x,c;
    printf("enter array row : ");
    scanf("%d",&r);
    printf("enter array col : ");
    scanf("%d",&c);

    int a[r][c];
    printf("\n");

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("a[%d][%d] ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");

    }
    printf("Enter row no.: ");
    scanf("%d",&x);
    printf("\n");
    if(x>=0 && x<r)
    {
        int sum=0;
        printf("Elements of row %d is: ",x);
        for(j=0; j<c; j++)
        {
            printf("%d ",a[x][j]);
            sum=sum+a[x][j];
        }
        printf("\n");
        printf("sum of %d row is %d\n",x,sum);
    }
    else
    {
        printf("invalid row!\n");
    }
    printf("\n");
    int y;
    printf("enter col: ");
    scanf("%d",&y);
    printf("\n");
    if(y>=0 && y<c)
    {
        int sum=0;
        printf("Elements of col %d is: ",y);
        for(i=0; i<r; i++)
        {
            printf("%d ",a[i][y]);
            sum=sum+a[i][y];
        }
        printf("\n");
        printf("sum of %d col is %d\n",y,sum);

    }
    else
    {
        printf("Invalid column!");
    }

}
