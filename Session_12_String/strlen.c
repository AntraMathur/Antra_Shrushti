#include<stdio.h>
#include<string.h>
int mystrlen(char *string);
void main(){
	char string[] = "Shrushti";
	int len;
	len = strlen(string);
	printf("len of string : %d\n",len);
	int a = mystrlen(string);
	printf("%d",a);
}

int mystrlen(char *string)
{
	int len=0;
//pointer till last char
	while((*string) != '\0'){
		len++;//len increment count
		string++;//string increment
	}
	return len;//returns len of string
}
