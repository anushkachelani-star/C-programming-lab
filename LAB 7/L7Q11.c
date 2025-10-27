#include <stdio.h>
int main()
{
    int arr[5]={10,20,30,40,50};
    int *start,*end;
    start=arr;
    end=arr+4;
    printf("Array elements in reverse order:\n");
    while(end>=start)
    {
         printf("%d",*end);
         end--;
    }
    return 0;
}
