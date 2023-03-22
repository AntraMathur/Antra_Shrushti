//happy number

#include<stdio.h>
void main()
{
int a,n,z,x,sum =0,k ;
printf("enter a:");
scanf("%d",&a);
while(sum != 1 && sum !=4){
sum = 0;
while(a>0){
n = a%10;
sum = sum + n*n;
a =a/10;
}
a = sum;
}
if(sum == 1){
printf("z is happy number"); 
}
else {
printf("number is not a happy number");
}
}

