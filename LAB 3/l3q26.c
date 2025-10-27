#include <stdio.h>
int main()
{
  int num,sum=0,digit,temp;
  printf("Enter a number:");
  scanf("%d",&num);
  temp=num;
  while(num>0)
  {
    digit=num%10;
    sum=sum+(digit*digit*digit);
    num=num/10;
  }
  if(temp==sum)
     printf("%d is an Armstrong number.",temp);
  else
     printf("%d is not an Armstrong number.",temp);
    return 0;
}
