#include<stdio.h>
#include<conio.h>

void main()
{
int i,j;
for(i=1;i<=7;i++)
{
for(j=1;j<=7;j++)
{
if(i==1||i==7)
{
printf("* ");
}
else if(j==6&&i==2)
{
printf("* ");
}
else if(j==5&&i==3)
{
printf("* ");
}
else if(i==4&&j==4)
{
printf("* ");
}
else if(j==3&&i==5)
{
printf("* ");
}
else if(j==2&&i==6)
{
printf("* ");
}
else
{
printf("  ");
}
}
printf("\n");
}

}