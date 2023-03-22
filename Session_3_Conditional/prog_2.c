#include<stdio.h>
void main()
{
float amtc,amtm,comm_c,comm_m,comm;
printf("enter amt for CPU: ");
scanf("%f",&amtc);
printf("enter amt for Monitor: ");
scanf("%f",&amtm);
if(amtc<10000){
comm_c = 0;
}
else if(amtc>=10000 && amtc<25000){
comm_c = 0.08*amtc;
}
else{
comm_c = 2000 + amtc*0.1;
}
if(amtm<10000){
comm_m = 0.05*amtm;
}
else{
comm_m = 0.05*10000 + (amtm -10000)*0.08;
}
printf("total commision for m is: %f\n",comm_m);
printf("total commision for c is: %f\n",comm_c);
comm = comm_m + comm_c;
printf("total commision is: %f\n",comm);
}


