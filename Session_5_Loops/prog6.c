#include<stdio.h>
void main()
{
int a,n,sum=0,rev=0,rem,remb,temps;
printf("enter no: ");
scanf("%d",&n);
int temp = n;
int revs =temp;
while(n>0)
{
rem = n%10;
rev = rev*10 + rem;
n = n/10;
}
printf("rev no is : %d",rev);
if(temp == rev){
printf("no is palindrome");
}
else{
temps = temp/10;
while(temps>0)
{
remb = temps%10;
revs = 10*revs + remb;
temps = temps/10;
}
printf("rev no is : %d",revs);

}
}

