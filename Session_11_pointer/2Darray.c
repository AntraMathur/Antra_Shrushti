#include<stdio.h>
#include<stdlib.h>
const int M=3;
void print(int(*a)[3])
{
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d",a[i][j]);
		}
	}
}

void main()
{
	int a[2][3]= {{4,5,6},{7,8,9}};
	print(a);
}
