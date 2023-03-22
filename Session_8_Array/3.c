#include<stdio.h>
void main()
{
int i,temp=0,a[] = {10,25,35,30,40,45};
for(i=0;i<5;i++)
{
temp = a[i];
a[i] = a[i+1];
a[i+1] = temp;
i=i+2;
}
for(i=0;i<6;i++)
{
printf("%d ",a[i]);
}
}
