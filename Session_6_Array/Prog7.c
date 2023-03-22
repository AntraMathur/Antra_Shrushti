#include<stdio.h>
void main()
{
int i,a[50],j,k;
for(i=0;i<7;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<7;i++)
{
int sum=0,r=0;
for(j=0;j<i;j++)
{
sum = sum + a[j];
}
for(k=i+1;k<7;k++)
{
r = r + a[k];
}
if(r == sum)
{
printf("array is eq at location %d",i);
}
}
}
