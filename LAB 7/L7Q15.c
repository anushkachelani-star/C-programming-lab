#include <stdio.h>
#include <string.h>
int main()
{
   char str[]="HELLO WORLD";
   char *mid,*rest;
   int length=strlen(str);
   mid=str+(length/2);
   rest=mid;
   printf("Original string:%s\n",str);
   printf("Middle character:%c\n",*mid);
   printf("Remainder of string from middle:%s\n",rest);
   return 0;
}
