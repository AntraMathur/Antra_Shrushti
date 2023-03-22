#include<stdio.h>
void printfarray(int a[],int n,int x)
{
    for(int i=0;i<n;i++)
    {
       for(int j=0;j<x;j++)
    {
       printf("%d",a[i][j]);
   }
printf("/n");
    }
}

void scanaraay(int a[],int r,int x)
{
    for(int i=0;i<r;i++)
    {
       for(int j=0;j<x;j++)
    {
       scanf("%d",&a[i][j]);
    }
    }
}

void main()
{
int a[2][2];
int b[5];
scanaraay(a,2,2);
printfarray(a,2,2);
}

