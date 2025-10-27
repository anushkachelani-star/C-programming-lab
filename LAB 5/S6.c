#include <stdio.h>
#include <string.h>
int main()
{
   char str1[100],str2[100];
   int result;
   printf("Enter first string:");
   gets(str1);
   printf("Enter second string:");
   gets(str2);
   result=strcmp(str1,str2);
   if(result==0)
      printf("Both strings are the same.\n");
   else if(result>0)
      printf("First string is greater than the second.\n");
   else
      printf("First string is smaller than the second.\n");
      return 0;
}
