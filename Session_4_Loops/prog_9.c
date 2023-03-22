#include<stdio.h>
void main()
{
int n,price,code,quant,bill,total_bill =0;
printf("enter n: ");
scanf("%d",&n);
while(n!=0){

printf("enter code: ");
scanf("%d",&code);
printf("enter quant: ");
scanf("%d",&quant);

switch(code){
case 101:
price = 150;
break;
case 102:
price = 200;
break;
case 103:
price = 30;
break;
case 104:
price = 100;
break;
default:
price = 0;
}
bill = price*quant;
if (bill>500){
total_bill = total_bill + bill - 0.2*bill;
}
else{
total_bill = total_bill + bill;
}
printf("enter n: ");
scanf("%d",&n);
}
printf("bill is:%d ",total_bill);
}
