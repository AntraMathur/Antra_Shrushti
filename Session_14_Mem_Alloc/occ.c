#include<stdio.h>
#include<stdlib.h>
void main()
{

	FILE *fp;
	int count = 0;
	char ch;
	fp =fopen("realloc.c","r");
/*ch = getc(fp);
	printf("%c",ch);

	ch = getc(fp);
	printf("%c",ch);
*/		ch = getc(fp);
		while(ch !=)
		{
		if(ch == 'o' || ch == 'O')
		{
			count++;
		}
	    printf("%d",count);
		}			
}
