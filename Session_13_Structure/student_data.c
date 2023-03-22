#include<stdio.h>
struct student{
int roll_no;
char name[10];
char dep[20];
char course[20];
int YOJ;
}S[3];

int display(struct student *p,int x)
{
    for(int i=0;i<2;i++)
    {
         if(p->YOJ == x)
         { 
                printf("%s",p->name);
                printf("%s",p->dep);
                printf("%s",p->course);
                printf("%d",p->roll_no);
         }
     p++;
    }
}

int roll(struct student *p,int x)
{
    for(int i=0;i<2;i++)
    {
         if(p->roll_no == x)
         { 
                printf("%s",p->name);
                printf("%s",p->dep);
                printf("%s",p->course);
                printf("%d",p->YOJ);
         }
     p++;
    }
}
void main(){
	struct student S[3] = {{1,"S","C","E",2022},{2,"S","C","E",2021},{3,"S","C","E",2022}};
/*
for(int i=0;i<2;i++)
{
     printf("name,dep,course,roll,y");
     scanf("%s",S[i].name);
     scanf("%s",S[i].dep);
     scanf("%s",S[i].course);
     scanf("%d",&S[i].roll_no);
     scanf("%d",&S[i].YOJ);
}*/
	display(S,2022);
	roll(S,1);
}


