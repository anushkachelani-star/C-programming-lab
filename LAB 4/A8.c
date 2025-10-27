#include <stdio.h>
int main()
{
  int src[5],dest[10];
  int i,j=0;
  printf("Enter 5 elements for the source array:\n");
  for(i=0;i<5;i++)
  {
    scanf("%d",&src[i]);
  }
  for(i=0;i<5;i++)
  {
    dest[j]=src[i];
    j+=2;
  }
  printf("\nDestination array elements:\n");
  for(i=0;i<10;i++)
  {
    printf("%d\t",dest[i]);
  }
  printf("\n");
  return 0;
}
