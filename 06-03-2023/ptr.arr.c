#include<stdio.h>
#include<stdlib.h>

void main()
{
	int a[4] = {1,2,3,4};
	int (*ptr)[4] = &a;

	printf("%p %p %p\n",ptr,ptr+1,ptr+2);
	printf("%p %p %p\n",*ptr , *(ptr+1) , *(ptr+2));
	printf("%d %d %d\n",**ptr,*(*(ptr+1)),*(*(ptr + 2)));
}
