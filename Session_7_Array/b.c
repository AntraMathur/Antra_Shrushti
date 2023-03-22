#include<stdio.h>
void main()
{
int A[8] = {100,180,260,310,40,535,695};
int i,j,k,l,b,c,sum=0,profit=0;
for(i=1;i<7;i++)
{
int sum=0;
int b=0,c=0;
for(j=i+1;j<7;j++)
  { 
  if(A[i]<A[j]) 
  sum = A[j]-A[i];
  if(sum>0 && profit<sum)
      profit =sum;
      k = i;
      l = j; 
}
}
printf("%d is profit\n on %d buy and %d sale",profit,k+1,l+2);
}
  

