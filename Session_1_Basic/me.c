#include<stdio.h>

void main()
{ 
   
  int age,year;
  char name[20],city[20],branch[20],birthdate[10];

  printf("Enter the name : ");
  scanf("%s",name);

  printf("Enter the city : ");
  scanf("%s",city);

  printf("Enter the branch : ");
  scanf("%s",branch);

  printf("Enter the birthdate : ");
  scanf("%s",birthdate);

  printf("Enter the birthdate year : ");
  scanf("%d",&year);

  age = 2023 - year;
  printf("Age = %d\n",age);
}
