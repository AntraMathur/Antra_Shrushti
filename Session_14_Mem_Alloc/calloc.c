#include<stdio.h>
#include<stdlib.h>

void main()
{
	int i,n;
	int *f;
	scanf("%d",&n);
	f = (int*)calloc(n,sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",&f[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d",f[i]);
	}
}
