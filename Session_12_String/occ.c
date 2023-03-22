#include<stdio.h>
#include<string.h>
void main()
{
	int i,j,count = 0,f;
	char A[] ="THIS IS HERE";
	char B[] = "R";

	for(i=0;i<strlen(A);i++)
	{ 
    		//printf("%c",A[i]);
     		for(j=0;j<strlen(B);j++)
    		 {
          		//printf("%c\n",B[j]);
         		if(A[i+j] != B[j])
        		 {
             			 f = 0;
              			break;
        		 }
       			  else
			  {
              			f=1;
        		  }
   		 }
		 if(f==1)
			count++;
	}
	printf("%d",count);
}
