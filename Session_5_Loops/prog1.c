#include<stdio.h>
void main()
{
int n,sum=0,rev=0,rem,remb,revs =0;
printf("enter no: ");
scanf("%d",&n);
int temp = n;
/*
while(n>0)
{
rem = n%10;
rev = rev*10 + rem;
n = n/10;
}*/
do
{
rem = n%10;
rev = rev*10 + rem;
n = n/10;
}while(n>0);

printf("rev no is : %d",rev);
if(temp == rev){
printf("no is palindrome");
}
else{
printf("not a palindrome");
}
}

