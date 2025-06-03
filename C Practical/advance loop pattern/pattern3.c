#include<stdio.h>
#include<conio.h>

void main()
{
int i,j,m,n;
for(i=5;i>=1;i--)
{
for(j=1;j<=i;j++)
{
printf("%d ",j);
}
for(m=4;m>=i;m--)
{
printf("    ");
}
for(n=i;n>=1;n--)
{
printf("%d ",n);
}
printf("\n");
}

}