#include<stdio.h>
void printfarray(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
       printf("%d",a[i]);
    }
}

void scanaraay(int a[],int r)
{
    for(int i=0;i<r;i++)
    {
       scanf("%d",&a[i]);
    }
}

void main()
{
int a[10];
int b[5];
scanaraay(a,10);
printfarray(a,10);
}
   
