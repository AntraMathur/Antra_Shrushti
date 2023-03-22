 //check input char is alphabet in uppercase/lowercase/digit
#include<stdio.h>

void main()
{
   char ch;

   printf("Enter the character : ");
   scanf("%c",&ch);

   if(ch>64 && ch<91)
   {
      printf("Character is Uppercase");
   }

   else if(ch>96 && ch<123)
   {
      printf("Character is Lowercase");
   }

   else if(ch>47 && ch<58)
   {
      printf("Character is Digit");
   }

   else
   {
      printf("Invalid Input");
   }
   
printf("\n");
}
