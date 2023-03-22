#include<stdio.h>
void main(){
float d;
printf("enter distance b/w two cities in km: ");
scanf("%f",&d);
printf("distance in m :%f\n",d*1000);
printf("distance in cm :%f\n",d*100000);
printf("distance in ft :%f\n",d*3280.84);
printf("distance in in :%f\n",d*39370.1);
}
