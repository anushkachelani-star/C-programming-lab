#include <stdio.h>
int main()
{
  int matrix[4][4],transpose[4][4];
  int i,j;
  printf("Enter elements of 4*4 matrix:\n");
  for(i=0;i<4;i++)
  {
    for(j=0;j<4;j++)
  {
    scanf("%d",&matrix[i][j]);
  }
  }
  for(i=0;i<4;i++)
  {
    for(j=0;j<4;j++)
    {
      transpose[j][i]=matrix[i][j];
    }
  }
  printf("\nOriginal Matrix:\n");
  for(i=0;i<4;i++)
  {
    for(j=0;j<4;j++)
    {
      printf("%d\t",transpose[i][j]);
    }
    printf("\n");
  }
  return 0;
}
