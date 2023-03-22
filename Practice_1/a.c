#include<stdio.h>
int main(){
float BS;
float *a;
printf("enter BS: ");
scanf("%f",&BS);
printf("gross salary is : %f\n",0.4*BS + 0.2*BS +BS);
a = &BS;
printf("%p",a);

}
