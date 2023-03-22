#include<stdio.h>
int facto(int n);
void facto2(int n);
int facto(int n)
{
int i,fact =1;
for(i=1;i<n+1;i++)
{
fact = fact*n;
}
return fact;
}
void facto2(int n)
{
int i,fact =1;
for(i=1;i<n+1;i++)
{
fact = fact*i;
}
printf("%d\n",fact);
}
void main(){
int z = facto(2);
printf("%d\n",z);
facto2(3);
}
