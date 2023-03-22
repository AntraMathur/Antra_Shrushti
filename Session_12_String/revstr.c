#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//function for reversing string
void strrevs(char *str1)
{
	
	int a = strlen(str1);
	char *str2 = malloc(sizeof(char*)*strlen(str1));
	//save reverse string in 
	for(int i =a-1;i>=0;i--)
	{
		*str2 = str1[i];
		printf("%s\n",str2);
		str2++;
	}
	for(int i=0;i<a;i++){
		printf("%s",str2); 
}
printf("%p",*str2);
}

void main(){
char s1[100] ="ParikhShrushti" ;
char *P=s1;
strrevs(P);
//printf("%s",a);
//printf("%s",P);
}

