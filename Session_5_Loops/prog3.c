#include<stdio.h>
void main()
{
int n,sum=0,rev=0,rem;
printf("enter no: ");
scanf("%d",&n);
int temp = n;
while(n>0)
{
rem = n%10;
sum = sum + rem*rem*rem;
n = n/10;
}
if(sum == temp){
printf("Armstrong num\n");
}
else{
printf("not Armstrong");
}
}
