#include<stdio.h>

void main()
{
   float Q,P,B;

   printf("Enter the quantity : ");
   scanf("%f",&Q);

   printf("Enter the price : ");
   scanf("%f",&P);

   if(Q>1000)
   {
      B = 0.9 * Q*P;
      printf("%f",B);
   }

   else
   {
      B = Q*P;
      printf("%f",B);
   }
   
printf("\n");
}
