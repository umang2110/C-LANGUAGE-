#include<stdio.h>
#include<conio.h>

void main()
{
int i,j;
for(i=1;i<=7;i++)
{
for(j=1;j<=6;j++)
{
if((j==1||j==6)&&i==1)
{
printf("* ");
}
else if((j==1||j==6)&&i==2)
{
printf("* ");
}
else if((j==1||j==6)&&i==3)
{
printf("* ");
}
else if((j==1||j==6)&&i==4)
{
printf("* ");
}
else if((j==1||j==6)&&i==5)
{
printf("* ");
}
else if((j==1||j==6)&&i==6)
{
printf("* ");
}
else if((j==2||j==3||j==4)&&i==7)
{
printf("* ");
}
else
{
printf(" ");
}
}
printf("\n");
}

}