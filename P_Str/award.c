#include<stdio.h>
#include<string.h>
int attendance(char *A){
	int a,CA=0,CP=0,CL=0,flag =0;
        for(int i=0;i<strlen(A);i++){
               if(A[i] == 'A')
               {
                    CA++;
               }
        }
        //printf("%d",CA);
         for(int i=0;i<strlen(A);i++)
        {
        if(CA <2 ){
                 if((A[i] == 'L') && (A[i+1] == 'L') && (A[i+2] == 'L')){
                         flag =  0;
                 }
        }
        }
        if(flag ==1)
               printf("true");
        else
               printf("false");       
}

void main(){
char A[] = "PPPLLL";
attendance(A);
}

