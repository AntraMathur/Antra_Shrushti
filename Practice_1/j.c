#include<stdio.h>
void main(){
float PM=52,PTL=48,ML,IM,IFM,TL;
ML = (35*80000)/100;
IM = (52*80000)/100 - ML;
IFM =(52*80000)/100 - IM;
printf("ill male literacy: %f\n",IM);
printf("ill female literacy: %f\n",IFM);
}
