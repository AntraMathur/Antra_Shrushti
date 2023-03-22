#include<stdio.h>

void main()
{ 
  //write a program to perform add,sub,multi,div.
   
  int a,b,c,d,e,f;

  printf("Enter the number : ");
  scanf("%d",&a);

  printf("Enter the number : ");
  scanf("%d",&b);

  c = a + b;
  printf("Addition = %d\n",c);

  d = a - b;
  printf("Subtraction = %d\n",d);

  e = a * b;
  printf("Multiplication = %d\n",e);

  f = a / b;
  printf("Division = %d\n",f);
}
