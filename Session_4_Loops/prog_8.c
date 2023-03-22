#include<stdio.h>
void main()
{
int n,no,odd=0,even=0,negative=0,positive=0,zero=0;
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
scanf("%d",&no);
if(no<0){
negative++;
}
if(no>0){
positive++;
}
if((no%2 == 0 )&& (no != 0)){
even++;
}
if(no%2 != 0){
odd++;
}
if(no == 0){
zero++;
}
}
printf("negative nos are: %d\n",negative);
printf("positive nos are: %d\n",positive);
printf("zero nos are: %d\n",zero);
printf("odd nos are: %d\n",odd);
printf("even nos are: %d\n",even);
}

