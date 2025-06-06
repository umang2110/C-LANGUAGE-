#include<stdio.h>
#include<conio.h>

float add(float a,float b)
{
    return a+b;
}
float sub(float a,float b)
{
    return a-b;
}
float mul(float a,float b)
{
    return a*b;
}
float div(float a,float b)
{
    return a/b;
}

void main()
{
    float a,b,ans;
    char choice;
    printf("Enter value 1:");
    scanf("%f",&a);
    printf("Enter value 2 :");
    scanf("%f",&b);
    printf("Select your choice +,-,*,/ :");
    scanf(" %c",&choice);

    switch(choice)
    {
    case '+':
        ans=add(a,b);
        printf("%f",ans);
        break;
    case '-':
        ans=sub(a,b);
        printf("%f",ans);
        break;
    case '*':
        ans=div(a,b);
        printf("%f",ans);
        break;
    case '/':
        ans=mul(a,b);
        printf("%f",ans);
        break;
    default:
        printf("Enter valid input !");
    }

}
