#include <stdio.h>
int main()
{
    int a=10,b=20;
    int *p1,*p2,temp;
    p1=&a;
    p2=&b;
    printf("Before swapping:\n");
    printf("a=%d,b=%d\n",a,b);
    temp=*p1;
    *p1=*p2;
    *p2=temp;
    printf("\nAfter swapping:\n");
    printf("a=%d,b=%d\n",a,b);
    return 0;
}
