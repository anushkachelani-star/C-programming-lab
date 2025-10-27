#include <stdio.h>
int main()
{
    int arr[3][3]=
    {
       {1,2,3},
       {4,5,6},
       {7,8,9}
    };
    int(*ptr)[3]=arr;
    printf("Diagonal elements of the 2D array are:\n");
    for(int i=0;i<3;i++)
    {
        printf("%d",*(*(ptr+i)+i));
    }
    return 0;
}
