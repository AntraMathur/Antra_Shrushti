#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp,*fp2,*fp1;
	char ch[30];
        int a[10];
	fp = fopen("data.txt","r");
	fp1 = fopen("odd.txt","w");
	fp2 = fopen("even.txt","w");
	for(int i=0;i<10;i++)
	{
		fscanf(fp,"%d",&a[i]);
	}
	for(int i=0;i<10;i++)
	{
		if(a[i] %2 == 0)
		{
			putw(a[i],fp1);
		}
		if(a[i] %2 != 0)
		{
			putw(a[i],fp2);
		}
	}
	
	fclose(fp);
	fclose(fp1);
	fclose(fp2);
}	
