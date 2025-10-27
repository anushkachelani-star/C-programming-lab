#include <stdio.h>
int main()
{
    int a=10,b=20;
    int *p1,*p2;
    p1=&a;
    p2=&a;
    if(p1==p2)
       printf("Both pointers point to the same memory location.\n");
    else
       printf("Pointers point to different memory locations.\n");
       return 0;
}
