#include<stdio.h>
void main()
{
int i,j;
for(i=1;i<=5;i++)
{
for(j = 1;j<=5;j++)
{
//if(i == 1 || j == 3 ){
//if(i == 1 || j == 1 || i == 3 || i == 5){
//if(j == 1 || j == i || j == 5){
//if(i == 1 || i == 3 || i == 5|| i == 5){
if(i == 1 || i == 3|| i == 5 ||i <=3 && j == 1||i >= 4 && j == 5 )
{
printf("*");
}
else
{
printf(" ");
}
}
printf("\n");
}}

