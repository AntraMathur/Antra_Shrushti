#include<stdio.h>
void main()
{
	FILE *f1,*f2;
	char ch;
	f1 = fopen("realloc.c","r");
	f2 = fopen("copy.text","a");
	do
	{
		ch = getc(f1);
		putc(ch,f2);
	}while(ch != EOF);
	
	fclose(f1);
	fclose(f2);
	printf("FILE COPIED");
}
