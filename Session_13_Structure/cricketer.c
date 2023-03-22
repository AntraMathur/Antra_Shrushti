#include<stdio.h>
//structure that hold cricketer data
struct Cricket{
char name[20];
int score;
struct Cricket *next;
};

void main()
{
	//structure initilization
    struct Cricket a[4] = {{"Sh",100,a+1},{"Shr",90,a+2},{"Shru",10,a+3},{"h",60,a}};
    struct Cricket *l;
    //setting pointer to base value of array & printing its data
    l = &a[0];
   
    printf("%s-",l->name);
    printf("%d\n",l->score); 
    //pointer increment and data printing
    l = l->next;
   
    printf("%s-",l->name);
    printf("%d\n",l->score); 
// pointer increment
    l = l->next;

    printf("%s-",l->name);
    printf("%d\n",l->score);
//pointer increment
    l = l->next;

    printf("%s-",l->name);
    printf("%d\n",l->score);

}
    
    

