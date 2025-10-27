#include <stdio.h>
int main()
{
    int x=100;
    int *p;
    int **q;
    int ***r;
    p=&x;
    q=&p;
    r=&q;
    printf("Address of x:%p\n",&x);
    printf("Address stored in p:%p\n",p);
    printf("Address stored in q:%q\n",q);
    printf("Address stored in r:%r\n",r);
    printf("\nValue of x using *p:%d\n",*p);
    printf("Value of x using **q:%d\n",**q);
    printf("Value of x using ***r:%d\n",***r);
    return 0;
}
