#include<stdio.h>

void main()
{
	int A,MS,G;
	printf("Enter age , Marital status( 1 for M & 2 for UM) & Gender of person( 1 for F and 2 for male)");
	scanf("%d",&A);
	scanf("%d",&MS);
	scanf("%d",&G);
	if(A > 20)
	{
		if(A < 25)
		{
			if(MS  == 2)
			{
				printf("Valid");
			}
		}
		else
		{
			if(MS == 1)
			{
				if(G == 2)
				{
					printf("Valid");
				}
			}
		}
	}
	else{
		printf("Invalid");
		}
}
