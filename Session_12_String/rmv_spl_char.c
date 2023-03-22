#include<stdio.h>
#include<string.h>
int isalphas(char c)
{
if((c>='A'&& c<='Z' ) || (c>='a' && c<='z' )){
return 1;
}
else{
return 0;
}
}

void main()
{
char a[20] = "@@@abc@@AB";
int j = 0;
for(int i=0;i<strlen(a);i++)
{
if(isalphas(a[i])){
//printf("%c",a[i]);
a[j] = a[i];
j++;
}
}
a[j] = '\0';
printf("%s\n",a);
}


