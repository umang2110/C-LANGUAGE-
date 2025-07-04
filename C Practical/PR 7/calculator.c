#include<stdio.h>
#include<conio.h>

void main()
{
    float n,m;
    int i,j;
    int choice;

    do
    {
        printf("\nOption: \n");
        printf("Press 1 for +:\n");
        printf("Press 2 for -:\n");
        printf("Press 3 for *:\n");
        printf("Press 4 for /:\n");
        printf("Press 5 for %:\n");
        printf("Press 0 for the exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            printf("Enter first no:");
            scanf("%f",&n);
            printf("Enter second no:");
            scanf("%f",&m);
            printf("addition of %.2f and %.2f is %.2f.\n",n,m,n+m);
            break;
        case 2:
            printf("Enter first no:");
            scanf("%f",&n);
            printf("Enter second no:");
            scanf("%f",&m);
            printf("subtr of %.2f and %.2f is %.2f.\n",n,m,n-m);
            break;
        case 3:
            printf("Enter first no:");
            scanf("%f",&n);
            printf("Enter second no:");
            scanf("%f",&m);
            printf("multiplication  of %.2f and %.2f is %.2f.\n",n,m,n*m);
            break;
        case 4:
            printf("Enter first no:");
            scanf("%f",&n);
            printf("Enter second no:");
            scanf("%f",&m);
            printf("divison of %.2f and %.2f is %.2f.\n",n,m,n/m);
            break;
        case 5:

            printf("Enter first no:");
            scanf("%d",&i);
            printf("Enter second no:");
            scanf("%d",&j);

            printf("modules of %d and %d is %d",i,j,i%j);
            break;
        case 0:
            printf("exiting...");
            break;
        default :
            printf("Invalid choice");

        }
    } while(choice!=0);

}

