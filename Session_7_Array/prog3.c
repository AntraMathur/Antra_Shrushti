#include<stdio.h>
void main()
{
int i,n,j,sum,s,e,k;
printf("enter N: ");
scanf("%d",&n);
int a[] = {12,2,3,7,5};
for(i=1;i<6;i++)
{
sum = a[i];
for(j=i+1;j<6;j++)
{
sum = sum + a[j];
if(sum == n)
{
printf("%d %d\n",i,j);
for(k=i;k<=j;k++)
{
printf("%d\n",a[k]);
}
}
}
}
}

