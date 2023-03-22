#include<stdio.h>
void main(){
int input,n,d1,d2,a,b;
printf("enter input currency: ");
scanf("%d",&input);
n = input/100;
a = input%100;
if(a == 0)
d1 = n/50;
else
d1 = a/50;
b = a%50;
if(b == 0)
d2 = a/10;
else
d2 = b/10;
printf("100 rs notes : %d\n",n);
printf("50 rs notes : %d\n",d1);
printf("10 rs notes : %d\n",d2);
}


