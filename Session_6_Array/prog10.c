#include<stdio.h>
void main()
{
int b,i,j,a[6],count;
printf("enter N: ");
scanf("%d",&b);
printf("matrix element:\n ");
for(i=0;i<b;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<b;i++)
{
int count = 0;
for(j=0;j<b;j++)
{
if(a[i] == a[j])
{
count++;
}
}
printf("occurence of %d is: %d ",a[i],count);
}
}
