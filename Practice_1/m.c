#include<stdio.h>
void main()
{
int a,n,d1,d2,d3,d4,d5;
printf("enter n: ");
scanf("%d",&n);
d1 = (n+1)% 10;
d2 = (n/10 + 1)%10;
d3 = (n/100 + 1)%10;
d4 = (n/1000 + 1)%10;
d5 = (n/10000+ 1)%10;
printf("rev of digits:%d%d%d%d%d\n",d5,d4,d3,d2,d1);
}
