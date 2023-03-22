#include<stdio.h>
void main()
{
char C,P,G,Cu,u;
int a,CM,CP,CG,bill,Q,totalbill = 0,O,billG=0,billC=0,billP =0;
printf("Do you want to order?");
scanf("%d",&O);
while(O !=0)
{
scanf("%s",&u);
printf("Enter cuisine: ");
scanf("%s",&Cu);
switch(Cu)
{
case 'C':
printf("MENU \n1 for Full Meal = 200\n2 for Half Meal = 100\n");
scanf("%d",&CM);
printf("Enter Quantity for each");
scanf("%d",&Q);
if(CM == 1){
bill = 200*Q;
}
if(CM == 2){
bill = 100*Q;
}
billC =+ bill;
break;
case 'P':
printf("MENU \n1 for Full Meal = 200\n2 for Half Meal = 100\n");
scanf("%d",&CP);
printf("Enter Quantity for each");
scanf("%d",&Q);
if(CP == 1){
bill = 200*Q;
}
if(CP == 2){
bill = 100*Q;
}
billP =+ bill;
break;
case 'G':
printf("MENU \n1 for Full Meal = 200\n2 for Half Meal = 100\n");
scanf("%d",&CG);
printf("Enter Quantity for each");
scanf("%d",&Q);
if(CG == 1){
bill = 200*Q;
}
if(CG == 2){
bill = 100*Q;
}
billG =+ bill;
break;
default:
printf("not available right");
}
printf("Do you want to order?");
scanf("%d",&O);
bill = billG + billC + billP;
totalbill =+bill;
}
printf("total bill is:%d\n",totalbill);
}




