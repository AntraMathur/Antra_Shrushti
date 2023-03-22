#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 15
struct Detail
{
	char B_NAME[MAX];
	char Date[10];
	char A_NAME[MAX];
	int BORROW;
}input;

int insert_before()
{

	char temp,c;
	FILE *fp;
	fp = fopen("file_lib.txt","a+");

	if(fp == NULL)
	{
		printf("File is not opened\n");
		exit(1);
	}

	else{
	rewind(fp);
	fprintf(stdout,"Enter Book name\n");
	fprintf(fp,"Name\n");
//	scanf("%c",&temp);
	//fprintf(fp,"\n");	
	//	fflush(stdin)
	fgets(input.B_NAME,MAX,stdin);
	fputs(input.B_NAME,fp);
        fflush(stdin);

	fprintf(stdout,"Enter Publish Date\n");
	fprintf(fp,"Publish Data\n");
//	scanf("%c",temp);
	fgets(input.Date,MAX,stdin);
	fputs(input.Date,fp);
	fflush(stdin);

	fprintf(stdout,"Enter Author name\n");
	fprintf(fp,"Author Name\n");
	fgets(input.A_NAME,MAX,stdin);
	fputs(input.A_NAME,fp);
	fflush(stdin);

	fprintf(stdout,"Enter 1 if borrowed\n");
	fprintf(fp,"Borrow Condtion\n");
	scanf("%d",&input.BORROW);
	fprintf(fp,"%d",input.BORROW);
	fflush(stdin);

	printf("File written succesfully\n");
	fclose(fp);
	}
}
void main()
{
	insert_before();
}	
	
