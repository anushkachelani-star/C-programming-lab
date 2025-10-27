#include <stdio.h>
int main()
{
    int num=99;
    int *p1;
    int **p2;
    int ***p3;
    p1=&num;
    p2=&p1;
    p3=&p2;
    printf("Value using triple pointer:%d\n",***p3);
    return 0;
}
