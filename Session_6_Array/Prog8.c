#include<stdio.h>
void main()
{
int i,a[50],j,k,b[50];
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
printf("array\n");
for(i=0;i<5;i++)
{
printf("%d\n",a[i]);
}
k = a[4];
for(j=0;j<5;j++)
{
b[j] = a[j-1];
}
b[0] = k;
printf("rotate cyclic array\n");
for(i=0;i<5;i++)
{
printf("%d\n",b[i]);
}
}
