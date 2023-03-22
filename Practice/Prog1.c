#include<stdio.h>
void main()
{ 
   int n,a[20],count,i,j,am;
   scanf("%d",&n);
   int k = (n/2) - 1;
   for(i=0;i<n;i++)
   {
      scanf("%d",&a[i]);
   }
   for(i = 0;i<n;i++)
   {
     int m = a[i];
     int count = 0;
     for(j = 0;j<n;j++)
     {
       if(a[j] == m)
       {
         count++;
       }
       //printf("%d with %d and %d\n",count,i,j);
     }
  // printf("%d\n",k);
  // printf("%d\n",count);
   if(count>k)
   {
     am = a[i];
   }
   }
   printf("%d",am);
}
