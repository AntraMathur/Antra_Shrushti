#include<stdio.h>

void main()
{
	int WH;
	printf("enter work hours");
	scanf("%d",&WH);
	if(WH >= 2 && WH<=3)
	{
		printf(" worker is highly eff");
	}
	else if(WH >=3  && WH<=4)
	{
		printf("worker needs to improve speed");
	}
	else if(WH>=4 && WH<=5)
	{
		printf("Worker needs to be given training");
	}	
	else
	{
		printf("worker is terminated");
	}
}
