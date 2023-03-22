#include<stdio.h>
void main()
{
int i,a[50],b[50];
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
printf("reversed array");
for(i=4;i>=0;i--)
{
printf("%d",a[i]);
}
printf("array");
for(i=0;i<5;i++)
{
printf("%d",a[i]);
}
}
