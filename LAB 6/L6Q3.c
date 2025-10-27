#include <stdio.h>
int main()
{
    int A[3][3];
    int i,j;
    int *ptr;
    int largest,smallest;
    printf("Enter elements of 3*3 matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",(*(A+i)+j));
        }
    }
    ptr=&A[0][0];
    largest=smallest=*ptr;
    for(i=0;i<9;i++)
    {
        if(*(ptr+i)>largest)
           largest=*(ptr+i);
        if(*(ptr+i)<smallest)
           smallest=*(ptr+i);
    }
    printf("\nLargest element=%d",largest);
    printf("\nSmallest element=%d",smallest);
    return 0;
}
