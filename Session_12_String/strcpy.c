#include<stdio.h>
#include<string.h>
void strcopy(char *str1,char *str2)
{
	//loop till last char
	while(*str2 !='\0')
	{
	*str1 = *str2;//add str2 to str1
	str1++;//increment
	str2++;
//printf("%s",str2);
        }
*str1 = '\0';
}

void main(){
char s1[] ="Parikh" ;
char s2[8];
strcopy(s2,s1);
printf("%s",s2);
}

