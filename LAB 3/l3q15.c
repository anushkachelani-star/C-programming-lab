#include <stdio.h>
int main()
{
  int n,i;
  float sum=0,mean,value;
  printf("Enter the number of values:");
  scanf("%d",&n);
  printf("Enter %d values:\n",n);
  for(i=1;i<=n;i++)
  {
    scanf("%f",&value);
    sum+=value;
  }
  mean=sum/n;
  printf("Sum of the %d values=%.2f\n",n,sum);
  printf("Mean of the %d values=%.2f\n",n,mean);
  return 0;
}
