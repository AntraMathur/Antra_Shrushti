#include<stdio.h>
int a,b;
void sum1();
int sum2(int x,int y);
void sum3(int a,int b);
int sum4();
	void sum1()
	{
	int x,y,sum;
	printf("enter x: ");
	scanf("%d",&x);
	printf("enter y: ");
	scanf("%d",&y);
	sum = x+y;
	printf("%d\n",sum);
	}
	int sum2(int x,int y)
	{
	int sumw = x+y;
	return sumw;
	}
	void sum3(int a,int b)
	{
	int suml;
	suml = a+b;
	printf("%d\n",suml);
	}
	int sum4()
	{
	int x,y;
	printf("enter x: ");
	scanf("%d",&x);
	printf("enter y: ");
	scanf("%d",&y);
	int sumq = x+y;
	return sumq;
	}
void main()
{
sum1();
a = sum2(6,4);
printf("%d\n",a);
sum3(4,4);
b = sum4();
printf("%d\n",b);
}




