#include<stdio.h>
void main()
{
int a,n,d1,d2,d3,d4,d5;
printf("enter n: ");
scanf("%d",&n);
d1 = n % 10;
d2 = (n/10)%10;
d3 = (n/100)%10;
d4 = (n/1000)%10;
d5 = (n/10000)%10;
printf("rev no:%d%d%d%d%d",d1,d2,d3,d4,d5);
}
