#include<stdio.h>
void main()
{
    int i , A[] = {2,3,4,5,6,7},j,c,max,diff,B[40],k;
    for(i=0;i<6;i++)
    { 
      int diff=0;
      int max = 0;
      for(j=i+1;j<6;j++)
      {  
         diff = A[j] - A[i];
         if(diff>max)  
         {
            max = diff;
         }
      }
         if(A[i] == A[5])
         {
            max = A[i];
         }
       B[i] = max;
    }
for(j=0;j<6;j++)
    {
        printf("%d\n",B[j]);
    }  
}
