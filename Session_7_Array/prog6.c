#include<stdio.h>
void main()
{
int a[] = {13,7,6,12};
int min=0,i,j,b;
for(i=0;i<4;i++)
{  
   for(j=i+1;j<4;j++)
   { 
       if(a[j] > a[i])
       {
         b = a[j];
         break;
       }
       if((a[j] < a[i]))
       {
         b = -1;
       }
   }
printf("%d %d\n",a[i],b);
}
}
     
