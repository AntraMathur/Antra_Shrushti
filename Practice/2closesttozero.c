#include<stdio.h>
void main()
{
	int a[]={1,2,-1,-2},i,j,s,e;
        int z=0,k=0;
        for(i=0;i<5;i++)
        { 
          for(j=0;j<=5;j++)
           {
              int sum = a[i] + a[j]; 
              int min = 0;
              if((sum < 2 && sum > -2) || (sum == 0)){
                 if(sum == min)
                 {
                    z = sum;
                 }
                 else if((sum > -2) && (sum < 2))
                 {
                    k = sum;
                 }
                 //printf("%d %d\n",z,k);
if(z<k){
                 s = i;
                 e = j;
              }
              else{
                 s = i;
                 e = j;
              }
}
}
      // printf("%d %d\n",z,k)
       }
    printf("%d %d\n",s,e);
}
                     
              
