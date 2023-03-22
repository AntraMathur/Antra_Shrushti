#include<stdio.h>
void main(){
char Dep,qual;
float yos;
printf("enter dep: ");
scanf("%s",&Dep);
printf("enter qual: ");
scanf("%s",&qual);
printf("yos: ");
scanf("%f",&yos);
if((Dep == 'I' || 'A' || 'H' ) && (yos<60) && (qual == 'P' || 'G'))
{
if(Dep == 'I'){
if(yos >=10){
if(qual == 'P'){
printf("Salary =%f ",150000+(yos-10)*2500);
}
else {
printf("Salary = 100000");
}
}
else{
if(qual == 'P'){
printf("Salary = 100000");
}
else {
printf("Salary = 70000");
}
}
}
if(Dep == 'A'){
if(yos >=10){
if(qual == 'P'){
printf("Salary = 120000");
}
else {
printf("Salary = 90000");
}
}
if(yos <10){
if(qual == 'P'){
printf("Salary = 100000");
}
else {
printf("Salary = 60000");
}
}
}
if(Dep == 'H'){
if(yos >=10){
if(qual == 'P'){
printf("Salary = 100000");
}
else {
printf("Salary = 80000");
}
}
if(yos <10){
if(qual == 'P'){
printf("Salary = 900000");
}
else {
printf("Salary = 50000");
}
}
}
}
else{
printf("invalid ip");
}
}

