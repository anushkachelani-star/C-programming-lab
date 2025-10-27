#include <stdio.h>
int main()
{
   int num=50;
   int *ptr;
   ptr=&num;
   printf("Address stored in pointer:%p\n",ptr);
   printf("Value at that address (using *ptr):%d\n",*ptr);
   return 0;
}
