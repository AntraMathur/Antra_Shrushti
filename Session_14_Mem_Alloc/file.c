#include<stdio.h>
#include<stdlib.h>
void main()
{

	FILE *fp;
	char ch;
	fp =fopen("realloc.c","r");
/*ch = getc(fp);
	printf("%c",ch);

	ch = getc(fp);
	printf("%c",ch);
*/
	while(1)
	{
		fseek(fp,2,SEEK_SET);		
		ch = getc(fp);
		if(ch == EOF)
		{
			break;
		}
	printf("%c\n",ch);
	}			
}
