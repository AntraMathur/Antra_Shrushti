#include<stdio.h>

void main()
{ 
  //Convert days to months and remaining days.

  int days,m,d;
  
  printf("Enter the days : ");
  scanf("%d",&days);

  m = days/30;
  printf("Months = %d\n",m);

  d = days%30;
  printf("Remaining days = %d\n",d);
}
