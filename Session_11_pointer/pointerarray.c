#include<stdio.h>
void f2(int *P[5])
{
int i;
for(i=0;i<5;i++)
{
	scanf("%d",P[5]);
	P = P +1;
}
}

void f1(int **P)
{
int i;
for(i=0;i<5;i++)
{
	printf("%d",*P[5]);
	P = P +1;
}
}

void main()
{
int a[5][5] ;
f2(a);
f1(a);
}
