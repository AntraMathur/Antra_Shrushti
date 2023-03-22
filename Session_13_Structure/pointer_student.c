//
#include<stdio.h>
//structre for Student data with typedef
typedef struct Student {
int roll_no;
char name[20];
}St;
/*
//structure for Student without typedef
struct Student1{
int roll_no;
char name[20];
}S1,S2,S[2],*p;
*/
void main()
{
	 St S[2];
	 St *p;	
/*
scanf("%d",&S1.roll_no);
scanf("%s",S1.name);
scanf("%d",&S2.roll_no);
scanf("%s",S2.name);
*/
	p =&S[0];//pointer at start of Student S data
	//scanning data using for loop
	for(int i=0;i<2;i++)
	{
      		scanf("%d ",&p->roll_no);
     		 scanf("%s",p->name);
     		 p++;
	}
/*
printf("%d - ",S1.roll_no);
printf("%s \n",S1.name);
printf("%d - ",S2.roll_no);
printf("%s\n",S2.name);
*/
	p =&S[0];
	//printing data using for loop
	for(int i=0;i<2;i++)
	{
       		printf("%d - ",p->roll_no);
     		 printf("%s \n",p->name);
    		 p++;
	}
}
