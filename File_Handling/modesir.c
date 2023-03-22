
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	FILE *fp;
	fp = fopen("read2.txt","w+");
	char c[50] = "Hi Hello";
	if(fp == NULL)
	{
		printf("fopen unsuccesfull");
	}
	else
	{
		printf("File opened");
		fprintf(fp,"%s %s %s","Shrushti", "Parikh",c);
		if(strlen(c) > 0)
		{
			fputs(c,fp);
			fputs("/n",fp);
		}
		fclose(fp);
		printf("data written");
	}
	return 0;
}
