#include<stdio.h>
 void main(){

int a[5] = {1,2,3,4,5};

int *P;
P = a;
printf("%d\n",*P);
P = P +1;
printf("%d\n",*P);
(*P) = (*P)+1;
printf("%d\n",*P);
printf("%d\n",*(a + 1));
printf("%d\n",1[a]);
}
