#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void strcopy(char *str1,char *str2)
{
	//loop till last char
	while(*str2 !='\0')
	{
	*str1 = *str2;//add str2 to str1
	str1++;//increment
	str2++;
//printf("%s",str2);
        }
*str1 = '\0';
}

void main(int argc , char* argv[])
{
	char *s1;
	char *s2 = malloc(sizeof(char*)*strlen(argv[1]));
	char *s3 = malloc(sizeof(char*)*strlen(argv[2]));
	if(argc == 1)
	{
		printf("No value other than program name");
		printf("prog name : %s",argv[0]);
	}
	if(argc >=2)
	{
	 strcopy(s2,argv[1]);
	strcopy(s3,argv[2]);
	}
	printf("%s",s2);
	printf("\n%s",s3);

}
