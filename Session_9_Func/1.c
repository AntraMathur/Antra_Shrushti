#include<stdio.h>
int sum();
char Grade(int m)
{
char ans ;
if(m<=100 && m>80)
ans = 'A';
else if(m<=80 && m>60)
ans = 'B';
else if(m<=60 && m>40)
ans = 'C';
else if(m<40)
ans = 'F';
return ans;
}
void main()
{
char a = Grade(45);
printf("%s is Grade",a);
}
