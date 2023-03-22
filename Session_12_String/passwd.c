//removes special characters(other than alphabets) from given string
#include<stdio.h>
#include<string.h>
#include<ctype.h>
//function for alphabet
int isalphas(char c)
{
	if((c>='A'&& c<='Z' ) || (c>='a' && c<='z' ))	
	{
		return 1;
	}
	else	
	{
		return 0;
	}
}

void main()
{
	char a[20] = "@@@abc@@AB";
	int j = 0;
	for(int i=0;i<strlen(a);i++)
	{
		if(isalphas(a[i]))//checks whether given letter is alphabet or not
		{
			a[j] = a[i];
			j++;
		}
	}
	a[j] = '\0';//null after completion
	printf("%s\n",a);//prints string after removing other letters
}


