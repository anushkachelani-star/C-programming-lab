#include <stdio.h>
int main()
{
  int a[10][10],b[10][10],sum[10][10];
  int rows,cols,i,j;
  printf("Enter number of rows:");
  scanf("%d",&rows);
  printf("Enter number of columns:");
  scanf("%d",&cols);
  printf("\nEnter elements of first matrix:\n");
  for(i=0;i<rows;i++)
  {
    for(j=0;j<cols;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  printf("\nEnter elements of second matrix:\n");
  for(i=0;i<rows;i++)
  {
    for(j=0;j<cols;j++)
    {
      scanf("%d",&b[i][j]);
    }
  }
  for(i=0;i<rows;i++)
  {
    for(j=0;j<cols;j++)
    {
      sum[i][j]=a[i][j]+b[i][j];
    }
  }
  printf("\nSum of the two matrices:\n");
  for(i=0;i<rows;i++)
  {
      for(j=0;j<cols;j++)
      {
          printf("%d\t",sum[i][j]);
      }
      printf("\n");
  }
    return 0;
}
