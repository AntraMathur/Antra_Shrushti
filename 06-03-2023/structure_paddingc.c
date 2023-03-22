//structure padding using attribute && #pragma pack(1)

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct Case{
	int i;
	char A[30];
	float f;
}S1;

struct Case4{
	char A[30];
	float f;
	int i;
}__attribute__((packed));

struct Case5{
	int i;
	float f;
	char A[30];
}__attribute__((packed));

struct Case3{
	float f;
	char A[30];
	int i;
}S3;


struct Case1{
	char A[30];
	float f;
	int i;
}S2;

void main()
    {
	struct Case5 S5;
       struct Case4 S4;
       printf("%lu",sizeof(S5));
       printf("%lu",sizeof(S4));
       printf("%lu",sizeof(S1));	
       printf("%lu",sizeof(S2));
       printf("%lu",sizeof(S3));
    }
