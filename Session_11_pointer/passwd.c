#include<stdio.h>
#include<string.h>
void main()
{
int i,j,flag = 0,upp = 0,low=0,sp=0,dg=0;
char a[10];
printf("enter password");
scanf("%s",a);
printf("%s",a);
if((strlen(a)) > 8)
{
flag = 1;
}
for(i=0;i<=10;i++)
{
if(a[i]>=65 && a[i] <=90)
{
upp = 1;
}
if(a[i]>=97 && a[i] <=122)
{
low = 1;
}
if(a[i]>=33 && a[i] <=47)
{
sp = 1;
}
if(a[i]>=48 && a[i] <=57)
{
dg = 1;
}
}
if(flag == 1 || upp == 1 || low == 1 || sp == 1|| dg == 1){
printf("valid passwd");
}
else{
printf("invalid passwd");
}
}

