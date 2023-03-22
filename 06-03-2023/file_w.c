#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main()
{
	FILE *fp;
	char a[40] ;
	char ch[50] = "THIS IS EVENING";
	fp =fopen("realloc.txt","w+");
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
	fwrite(ch,strlen(ch)+1,1,fp);
	fseek(fp,0,SEEK_SET);
	fread(a,strlen(ch) + 1,1,fp);
		printf("%s",a);
	fclose(fp);	
}
