#include<stdio.h>
void main()
{
int n0,n,rev=0,rem,r,temp,count=0;
printf("enter range");
scanf("%d",&n0);
for(int i=1;i<=n0;i++)
{
int sum=0;
temp = i;
n=i;
while(n!=0)
{
rem = n%10;
sum = sum + rem*rem*rem;
n = n/10;
}
if(sum == temp)
{
printf("%d ",temp);
count++;
}
}
printf("count is:%d \n",count);
}
