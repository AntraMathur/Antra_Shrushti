#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main()
{
	int a[] = {1,2,3,4,5};
	int *p = a;
       	int (*ptr)[5] = &a;
	
	printf("size of p = %lu & size of *p = %lu",sizeof(p),sizeof(*p));
	printf("size of ptr = %lu & size of *ptr = %lu",sizeof(ptr),sizeof(*ptr));

}	
