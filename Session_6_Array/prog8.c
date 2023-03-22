#include<stdio.h>
void main()
{
int b,i,j,a[6],count,index;
printf("enter N: ");
scanf("%d",&b);
printf("enter index: ");
scanf("%d",&index);
printf("matrix element:\n ");

for(i=0;i<b;i++)
{
scanf("%d",&a[i]);
}
if(index < b+1)
{
for(i=index-1;i<b-1;i++)
{
a[i] = a[i+1];
}
for(i=0;i<b-1;i++)
{
printf("%d ",a[i]);
}
}
}
