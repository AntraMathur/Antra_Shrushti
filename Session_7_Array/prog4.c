#include<stdio.h>
void main()
{
int a[10][10],i,j;
printf("enter data\n");
for(i=0;i<3;i++)
{
for(j=0;j<2;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("Array");
for(i=0;i<3;i++)
{
for(j=0;j<2;j++)
{
printf("a[%d][%d] = %d",i,j,a[i][j]);
}
printf("\n");
}
}
