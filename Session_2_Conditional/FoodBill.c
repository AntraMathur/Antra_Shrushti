#include<stdio.h>

void main()
{
   int qb,qp,qs;
   float tb,tp,ts,Total,gstbill;
   
   printf("Enter the quantity of burger : ");
   scanf("%d",&qb);

   if(qb<0)
   {
     printf("Invalid Input\n");
   }
   
   else
   {
   if(qb>5)
   {
      tb = 0.9 * qb * 150;
      printf("Total burger price :\n%f",tb);

   }
   
   else
   {
      tb = qb * 150;
      printf("Total burger price :\n%f",tb);
   }
   }

   printf("\nEnter the quantity of pizza : ");
   scanf("%d",&qp);

   if(qp<0) 
   {
     printf("Invalid Input\n");
   }

   else
   {
   if(qp*300>1000)
   {
      tp = 0.85 * qp * 300;
      printf("Total pizza price :\n%f",tp);

   }

   else
   {
      tp = qp * 300;
      printf("Total pizza price :\n%f",tp);
   }
   }

   printf("\nEnter the quantity of sandwitch : ");
   scanf("%d",&qs);

   if(qs<0) 
   {
     printf("Invalid Input\n");
   }

   else
   {
   if(qs*100>500)
   {
      ts = 0.8 * qs * 100;
      printf("Total sandwitch price :\n%f",ts);

   }

   else
   {
      ts = qs * 100;
      printf("Total sandwitch price :\n%f",ts);
   }
   }

   Total = tb + tp + ts;
   printf("\nTotal bill :\n%f",Total);
   
   gstbill = 0.12 * Total + Total;
   printf("\nTotal gstbill :\n%f",gstbill);

printf("\n");
}
