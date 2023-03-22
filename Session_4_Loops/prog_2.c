#include<stdio.h>
void main(){
char xyz;
printf("enter char: ");
scanf("%c",&xyz);
switch(xyz){
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
case 'A':
case 'E':
case 'I':
case 'O':
case 'U':
printf("char is vowel\n");
break;
default:
printf("not a vowel\n");
}
}

