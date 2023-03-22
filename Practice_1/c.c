#include<stdio.h>
void main(){
int a,b,c,d,e,agg_marks,per;
printf("enter marks1: ");
scanf("%d",&a);
printf("enter marks2: ");
scanf("%d",&b);
printf("enter marks3: ");
scanf("%d",&c);
printf("enter marks4: ");
scanf("%d",&d);
printf("enter marks5: ");
scanf("%d",&e);
agg_marks = a+b+c+d+e;
printf("aggr_marks are:%d\n",agg_marks);
per = (agg_marks)*100/500;
printf("perc is:%d\n",per);
}


