#include <stdio.h>
int main()
{
  int hours,minutes;
  printf("Enter time in hours:");
  scanf("%d",&hours);
  minutes=hours*60;
  printf("%d hour(s)=%d minutes\n",hours,minutes);
  return 0;
}
