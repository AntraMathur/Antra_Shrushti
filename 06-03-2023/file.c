#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	FILE *fp;
	char ch[100];
	char a[30] = "Today is Sunday";
	fp =fopen("realloc.txt","r+");
	if(fp == NULL){
		printf("File open unsuccesfull\n");
		exit(1);
	}
		else{
		printf("File open Succesfull\n");
	}
	/*while(fgets(ch,100,fp) != NULL)
	{		
	printf("%s\n",ch);
	}*/
	if(strlen(a)>0)
	{
		fputs(a,fp);
	}	
	while(fgets(ch,100,fp) != NULL)
	{		
	printf("%s\n",ch);
	}
	fclose(fp);	
}
