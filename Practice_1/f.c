#include<stdio.h>
void main()
{
int C,D;
printf("enter num for location C: ");
scanf("%d",&C);
printf("enter num for location D: ");
scanf("%d",&D);
C = C * D;
D = C / D;
C = C / D;
printf("number at location C : %d\n",C);
printf("number at location D : %d\n",D);
}

