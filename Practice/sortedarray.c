//sorted array 1,2,3,4,5 => 2,1,4,3,5
#include<stdio.h>
void main()
{
int temp=0,i,a[] = {1,2,3,4,5};
for(i=0;i<4;i = i+2)
{
temp = a[i];
a[i] = a[i+1];
a[i+1] = temp;
printf("%d %d ",a[i],a[i+1]);
}
}


