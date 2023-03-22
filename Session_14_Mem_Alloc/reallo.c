1#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *fp;
	fp = (int *)malloc(sizeof(int)*3);
	//printf("%lu",sizeof(fp));
	if(fp == NULL)
	{
		return 1;
	}
	for(int i=0;i<3;i++)
	{
		scanf("%d",&fp[i]);
	}
	for(int i=0;i<3;i++)
	{
		printf("%d",fp[i]);
	}
	int n2;
	scanf("%d", &n2);
	fp = (int *)realloc(fp,sizeof(int)*n2);
	if(n2>3)
	{
		for(int i=3;i<n2;i++)
		{
			scanf("%d",&fp[i]);
		}	
	}
	for(int i=0;i<n2;i++)
	{
		printf("%d",fp[i]);
	}
	return 0;
}
