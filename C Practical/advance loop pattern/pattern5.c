#include<stdio.h>
#include<conio.h>

void main()
{
int i,j,k,l,m,n;
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
for(i=2;i<=5;i++)
{
for(j=1;j<=i;j++)
{
printf("%d ",j);
}
for(k=4;k>=i;k--)
{
printf("    ");
}
for(l=i;l>=1;l--)
{
printf("%d ",l);
}
printf("\n");
}
}