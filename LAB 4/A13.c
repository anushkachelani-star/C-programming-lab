#include <stdio.h>
int main()
{
  int arr[11];
  int n=10;
  int i,pos,num;
  printf("Enter 10 elements:\n");
  for(i=0;i<n;i++)
  {
     scanf("%d",&arr[i]);
  }
  printf("Enter the position(1 to 11) where you want to insert:");
  scanf("%d",&num);
  if(pos<1 || pos>n+1)
  {
     printf("Invalid position!\n");
     return 0;
  }
  for(i=n;i>=pos;i--)
  {
     arr[i]=arr[i-1];
  }
  arr[pos-1]=num;
  n++;
  printf("\nArray after insertion:\n");
  for(i=0;i<n;i++)
  {
     printf("%d",arr[i]);
  }
  return 0;
}
