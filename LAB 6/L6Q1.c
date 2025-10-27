#include <stdio.h>
int main()
{
    int A[10][10],B[10][10],Add[10][10],Sub[10][10],Mul[10][10];
    int i,j,k,r,c;
    printf("Enter numbers of rows and columns of matrices:");
    scanf("%d %d",&r,&c);
    printf("\nEnter elements of Matrix A:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
           scanf("%d",(*(A+i)+j));
        }
    }
    printf("\nEnter elements of Matrix B:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
           scanf("%d",(*(B+i)+j));
        }
    }
    for(i=0;i<r;i++)
    {
       for(j=0;j<c;j++)
       {
          *(*(Add+i)+j)=*(*(A+i)+j)+*(*(B+i)+j);
          *(*(Sub+i)+j)=*(*(A+i)+j)-*(*(B+i)+j);
       }
   }
   for(i=0;i<r;i++)
   {
      for(j=0;j<c;j++)
      {
         *(*(Mul+i)+j)=0;
         for(k=0;k<c;k++)
         {
             *(*(Mul+i)+j)+=*(*(A+i)+k)* *(*(B+k)+j);
         }
     }
  }
  printf("\nMatrix Addition:\n");
  for(i=0;i<r;i++)
  {
      for(j=0;j<c;j++)
      {
          printf("%d",*(*(Add+i)+j));
      }
      printf("\n");
  }
  printf("\nMatrix Subtraction:\n");
  for(i=0;i<r;i++)
  {
      for(j=0;j<c;j++)
      {
         printf("%d",*(*(Sub+i)+j));
      }
      printf("\n");
  }
  printf("\nMatrix Multiplication:\n");
  for(i=0;i<r;i++)
  {
      for(j=0;j<c;j++)
      {
         printf("%d",*(*(Mul+i)+j));
      }
      printf("\n");
  }
     return 0;
}
