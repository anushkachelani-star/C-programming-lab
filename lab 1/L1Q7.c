#include <stdio.h>
int main()
{
  int minutes;
  int hours,remaining_minutes;
  printf("Enter time in minutes:");
  scanf("%d",&minutes);
  hours=minutes/60;
  remaining_minutes=minutes%60;
  printf("%d minutes=%d hour(s) and %d minute(s)\n",minutes,hours,remaining_minutes);
  return 0;
}
