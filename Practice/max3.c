#include<stdio.h>
void main()
{
int a,b,c,d,e;
int max = 0,max2 = 0,max3=0,total=0;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
scanf("%d",&d);
scanf("%d",&e);
if((a>=b) && (a>=c) && (a>=d) && (a>=e))
max = a;
if((a>=b) && (b>=c) && (b>=d) && (b>=e))
max = b;
if((c>=a) && (b>=c) && (c>=d) && (c>=e))
max = c;
if((a>=d) && (d>=c) && (d>=c) && (d>=e))
max = d;
if((e>=a) && (e>=b) && (e>=d) && (e>=c))
max = e;
if(max == a)
a = 32767;
if(max == b)
b = 32767;
if(max == c)
c = 32767;
if(max == d)
d = 32767;
if(max == e)
e = 32767;
if((a>b) && (a>c) && (a>d) && (a>e))
max2 = a;
if((a>b) && (b>c) && (b>d) && (b>e))
max2 = b;
if((c>a) && (b<c) && (c>d) && (c>e))
max2 = c;
if((a<d) && (d>c) && (d>c) && (d>e))
max2 = d;
if((e>a) && (e>b) && (e>d) && (e>c))
max2 = e;
if(max2 == a)
a = 32767;
if(max2 == b)
b = 32767;
if(max2 == c)
c = 32767;
if(max2 == d)
d = 32767;
if(max2 == e)
e = 32767;
if((a>b) && (a>c) && (a>d) && (a>e))
max3 = a;
if((a<b) && (b>c) && (b>d) && (b>e))
max3 = b;
if((c>a) && (b<c) && (c>d) && (c>e))
max3 = c;
if((a<d) && (d>c) && (d>c) && (d>e))
max3 = d;
if((e>a) && (e>b) && (e>d) && (e>c))
max3 = e;
printf("%d\n",max);
printf("%d\n",max2);
printf("%d\n",max3);
total = max + max2 + max3;
printf("%d\n",total);
}






