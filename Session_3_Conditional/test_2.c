#include<stdio.h>
void main(){
float bookprice,days,fine,f;
printf("enter bookprice: ");
scanf("%f",&bookprice);
printf("enter latedays: ");
scanf("%f",&days);
if(days<=5){
fine = 5*days;
}
else if(days>5 && days<=10){
fine =25 + (days-5)*10;
}
else if(days>10 && days<30){
fine =25 + 50 + (days-10)*20;
}
else{
f = 25 + 50 + (days-10)*20;
if(f>bookprice){
fine =25 + 50 + (days-10)*20;
}
else{
fine = bookprice;
}
}
printf("fine is:%f ",fine);
}


