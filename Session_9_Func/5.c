#include<stdio.h>
int fib(int n);
int fib(int n){
int i , j = 0;int k = 1;
int sum = 0;
int fib = 0;
for(i=2;i<=n;i++)
{
sum = sum + i;
printf("%d",sum);
}

return fib;
}
void main()
{
int z = fib(5);
printf("%d",z);
}
