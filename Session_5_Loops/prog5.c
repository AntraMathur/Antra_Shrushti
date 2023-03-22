#include<stdio.h>
void main()
{
int count,z,rev=0,rem,r,temp;
int flag = 1;
printf("enter range of numbers");
scanf("%d",&z);
for(int j = 1;j<=z;j++)
{
int flag = 1;
int n0 = j;
for(int i=2;i<=n0-1;i++)
{
if(n0%i == 0){
flag = 0;
break;
}
printf("%d\n",i);
}
if(flag ==1){
count++;
}
}
printf("prime numbers between 1 and %d is: %d",z,count);

}
