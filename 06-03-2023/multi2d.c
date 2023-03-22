#include<stdio.h>
#include<stdlib.h>

void main()
{
	int a[3][2] = {
		{5,10},
		{6,11},
		{7,12},	
	};
	int i,j,k;
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			printf("%d\n",*(*(a+i)+j));
	}
			printf("\n");
	}
}
