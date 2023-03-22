#include<stdio.h>
void main()
{
int i,n,j,flag,a[10];
printf("enter N: ");
scanf("%d",&n);
printf("matrix element:\n ");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
	for(j=i+1;j<n;j++)
	{
		flag =0;
		if(a[i]<a[j])
		{
			flag = 1;
			break;
		}
	}
		if(flag == 0)
		{
			printf("%d\n",a[i]);
		}
}
}

