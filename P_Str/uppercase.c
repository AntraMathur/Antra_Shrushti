#include<stdio.h>
#include<string.h>
int uppercase(char *A,int a)
{ 
int flag =0,temp = 0,k=0; 
                
                for(int i=1;i<=a;i++)
                {
                        if((A[i] >= 'a') && (A[i] <= 'z'))
                        {
                              flag++; 
                        }
                        else 
                        {
                            k++;

                        }
                } 
              if(flag == (a-1) || k == (a-1))
              {
               for(int i=0;i<10;i++)
                {
                       if((A[0] >= 'A') && (A[0] <= 'Z'))
                        {
                              temp++; 
                        }
                       if((A[0] >= 'a') && (A[0] <= 'z'))
                        {
                              temp++; 
                        }
              if(temp == 1)
              {
                       flag = flag + temp;
                       k = k + temp;
              }
             } 
            }    
if(flag ==a || k ==a)
{ 
 printf("true");
}
else
{
printf("false");
}
}
void main()
{
char A[] = "Leetcode";
int a = strlen(A);
printf("%d",a);
uppercase(A,a);
}


