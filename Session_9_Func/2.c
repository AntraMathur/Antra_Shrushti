#include<stdio.h>
int calculatebill(int code,int q);
int calculatebill(int code,int q)
{
int bill,a;
if(code == 1)
{
   bill = q*150;
}
if(code == 2)
{
   bill = q*300;
}
return bill;
}

void main()
{	
  int r = calculatebill(1,2);
  printf("%d is bill",r);
}    
