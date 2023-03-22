#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//structure of Library
struct Library{
int AN;
char TOB[30];
char Aname[30];
int POB;
int flag;
}a[50];

void main()
{
	int P;
	int flag1  = 0; 
	char A[30];
	char TOB[30];
	//User input for library structure
	for(int i =0 ;i<2;i++)
	{
		printf("an,tob,aname,pob,flag");
		scanf("%d",&a[i].AN);
		scanf("%s",a[i].TOB);
		scanf("%s",a[i].Aname);
		scanf("%d",&a[i].POB);
		scanf("%d",&a[i].flag);
	}

	printf("Menu Option : 1 Add Book Info \n 2 Display book info \n 3.List book of given author \n 4.Title \n 5.count of books in lib \n 6.order of accession no 7. Exit");
	scanf("%d",&P);
	//book information add (option 1)
	if(P == 1){
		for(int i =0 ;i<1;i++)
		{
			printf("an,tob,aname,pob,flag");
			scanf("%d",&a[i].AN);
			scanf("%s",a[i].TOB);
			scanf("%s",a[i].Aname);
			scanf("%d",&a[i].POB);
			scanf("%d",&a[i].flag);
		}
	}
	//Printing Book information
	else if(P == 2)
	{
		for(int i =0 ;i<2;i++)
		{
			printf("an,tob,aname,pob,flag");
			printf("%d\n",a[i].AN);
			printf("%s\n",a[i].TOB);
			printf("%s\n",a[i].Aname);
			printf("%d\n",a[i].POB);
			printf("%d\n",a[i].flag);
		}
	}
	//List book of given author
	else if(P == 3)
	{
		printf("enter Aname: ");
		scanf("%s",A);
		for(int i =0 ;i<2;i++)
		{
			int k = (A == a[i].Aname)?1:0;
			if(k = 1)
			{
				printf("Books of author %s are %s",A,a[i].TOB);
				break;
			}
		}
	}
	//If Book title matches then print
	else if(P == 4)
	{
		printf("enter book title");
		scanf("%s",TOB);
		for(int i=0;i<2;i++)
		{
			int y = (a[i].TOB == TOB)?1:0;
			if(y = 1)
			{
				printf("tob is: %s",a[i].TOB);
				break;
			}		
		}
	}
	//count of books 
	else if(P == 5)
	{
		for(int i = 0;i<2;i++)
		{	
			flag1 = a[i].flag + flag1;
 		}
		printf("count of book is: %d",flag1);
	}
	//Order of books (Accession number)
	else if(P == 6)
	{
		printf("order of books in accession no:");
		for(int i=0;i<a[i].AN;++i)
		{
			for(int j=i+1;i<a[j].AN;++j)
	        	{
				if(a[i].AN > a[j].AN)
				{
					int max;
					max = a[i].AN;
					a[i].AN = a[j].AN;
					a[j].AN = a[i].AN;
				}
			}
		}
		for(int j=0;j<a[j].AN;j++)
		{		
			printf("%d order",a[j].AN);
		}
	}
	//Thank you
	else if(P ==7)
	{
 		printf("THANK YOU");
	}
}

