#include<stdio.h>
void main()
{
int i,a[50];
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
int min = 20;
for(i=1;i<5;i++)
{
if(min == a[i])
{
printf(" number %d is present at location %d ",a[i],i);
}
}
}
