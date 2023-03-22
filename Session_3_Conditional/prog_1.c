#include<stdio.h>
void main()
{
float q,cm,im,iq,cq,marks,per,total;
printf("enter no. of q: ");
scanf("%f",&q);
printf("enter correct marks ");
scanf("%f",&cm);
printf("enter in marks: ");
scanf("%f",&im);
printf("enter correct que: ");
scanf("%f",&cq);
iq = q - cq;
marks = (cq*cm) - (im*iq);
total = q*cm;
printf("Marks: %f\n",marks);
per = (100*marks)/total;
printf("per:%f\n",per);
if(per>50){
printf("PASS");
}
else{
printf("FAIL");
}
}


