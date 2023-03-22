#include<stdio.h>
void main()
{
int i,a[50],b[50],cp=0,cn=0,cz=0,co=0,ce=0;
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{
if(a[i]>0)
{
cp++;
}
if(a[i]<0)
{
cn++;
}
if(a[i]==0)
{
cz++;
}
if(a[i]%2==0)
{
ce++;
}
if(a[i]%2!=0)
{
co++;
}
}
printf("positive nums are: %d\n",cp);
printf("negative nums are: %d\n",cn);
printf("zero nums are: %d\n",cz);
printf("odd nums are: %d\n",co);
printf("even nums are: %d\n",ce);
}
