#include <stdio.h>
int main()
{
    int arr[5]={10,20,30,40,50};
    int *ptrs[5];
    int **dptr;
    for(int i=0;i<5;i++)
    {
        ptrs[i]=&arr[i];
    }
    for(int i=0;i<5;i++)
    {
        dptr=&ptrs[i];
        printf("Value at arr[%d]=%d\n",i,**dptr);
    }
    return 0;
}
