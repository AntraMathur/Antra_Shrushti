#include<stdio.h>
void main()
{
int i,j;
int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
printf("%d\n",a[1][1]);
printf("%d\n",*(*(a+1)+1));
printf("%d\n",a[2][2]);
printf("%d\n",*(*(a+2)+2));
printf("%d\n",a[2][1]);
printf("%d\n",*(*(a+2)+1));

}



