#include <stdio.h>
int main()
{
    int arr[5]={10,20,30,40,50};
    int *ptr1=&arr[1];
    int *ptr2=&arr[3];
    printf("Before swapping:%d and %d\n",*ptr1,*ptr2);
    *ptr1=*ptr1+*ptr2;
    *ptr2=*ptr1-*ptr2;
    *ptr1=*ptr1-*ptr2;
    printf("After swapping:%d and %d\n",*ptr1,*ptr2);
    printf("Updated array:");
    for(int i=0;i<5;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}
