#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	char ch[30];
	fp = fopen("a.txt","w");
	fputs("this is file",fp);
	//fputs(ch,fp);
	fclose(fp);
}	

