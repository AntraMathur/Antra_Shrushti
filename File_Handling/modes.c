#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a;
	FILE *fp;
	char str1;
	fp = fopen("read.txt","r");
	if(fp == NULL)
	{
		printf("FILE OPEN UNSUCESSFULL");
		exit(1);
	}
	printf("File Opened successfully\n");

	while(1){
	str1 = getc(fp);
	printf("%c",str1);
	if(str1 == EOF)
	{
		break;
	}
//	getchar();
	}
	fclose(fp);
	return 0;
}

