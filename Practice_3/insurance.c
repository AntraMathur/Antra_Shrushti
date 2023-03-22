#include<stdio.h>

void main()
{
	int H,A,L,G,Premium,PolicyAmt;
	printf("enter health condn(E =1,P=2)");
	scanf("%d",&H);
	printf("enter AGE");
	scanf("%d",&A);
	printf("enter City or village(1/2)");
	scanf("%d",&L);
	printf("enter M or F(1/2)");
	scanf("%d",&G);
	if(H == 1)
		{
			if(A >= 25 && A<=35)
			{
				if(L == 1 && G == 1)
				{
					printf("Policy Amt < 2Lacs && premium = Rs.4000");
				 }
				if(L == 1 && G == 2)
				{
					printf("Policy Amt < 1Lacs && premium = Rs.3000");
				 }
				else
				{
				printf("No insurance");
				}
			}
			else
				{
				printf("No insurance");
				}
		}
	else if(H == 2)
	{
		if(A >= 25  && A<=35)
			{
				if(L == 0 && G == 1)
				{
					printf("Policy Amt < 10000 && premium = Rs.6000");
				 }
				else
				{
				printf("No insurance");
				}
			}
			else
				{
				printf("No insurance");
				}
	}
	else
	{
		printf("No insurance");
	}
}
