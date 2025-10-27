#include <stdio.h>
int main()
{
  int numbers[10];
  int i;
  printf("Enter 10 numbers:\n");
  for(i=0;i<10;i++)
  {
    scanf("%d",&numbers[i]);
  }
  printf("\n4th value:%d\n",numbers[3]);
  printf("7th value:%d\n",numbers[6]);
  printf("9th value:%d\n",numbers[8]);
    return 0;
}
