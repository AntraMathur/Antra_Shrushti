#include<stdio.h>
#include<stdlib.h>

void main()
{
	int a[2][3][2] = {
	{
		{5,10},
		{6,11},
		{7,12},
	},
	{
		{20,30},
		{21,31},
		{22,32}
	}	
	};
	int i,j,k;
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			for(k=0;k<2;k++)
	{
			printf("%d\n",*(*(*(a+i)+j)+k));
	}
			printf("\n");
	}
	}
}
