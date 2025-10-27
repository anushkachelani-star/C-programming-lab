#include <stdio.h>
int main()
{
  int num,rev=0,digit;
  printf("Enter a number:");
  scanf("%d",&num);
  int temp=num;
  while(temp>0)
  {
    digit=temp%10;
    rev=rev*10+digit;
    temp/=10;
  }
  printf("Digits are:");
  while(rev>0)
  {
    digit=rev%10;
    printf("%d",digit);
    rev/=10;
  }
   return 0;
}
