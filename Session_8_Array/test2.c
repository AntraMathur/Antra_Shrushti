#include<stdio.h>
void main()
{
int q,j,z,i,a[30],m[20],k,profit;
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
for(i=4;i>0;i--)
{
int diff=0;
for(j=i-1;j>-1;j--)
{
diff = a[i] - a[j];
if(profit<diff)
{
profit=diff;
printf("%d\n",profit); 
for(k=4;k>-1;k--)
{
m[k] = profit;
}    
}
}
for(q=0;q<5;q++)
{
printf("%d",m[q]); 
}
}
}


