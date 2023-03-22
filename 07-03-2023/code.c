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
		struct User_data *new = malloc(sizeof(struct User_data));
		fprintf(stdout,"Enter Name \n");
		gets(new->Name);
	     //	fread(new->Name,MAX,1,stdin);
	      // scanf("%[^\n]s",new->Name);
		//scanf("%c",&temp1);
		fprintf(stdout,"Enter Roll_no \n");
		scanf("%d",&new->Roll_No);
		printf("Enter Subject 1 \n");
		scanf("%f",&new->Sub1);
		printf("Enter Subject 2 \n");
		scanf("%f",&new->Sub2);
		printf("Enter Subject 3 \n");
		scanf("%f",&new->Sub3);
		new->next = NULL;		
		start = new;
		temp = new;
		//Add data to Text File
   		fprintf(fp,"Name : %s\tRoll_No:%d\n",new->Name,new->Roll_No);
		fprintf(fp,"Sub1:%.2f\t Sub2: %.2f\t Sub3: %.2f\t\n",new->Sub1,new->Sub2,new->Sub3);			
	printf("enter -1 for stop entering data\n");
	scanf("%d",&data);	
	while(data != -1)
	{
		struct User_data *new = malloc(sizeof(struct User_data));
		fprintf(stdout,"Enter Name \n");
		scanf("%c",&temp2);
		gets(new->Name);
	//	scanf("%c",&temp2);
		fprintf(stdout,"Enter Roll_no \n");
		scanf("%d",&new->Roll_No);
		printf("Enter Subject 1 \n");
		scanf("%f",&new->Sub1);
		printf("Enter Subject 2 \n");
		scanf("%f",&new->Sub2);
		printf("Enter Subject 3 \n");
		scanf("%f",&new->Sub3);
		new->next = NULL;
		temp->next = new;
		temp = new;
		fprintf(fp,"Name : %s\tRoll_No:%d\n",new->Name,new->Roll_No);
		fprintf(fp,"Sub1:%.2f\t Sub2: %.2f\t Sub3: %.2f\t\n",new->Sub1,new->Sub2,new->Sub3);
		printf("Enter -1 to stop entering data\n");
		scanf("%d",&data);
	}
	}
	else
	{
		fprintf(stderr,"File not written\n");
		fflush(stdout);
	}
	fclose(fp);
	return 0;
}
	
void display()
{
	temp = start;
	while(temp != NULL)
	{
		printf("%s, %d",temp->Name,temp->Roll_No);
		printf("%.2f\t %.2f\t %.2f\t",temp->Sub1,temp->Sub2,temp->Sub3);	       
                temp = temp->next;
	}
}

int  main()
{
	user_data();
	struct User_data S1;
	FILE *fp1;
	fp1 = fopen("User_data.txt","");
	if(fp1 == NULL){
		printf("Error Opening file\n");
		exit(1);
	}
        int x = fread(&S1,sizeof(struct User_data),1,fp1);
	//do
//	{
		printf(" %s\t %d\n",S1.Name,S1.Roll_No);
		printf("%.3f\t %.3f\t %.3f\t\n",S1.Sub1,S1.Sub2,S1.Sub3);		
//	}while(x);
	fclose(fp1);
	return(0);
}
	
	
