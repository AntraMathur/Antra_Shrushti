#include<stdio.h>
//typedef for alias
typedef struct point{
char a;
int x,y,z;
}point;
//point function for sum
point sum(point A,point B)
{
    point temp;
    temp.x = A.x + B.x;//Adding x values of two struct
    temp.y = A.y + B.y;//Adding y values of two struct
    temp.z = A.x + A.y;//Adding z values of two struct
    return temp;
}

void main()
{
  	 point P1,P2;
  	 P1.x = 20;
 	 P1.y = 5;
	 P2.x = 25;
	 P2.y = 10;
 	 point t = sum(P1,P2);//calling function for sum 
 	 printf("%d",t.x);
	printf("%d",t.y);
	printf("%d\n",t.z);
	int z = sizeof(point);
	printf("%d\n",z);
}

