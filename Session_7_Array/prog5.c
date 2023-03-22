#include<stdio.h>
void main()
{
int i,j,b,k[5][5],m,n,col,row;
int a[50][50];
printf("enter n: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
 scanf("%d",&a[i][j]);
}
}
for(i=0;i<n;i++)
{
 int sum = 0;
 for(j=0;j<n;j++)
 {
   sum = sum + a[i][j];
 }
 if(sum == 0)
 {
  int ls = 0;
  for(j=0;j<n;j++)
   {
    ls = ls + a[j][i];
   }
 if(ls ==(n-1))
 {
   printf("%d is celebrity",i);
 }
}
}
}

