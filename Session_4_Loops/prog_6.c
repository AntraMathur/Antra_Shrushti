#include<stdio.h>
void main()
{
int i;
scanf("%d",&i);
printf("even no\n");
for(int n=i;n<=i+20;n++)
if(n%2 == 0)
printf("%d\n",n);
printf("odd no\n");
for(int n=i;n<=i+20;n++)
if(n%2 != 0)
printf("%d\n",n);
}
