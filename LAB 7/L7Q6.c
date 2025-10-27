#include <stdio.h>
int main()
{
   char str[]="HELLO";
   char *ptr;
   ptr=str;
   printf("Characters in the string:\n");
   while(*ptr!='\0')
   {
         printf("%c\n",*ptr);
         ptr++;
   }
   return 0;
}
