#include <stdio.h>
int main()
{
  int arr[10],result[10];
  int i,n,direction;
  printf("Enter 10 elements:\n");
  for(i=0;i<10;i++)
  {
    scanf("%d",&arr[i]);
  }
  printf("Enter number of positions to shift:");
  scanf("%d",&n);
  printf("Enter direction(1 for left,2 for right):");
  scanf("%d",&direction);
  for(i=0;i<10;i++)
  {
    result[i]=0;
  }
  if(direction==1)
  {
     for(i=0;i<10;i++)
     {
        if(i+n<10)
           result[i]=arr[i+n];
        else
           result[i]=0;
     }
  }
  else if(direction==2)
  {
    for(i=9;i>=0;i--)
    {
       if(i-n>=0)
          result[i]=arr[i-n];
       else
          result[i]=0;
    }
  }
  else
  {
     printf("Invalid direction!\n");
     return 0;
  }
  printf("\nArray after shifting:\n");
  for(i=0;i<10;i++)
  {
     printf("%d",result[i]);
  }
  return 0;
}
