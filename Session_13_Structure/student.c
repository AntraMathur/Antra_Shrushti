#include<stdio.h>
struct Student{
int roll_no;
char name[20];
}S1,S2,S[1];

void main()
{
scanf("%d",&S1.roll_no);
scanf("%s",S1.name);
scanf("%d",&S2.roll_no);
scanf("%s",S2.name);
for(int i=0;i<1;i++)
{
      scanf("%d ",&S[i].roll_no);
      scanf("%s",S[i].name);
}
printf("%d - ",S1.roll_no);
printf("%s \n",S1.name);
printf("%d - ",S2.roll_no);
printf("%s\n",S2.name);
for(int i=0;i<1;i++)
{
      printf("%d - ",S[i].roll_no);
      printf("%s \n",S[i].name);
}
}
