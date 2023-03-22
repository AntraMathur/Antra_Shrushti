#include<stdio.h>
void main()
{
float temp_c,temp_f;
printf("enter temp in f: ");
scanf("%f",&temp_f);
temp_c = ((temp_f - 32)*5)/9;
printf("temp in c:%f",temp_c);
}
