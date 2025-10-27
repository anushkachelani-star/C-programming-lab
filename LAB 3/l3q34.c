#include <stdio.h>
int main()
{
  int n,i;
  int first=1,second=1,next;
  printf("Enter the number of terms (n):");
  scanf("%d",&n);
  if(n<=0)
  {
    printf("Please enter a positive number.\n");
  }
  else
  {
    printf("Fibonacci series upto %d terms:\n",n);
    for(i=1;i<=n;i++)
    {
     if(i==1||i==2)
        next=1;
    else
    {
      next=first+second;
      first=second;
      second=next;
    }
    printf("%d",next);
    }
  }
  return 0;
}
