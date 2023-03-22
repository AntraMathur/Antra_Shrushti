#include<stdio.h>
#include<stdlib.h>
void main()
{

	FILE *fp,*fp1;
        int flag =0,count=0,count1=0;
	char ch,ch2;
	fp =fopen("realloc.c","r");
	fp1 = fopen("realloc.c","r");
/*	ch = getc(fp);
	printf("%c",ch);

	ch = getc(fp);
	printf("%c",ch);
*/
	while(1)
	{
		ch = getc(fp);
		ch2 = getc(fp1);
		if(ch == EOF)
		{
			break;
		}
		if(ch != EOF)
		{
			count1++;
		}
		if(ch2 == EOF)
		{
			break;
		}
		if(ch != ch2)
		{
			flag = 1;
			break;
		}
		if(ch == ch2)
		{
			count++;
		}
	}
	if(flag == 1)
	{
		printf("NE");
	}
	else{
		printf("E");
	}
	printf("%d",count);
	printf("%d",count1);			
}
