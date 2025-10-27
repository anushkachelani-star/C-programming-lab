#include <stdio.h>
int main()
{
    int A[4][4],B[16];
    int i,j,k=0,temp;
    printf("Enter elements of 4*4 matrix:\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    for(i=0;i<4;i++)
    {
       for(j=0;j<4;j++)
       {
          B[k++]=A[i][j];
       }
    }
    for(i=0;i<16-1;i++)
    {
        for(j=0;j<16;j++)
        {
           if(B[i]>B[j])
           {
              temp=B[i];
              B[i]=B[j];
              B[j]=temp;
           }
       }
   }
   printf("\nSorted elements in 1D array:\n");
   for(i=0;i<16;i++)
   {
       printf("%d",B[i]);
   }
   return 0;
}
