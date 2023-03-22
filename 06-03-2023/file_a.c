#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	char ch[50] = "THIS IS Morning";
	fp =fopen("realloc.txt","a");
/*
	if(fp == NULL){
		printf("File open unsuccesfull");
	}
		else{
		printf("File open Succesfull");
	}*/
	if(strlen(ch)>0)
	{		
		fputs(ch,fp);
		fputs("\n",fp);
	}	
	fclose(fp);	
}
