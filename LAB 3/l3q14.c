#include <stdio.h>
int main()
{
  float values[10],sum=0,mean;
  int i;
  printf("Enter 10 values:\n");
  for(i=0;i<10;i++)
  {
    scanf("%f",&values[i]);
    sum+=values[i];
  }
  mean=sum/10;
  printf("Sum of the 10 values=%.2f\n",sum);
  printf("Mean of the 10 values=%.2f\n",mean);
  return 0;
}
