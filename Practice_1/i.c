#include<stdio.h>
void main()
{
int a,n,d1,d4;
printf("enter n: ");
scanf("%d",&n);
d1 = n % 10;
d4 = (n/1000)%10;
printf("sum of digits:%d",d1+d4);
}
