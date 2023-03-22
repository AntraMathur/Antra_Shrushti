#include<stdio.h>
void main()
{
int i,n,j,flag,a[10],sum1,s3=0;
printf("enter N: ");
scanf("%d",&n);
printf("matrix element:\n ");
for(i=0;i<(n-1);i++)
{
	scanf("%d",&a[i]);
}
sum1 = (n*(n+1))/2;
int sum2 =0;
for(i=0;i<(n-1);i++)
{
	sum2 += a[i];
}
s3 = sum1-sum2;
printf("mising element is : %d",s3);
}
