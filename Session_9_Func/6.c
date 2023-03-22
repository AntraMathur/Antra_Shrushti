#include<stdio.h>
int iseven(int q);
int isprime(int e);
int isprime(int e)
{
int flag = 0;
int i,j;
for(int j = 1;j<=e;j++)
{
int flag = 1;
int n0 = j;
for(int i=2;i<=e-1;i++)
{
if(n0%i == 0){
flag = 0;
break;
}
}
}
if(flag ==1){
return 0;
}
else{
return 1;
}
}

int iseven(int q)
{
if((q%2) == 0)
{
return 1;
}
else
{
return 0;
}
}

void main()
{
int i;
for(i=1;i<=10;i++)
{
//if(iseven(i))
//{
//printf("%d\n",i);
//}
if(isprime(i))
{
printf("%d\n",i);
}
}
}

