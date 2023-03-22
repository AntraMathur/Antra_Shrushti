#include<stdio.h>
#include<string.h>

void strcon(char s[],char q[],int a)
{
//printf("%s",p);
//printf("%s",q);
char temp;   
char *p = s;                 
for(int i =0,j=0,k = a-1;i<a/2;i++,j++,k--)
{
		temp = s[j];
		s[j] = s[k];
		s[k] = temp;
}
char *a = s;                  
while(*p != '\0')
{
p++;
}
while(*a != '\0')
{
*a =*q;
p++;
a++;
}
*p = '\0';
printf("%s",s);
char temp;                    
for(int i =0,j=0,k = a-1;i<a/2;i++,j++,k--)
{
		temp = s[j];
		s[j] = s[k];
		s[k] = temp;
}

}
void main()
{
char A[] = "SHAHRUKH";
int a = strlen(A);
char B[20];
strev(A,B,a);
}
