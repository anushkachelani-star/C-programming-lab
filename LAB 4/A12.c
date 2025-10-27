#include <stdio.h>
int main()
{
  int arr[11];
  int n=10;
  int i,num;
  printf("Enter 10 elements:\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  printf("Enter the number to insert at the beginning:");
  scanf("%d",&num);
  for(i=n;i>0;i--)
  {
    arr[i]=arr[i-1];
  }
  arr[0]=num;
  n++;
  printf("\nArray after insertion:\n");
  for(i=0;i<n;i++)
  {
      printf("%d",arr[i]);
  }
  return 0;
}
