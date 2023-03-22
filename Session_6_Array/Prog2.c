#include<stdio.h>
void main()
{
int i,a[50];
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
int min = a[0];
for(i=1;i<5;i++)
{
if(min > a[i])
{
min = a[i];
}
}
printf("min number is:%d \n",min);
int max = a[0];
for(i=1;i<5;i++)
{
if(max < a[i])
{
max = a[i];
}
}
printf("max number is:%d \n",max);
int sum = 0;
for(i=0;i<5;i++)
{
sum = sum + a[i];
}
printf("sum number is:%d ",sum);
int avg;
avg = sum/5;
printf("avg number is:%d ",avg);
}
