#include<stdio.h>
#include<conio.h>

void main()
{
    int i,x,temp,j,choice,n;
    printf("enter array size: ");
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }
    printf("\n");
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    do
    {
        printf("\nOption: \n");
        printf("1. left rotate:\n");
        printf("2. right rotate:\n");
        printf("3. Display:\n");
        printf("4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        printf("\n");
        switch(choice)
        {
        case 1:

            printf("enter position of rotate: ");
            scanf("%d",&x);
            if(x>=0 && x<n)
            {
                for(i=0; i<x; i++)
                {
                    temp=a[0];
                    for(j=0; j<n-1; j++)
                    {
                        a[j]=a[1+j];
                    }
                    a[n-1]=temp;

                }
                printf("left rotate successfully.\n");
            }
            else
            {
                printf("Invalid position !\n");
            }
            break;
        case 2:
            printf("enter position of rotate: ");
            scanf("%d",&x);
            if(x>=0 && x<n)
            {
                for(i=0; i<x; i++)
                {
                    temp=a[n-1];
                    for(j=n-1; j>0; j--)
                    {
                        a[j]=a[j-1];
                    }
                    a[0]=temp;
                }
                printf("right rotate successfully.\n");
            }
            else
            {
                printf("Invalid position !\n");
            }
            break;


        case 3:
            printf("rotating array is: ");
            for(i=0; i<n; i++)
            {
                printf("%d ",a[i]);
            }
            break;
        case 4:
            printf("exiting...!\n");
            break;
        default:
            printf("invalid choice!!");
        }
    }
    while(choice!=4);
}