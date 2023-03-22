#include<stdio.h>

void main()
{
	float H,C,T;
	printf("enter hardness,c & tensile");
	scanf("%f" ,  &H);
	scanf("%f" ,  &C);
	scanf("%f" ,  &T);
	if(H>50&& C<0.7 && T>5600)
	{
		printf("Grade =10");
	}
	else if(H>50&& C<0.7 )
	{
		printf("Grade =9");
	}
	else if(C<0.7 && T>5600)
	{
		printf("Grade =8");
	}
	else if(H>50 && T>5600)
	{
		printf("Grade =7");
	}
	else if(H>50|| C<0.7 || T>5600)
	{
		printf("Grade =6");
	}
	else if(H>50&& C<0.7 && T>5600)
	{
		printf("Grade =5");
	}
	else
	{
		printf("NO GRADE");
	}
}
	
	
