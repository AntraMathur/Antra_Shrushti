#include<stdio.h>
void main()
{
int i,count =0,sum =0;
scanf("%d",&i);
printf("num divi\n");
for(int n = 1;n <=i;n =n+2)
{
if(n%5==0 || n%3 ==0){
printf("%d\n",n);
count++;
}
}
printf("count for 5 & 3is:%d\n",count);
}
