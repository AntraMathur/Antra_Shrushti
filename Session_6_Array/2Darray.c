#include<stdio.h>

void printarray(int a[][3])
{
	for(int i=0;i<3;i++)
	{
		for( int j=0;j<3;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
}

void main()
{
	int a[3][3];
	int sum =0;
	//int a,b,c;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(i == j)
			{
				sum = a[i][j] + sum;
			}
		}
	}
	printf("%d\n",sum);
	printarray(a);
}
