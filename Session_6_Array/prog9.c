#include<stdio.h>
void main()
{
int i,j,b,k[5][5],m,n,col,row;
int a[3][3] = {{0,1,0},{0,0,0},{0,1,0}};
for(i=0;i<3;i++)
{
 int sum = 0;
 for(j=0;j<3;j++)
  {
    sum = sum + a[i][j];
  }
 if(sum == 0)
  {
   int ls =0;
   for(j=0;j<3;j++)
   {
     ls = ls + a[j][i];
   }
   if(ls == 2)
   {
     printf("%d is celebrity",i);
   }
  }
}
}

