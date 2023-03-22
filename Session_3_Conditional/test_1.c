#include<stdio.h>
void main()
{
float GS,TI,Tax,S;	
printf("enter GS : ");
scanf("%f",&GS);
printf("enter Savings : ");
scanf("%f",&S);
if(S > 100000){
TI = GS - 100000;
}
else{
TI = GS-S;
}
printf("Taxable income is:%f\n",TI);
if(TI<100000){
Tax = 0;
printf("Tax is:%f\n ",Tax);
}
else if(TI>=100000 && TI<=200000){
Tax = (TI-100000)*0.1;
printf("Tax is:%f\n",Tax);
}
else if(TI>=200000 && TI<=500000){
Tax = 100000*0.1 + (TI-200000)*0.2;
printf("Tax is:%f\n",Tax);
}
else{
Tax = 100000*0.1 + 0.2*300000 + 0.3*(TI-500000);
printf("Tax is:%f\n",Tax);
}
}




