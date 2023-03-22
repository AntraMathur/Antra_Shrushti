#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 15

struct Detail
{
	char B_NAME[MAX];
	char Date[10];
	char A_NAME[MAX];
	int BORROW;
}input;

void Insert_Details()
{
	int Yes;
	char temp;
	FILE *fp;
	fp = fopen("file_lib.txt","w+");	
	if(fp == NULL)
	{
		printf("File is not opened\n");
		exit(1);
	}

	else{
	fprintf(fp,"Library Data\n");
	printf("Do u want to enter data?");
	scanf("%d",&Yes);

	while(Yes == 1)
	{
	fprintf(stdout,"Enter Book name\n");
	fprintf(fp,"Name\n");
	scanf("%c",&temp);
	//fprintf(fp,"\n");	
	//	fflush(stdin)
	fgets(input.B_NAME,MAX,stdin);
	fputs(input.B_NAME,fp);
        fflush(stdin);

	fprintf(stdout,"Enter Publish Date\n");
	fprintf(fp,"Publish Data\n");
	fgets(input.Date,10,stdin);
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
	fprintf(fp,"%d\n",input.BORROW);
	fflush(stdin);
	printf("do you want to enter data?");
	scanf("%d",&Yes);
	}
	printf("File written succesfully\n");
	fclose(fp);
	}
}

int main()
{
	Insert_Details();
	return 0;
}


