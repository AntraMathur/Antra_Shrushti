//Date compare between two given inputs
#include<stdio.h>
//Defining structure of Date 
struct Date{
int DD,MM,YY;
}D1,D2,*P,*P1;

//func to compare two dates
void comp(struct Date D1,struct Date D2)
{
	if(D1.YY == D2.YY)
        {
		if(D1.MM == D2.MM)
		{
			if(D1.DD == D2.DD)
			{
				printf("equal");
			} 
		}
	}
        else
                        {
				printf("false");
			}
}
//main function
void main()
{
	printf("DD/MM/YY");
	scanf("%d",&D1.DD);
	scanf("%d",&D1.MM);
	scanf("%d",&D1.YY);
        scanf("%d",&D2.DD);
	scanf("%d",&D2.MM);
	scanf("%d",&D2.YY);
        P = &D1;
        P1 = &D2;
        comp(D1,D2);
}
