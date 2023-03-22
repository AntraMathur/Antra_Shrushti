#include<stdio.h>
void main()
{
int a,b,choice;
printf("enter a: ");
scanf("%d",&a);
printf("enter b: ");
scanf("%d",&b);
printf("enter choice 1 for addition \n2 for subtraction \n3 for multi \n4 for division \n5 for modulo: ");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("addition is: %d\n",a+b);
break;
case 2:
printf("subtraction is: %d\n",a-b);
break;
case 3:
printf("multi is: %d\n",a*b);
break;
case 4:
printf("div is: %d\n",a/b);
break;
case 5:
printf("modulo is: %d",a%b);
break;
default:
printf("invalid ip");
}
}

