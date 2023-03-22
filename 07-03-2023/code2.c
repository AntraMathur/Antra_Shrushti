#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 500

struct User_data {
	char Name[MAX];
	int Roll_No;
	float Sub1,Sub2,Sub3;
	struct User_data *next;
};



struct User_data *start;
struct User_data *temp;

int user_data()
{
	FILE *fp;
	int a,b,data;
	char temp1,temp2;
	//file open and write
	fp = fopen("User_data.txt","w");
	//User data Entry
	fprintf(stdout,"User please enter your data\n");
	//if file pointer is not  equal to NULL	
	if(fp != NULL)
	{
		//create new structure and take user information
		struct User_data *new = malloc(sizeof(struct User_data));
		fprintf(stdout,"Enter Name \n");
		gets(new->Name);
		fprintf(stdout,"Enter Roll_no \n");
		scanf("%d",&new->Roll_No);
		printf("Enter Subject 1 \n");
		scanf("%f",&new->Sub1);
		printf("Enter Subject 2 \n");
		scanf("%f",&new->Sub2);
		printf("Enter Subject 3 \n");
		scanf("%f",&new->Sub3);
		//list start new 
		new->next = NULL;		
		start = new;
		temp = new;
		//Add data to Text File
   		fprintf(fp,"Name : %s\tRoll_No:%d\n",new->Name,new->Roll_No);
		fprintf(fp,"Sub1:%.2f\t Sub2: %.2f\t Sub3: %.2f\t\n",new->Sub1,new->Sub2,new->Sub3);			
        //exit condtion
	printf("enter -1 for stop entering data\n");
	scanf("%d",&data);	
	while(data != -1)
	{
		//Add data after first
		struct User_data *new = malloc(sizeof(struct User_data));
		fprintf(stdout,"Enter Name \n");
		scanf("%c",&temp2);
		gets(new->Name);
		fprintf(stdout,"Enter Roll_no \n");
		scanf("%d",&new->Roll_No);
		printf("Enter Subject 1 \n");
		scanf("%f",&new->Sub1);
		printf("Enter Subject 2 \n");
		scanf("%f",&new->Sub2);
		printf("Enter Subject 3 \n");
		scanf("%f",&new->Sub3);
		//adding new after next in linked list
		new->next = NULL;
		temp->next = new;
		temp = new;
		//writing linked list to the structure
		fwrite(new,sizeof(struct User_data),1,fp);
		//exit condition
		printf("Enter -1 to stop entering data\n");
		scanf("%d",&data);
	}
	}
	else
	{
		//If user is unable to write data
		fprintf(stderr,"File not written\n");
		fflush(stdout);
	}
	//close the file
	fclose(fp);
	return 0;
}

//Display Using structure
void display()
{
	//setting temp as start
	temp = start;
	//till last value
	while(temp != NULL)
	{
		printf("%s, %d",temp->Name,temp->Roll_No);
		printf("%.2f\t %.2f\t %.2f\t",temp->Sub1,temp->Sub2,temp->Sub3);	       
                temp = temp->next;//incrementing pointer
	}
}

int read()
{
	struct User_data S1;
	FILE *fp1;
	//Opening file in read mode
	fp1 = fopen("User_data.txt","r");
	//file is NULL
	if(fp1 == NULL){
		printf("Error Opening file\n");
		exit(1);
	}
	//read from file
        int x = fread(&S1,sizeof(struct User_data),1,fp1);
	do
	{	//print data
		printf(" %s\t %d\n",S1.Name,S1.Roll_No);
		printf("%.3f\t %.3f\t %.3f\t\n",S1.Sub1,S1.Sub2,S1.Sub3);		
	}while(x);
	//close the file
	fclose(fp1);
        return 0;
}

int  main()
{
	user_data();
	read();
//	display();
	return(0);
}
	
	
