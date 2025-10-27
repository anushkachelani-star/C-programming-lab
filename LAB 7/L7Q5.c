#include <stdio.h>
int main()
{
    int arr[5]={10,20,30,40,50};
    int *ptr;
    ptr=arr;
    printf("Third element of array=%d\n",*(ptr+2));
    return 0;
}
