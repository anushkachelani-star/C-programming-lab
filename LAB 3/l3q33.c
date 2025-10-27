#include <stdio.h>
int main()
{
  int num,square,tempNum,tempSquare,digit;
  int isAutomorphic=1;
  printf("Enter a number:");
  scanf("%d",&num);
  square=num*num;
  tempNum=num;
  tempSquare=square;
  while(tempNum>0)
  {
    if(tempNum%10!=tempSquare%10)
    {
      isAutomorphic=0;
      break;
    }
    tempNum/=10;
    tempSquare/=10;
  }
  if(isAutomorphic)
    printf("%d is an Automorphic Number.\n",num);
  else
    printf("%d is not an Automorphic Number.\n",num);
  return 0;
}
