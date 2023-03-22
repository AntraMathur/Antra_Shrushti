//Array that holds information of 20 cricketers and write a program to arrange them in ascending order
#include<stdio.h>
//structure for cricketer
struct Cricketer{
	char Name[20];
	int Age;
	int Num_Match;
	int Avg_runs;
}C[5],temp;
//Function to Sort Avg_runs 
void Order_runs(struct Cricketer *C)
{
	for(int i=0;i<5;i++)
	{
		for(int j = i+1;j<5;j++)
		{
			if(C[j].Avg_runs > C[i].Avg_runs)
			{
				temp.Avg_runs = C[i].Avg_runs;
				C[i].Avg_runs = C[j].Avg_runs;
				C[j].Avg_runs = temp.Avg_runs;
			}
		}
	}
}

void main(){
	int d;
	//scaning data from user
       for(int i=0;i<5;i++)
       {
		printf("Enter Cricketer Data");
 		printf("\nEnter name");	
		scanf("%s",C[i].Name);	
		printf("\nEnter Age");	
                scanf("%d",&C[i].Age);
		printf("\nEnter Num_Match");		
               	scanf("%d",&C[i].Num_Match);
		printf("\nEnter Avg_runs");		
               	scanf("%d",&C[i].Avg_runs);
	}
	Order_runs(C); //calling function order to sort
	//printing sorted records
	for(int i=0;i<5;i++)
	{
		printf("\nCricketer Data C[%d]",i);
		printf("\nName = %s",C[i].Name);
		printf("\nAge = %d",C[i].Age);
		printf("\nMatch Number = %d",C[i].Num_Match);
		printf("\nAverage Runs = %d",C[i].Avg_runs);
	}
}       
