//
#include<stdio.h>
void main()
{
	int ans[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int i,j,k;

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			ans[i][j]=0;
			for(k=0;k<3;k++)
			{
				ans[i][j] = ans[i][j] + ans[i][k]*ans[k][i];
			}
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)	
		{
			printf("%d",ans[i][j]);
		}
		printf("\n");
	}
}


