#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int read()
{
	FILE *fp;
	fp = fopen("file_lib.txt","r");
	int c = getc(fp);
	while(c != EOF)
	{
		putchar(c);
		c = getc(fp);
	}
	if(feof(fp))
	{
		printf("File Successfully Read");
	}
	else{
		printf("failure in reading file");
	}
	fclose(fp);
//	getchar();
	return 0;
}

int main(){
	read();
	return 0;
}
