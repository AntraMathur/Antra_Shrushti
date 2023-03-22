#include<stdio.h>
void main()
{
int i,a[50],b[50];
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{
b[i] = a[i];
}
printf("A array\n");
for(i=0;i<5;i++)
{
printf("%d\n",a[i]);
}
printf("B array\n");
for(i=0;i<5;i++)
{
printf("%d\n",b[i]);
}
}
