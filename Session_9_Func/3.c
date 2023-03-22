#include<stdio.h>
int pow1(int x,int y);
void pow2(int x,int y);
int pow1(int x,int y)
{
int power=1,i,j;
for(i=1;i<y+1;i++)
{
 power = x*power;
}
return power;
}
void pow2(int x,int y)
{
int power=1,i,j;
for(i=1;i<y+1;i++)
{
 power = x*power;
}
printf("%d is power\n",power);
}
void main(){
int ans = pow1(2,3);
printf("%d is pow\n",ans);
pow2(2,2);
}
