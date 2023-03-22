#include<stdio.h>
#include<string.h>
#include<ctype.h>
void rev(char *s,int b,int i)
{
    int j,temp,count=0;
    for(j=0;j<(2*i);j = j+2)
    {
          temp = s[j];
          s[j] = s[j+1];
          s[j+1] = temp;
    } 
    //printf("%s",s);
    for(j=(2*i);j<i;j++)
    {
         count++;
    }
   // printf("%d",count);
    for(j=(2*i);j<i;j++)
    {
    if(count <i)
    {  
          temp = s[j];
          s[j] = s[j+1];
          s[j+1] = temp;
   }
   if((count >=i) && (count < (2*i)))
   {
          for(j=0;j<i;j=j+i)
         {
          temp = s[j];
          s[j] = s[j+1];
          s[j+1] = temp;
         }
   }
    }
    printf("%s",s);
}



void main()
{
int i;
scanf("%d",&i);
char s[] = "abcdefg";
int b = strlen(s);
rev(s,b,i);
}


