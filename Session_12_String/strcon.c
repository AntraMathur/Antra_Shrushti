#include<stdio.h>
#include<string.h>
void strcon(char *str1,char *str2)
{
char *P=str1;
//loop till last char
while(*P !=0){
P++;
}
//str2 copy to p from last char
while(*str2 !='\0'){
//printf("%c\n",*str2);
*P = *str2;
str2++;//str2 increment
P++;//P increment
}
*P = '\0';//NULL char last
}

void main(){
char s1[100] ="ParikhShrushti" ;
char s2[100] = "Shrushti";
strcon(s1,s2);
printf("%s",s1);
