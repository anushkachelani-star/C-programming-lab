#include <stdio.h>
int main()
{
    int sources[5]={10,20,30,40,50};
    int destination[5];
    int *ptr1=sources;
    int *ptr2=destination;
    int i;
    for(i=0;i<5;i++)
    {
        *(ptr2+i)=*(ptr1+i);
    }
    printf("Elements of destination array:\n");
    for(i=0;i<5;i++)
    {
        printf("%d",destination[i]);
    }
    return 0;
}
