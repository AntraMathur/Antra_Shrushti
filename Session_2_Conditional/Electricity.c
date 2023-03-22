#include<stdio.h>

void main()
{
   int connection,phase,unit;
   float bill,service_charge,totbill;

   printf("Enter the connection is either domestic(0) or commercial(1) : ");
   scanf("%d",&connection);

   printf("Enter the phase is either single phase(1) or three phase(3) : ");
   scanf("%d",&phase);

   printf("Enter the units : ");
   scanf("%d",&unit);


   if(connection == 0)
   {
      //Case-1
      if(unit>=0 && unit<=50)
      {
         bill = unit * 1.45;
         printf("Bill = %f",bill);
      }

      //Case-2
      else if(unit>50 && unit<=100)
      {
         bill = 50*1.45 + (unit-50)*2.85;
         printf("Bill = %f",bill);
      }

      //Case-3
      else if(unit>100 && unit<=200)
      {
         bill = 50*1.45 + 50*2.85 + (unit-100)*3.95;
         printf("Bill = %f",bill);
      }
        
      //Casr-4
      else if(unit>200)
      {
         bill = 50*1.45 + 50*2.85 + 50*3.95 + (unit-200)*4.50;
         printf("Bill = %f",bill);
      }

      //Case-5
      else
      {
         printf("Invalid Input\n");
      }

      service_charge = 10;


      if(phase == 1)
      {
         if(unit>=0 && unit*0.06<=20)
         {
            totbill = service_charge + 20 + bill;
            printf("\nTotal bill = %f",totbill);
         }

         else if(unit*0.06>20)
         {
            totbill = service_charge + (unit * 0.06) + bill;
            printf("\nTotal bill = %f",totbill);
         }

         else
         {
            printf("Invalid Input\n");
         }

      }
         
      else
      {
         if(unit>=0 && unit*0.06<=50)
         {
            totbill = service_charge + 50 + bill;
            printf("\nTotal bill = %f",totbill);
         }

         else if(unit*0.06>50)
         {
            totbill = service_charge + (unit * 0.06) + bill;
            printf("\nTotal bill = %f",totbill);
         }
     
         else
         {
            printf("Invalid Input\n");
         }
      }
   }
      
   else
   {
     if(connection == 1)
     {
        //Case-1
        if(unit>=0 && unit<=100)
        {
           bill = unit * 3.95;
           printf("Bill = %f",bill);
        }
        
        //Case-2
        else if(unit>100)
        {
           bill = (100 * 3.95) + (unit - 100) * 7;
           printf("Bill = %f",bill);
        }

        else
        {
           printf("Invalid Input\n");
        }

        service_charge = 20;

        if(phase == 1)
        {
           if(unit>=0 && unit*0.06<=50)
           {
              totbill = service_charge + 50 + bill;
              printf("\nTotal bill = %f",totbill);
           }

           else if(unit*0.06>50)
           {
              totbill = service_charge + (unit * 0.06) + bill;
              printf("\nTotal bill = %f",totbill);
           }

           else
           {
              printf("Invalid Input\n");
           }
        }

        else
        {
           if(unit>=0 && unit*0.06<=100)
           {
              totbill = service_charge + 100 + bill;
              printf("\nTotal bill = %f",totbill);
           }
 
           else if(unit*0.06>=100)
           {
              totbill = service_charge + (unit * 0.06) + bill;
              printf("\nTotal bill = %f",totbill);
           }

           else
           {
              printf("Invalid Input");
           }
        }
     }
   }
printf("\n");
}
