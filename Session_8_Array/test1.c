#include<stdio.h>
void main()
{
int a,b,c,d,e,f,i,n,min;
printf("enter price: ");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
scanf("%d",&d);
scanf("%d",&e);
scanf("%d",&f);
int sum =0;
if((a<b) && (a<c) && (a<d) && (a<e) && (a<f))
{
  sum = a;
}
else if((a>b) && (b<c) && (b<d) && (b<e) && (b<f))
{
  sum = b;
}
else if(a>b) && (b<c) && (b<d) && (b<e) && (b<f))
{
  sum = c;
}
else if(a>b) && (b<c) && (b<d) && (b<e) && (b<f))
{
  sum = d;
} 

}
if(sum == a)

{
  if(c>b && d>b && e>b && f>b)
   sum += b;
      if(c<e && c<f && c<d)
  else if(d<c && d<f && d<f && d<b)
   sum += d;
  else if(e>f && f<d && f<b && f<c )
   sum +=e;
}
if(a>c && b<c && c<d && c<e && c<f)
{
  sum = c;
  if(a<d && a<e && a<f && a<b )
   sum += a;
     if(b<a && b<d && b<e && b<f)
        sum +=b;
          if(d<a && d<e && d<f)
             sum += d;
              if(e<f)
                sum +=e;
printf("%d",sum);
     if(a<b && a<d && a<e && a<f)
        sum +=a;
     if(d<b && d<a && d<e && d<f)
        sum +=a;
     if(e<b && e<a && e<a && e<f)
        sum +=e;  
  else if(b<c && b<d && b<e && b<f)
   sum += b;
  else if(d<a && d<b && d<e && d<f)
   sum += d;
  else if(e<a && e<b && e<d && e<f)
   sum += e;
  else if(f<a && f<b && f<d && f<c)
   sum += f;
}
}

