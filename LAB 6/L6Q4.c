#include <stdio.h>
int main()
{
   char books[3][100];
   char *ptr[3];
   int i;
   for(i=0;i<3;i++)
   {
       ptr[i]=books[i];
   }
   printf("Enter names of 3 books:\n");
   for(i=0;i<3;i++)
   {
       printf("Book %d:",i+1);
       gets(ptr[i]);
   }
   printf("\nThe names of the books are:\n");
   for(i=0;i<3;i++)
   {
       printf("Book %d:%s\n",i+1,ptr[i]);
   }
   return 0;
}
