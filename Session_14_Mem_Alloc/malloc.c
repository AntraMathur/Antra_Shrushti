#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *fp;
	fp = (int *)malloc(sizeof(int)*5);
	printf("%lu",sizeof(fp));
	for(int i=0;i<5;i++)
	{
		scanf("%d",fp+i);
	}
	for(int i=0;i<5;i++)
	{
		printf("%d",*fp+i);
	}
	printf("%lu",sizeof(fp));
	//printf("%d",*fp);
	//free(fp);
*fp =10;
free(fp);
printf("%d",*fp);
}
