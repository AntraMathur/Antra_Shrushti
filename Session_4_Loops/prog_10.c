#include<stdio.h>
void main()
{
float BP,Q,SP,n,profit,loss,final=0;
printf("enter acq share no: ");
scanf("%f",&n);
while(n!=0)
{
printf("enter BP: ");
scanf("%f",&BP);
printf("enter Q: ");
scanf("%f",&Q);
printf("enter SP: ");
scanf("%f",&SP);
profit = SP*Q-BP*Q;
final = profit+ final;
printf("enter acq share no: ");
scanf("%f",&n);
}
printf("final profit for whole day is:%f\n",final);
}

