#include <stdio.h>
#include <string.h>
int main()
{
  char str[100];
  int i,j,flag=0;
  printf("Enter a string:");
  gets(str);
  j=strlen(str)-1;
  for(i=0;i<j;i++,j--)
  {
     if(str[i]!=str[j])
     {
        flag=1;
        break;
     }
  }
  if(flag==0)
     printf("The string is a Palindrome.\n");
  else
     printf("The string is not a Palindrome.\n");
  return 0;
}
