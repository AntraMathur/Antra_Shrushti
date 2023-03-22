#include<stdio.h>
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
	int *tmp;
	tmp = (int *)realloc(fp,sizeof(int)*4);
	if(tmp == NULL)
	{
		free(fp);
		return 1;
	}
	
	tmp[3] = 4;
	for(int i=0;i<4;i++)
	{
		printf("%d",tmp[i]);
	}
	free(tmp);
	return 0;
}
