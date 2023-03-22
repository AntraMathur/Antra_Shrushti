#include<stdio.h>
void main()
{
int a, noh,d,i;
int hd = 8;
printf("enter noh: ");
scanf("%d",&noh);
for(int i = 1;i<=noh;i++){
printf("enter dates: \n");
scanf("%d",&d);
if(d == 6||d == 7||d == 13||d == 14||d == 20||d == 21||d == 27||d == 28){
}
else
{
hd = hd + 1;
}
}
printf("holidays are:%d ",hd);
}
