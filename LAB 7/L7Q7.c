#include <stdio.h>
int main()
{
   int num=100;
   int *ptr;
   int *dptr;
   ptr=&num;
   dptr=&*ptr;
   printf("Value of num=%d\n",num);
   printf("Value using single pointer=%d\n",*ptr);
   printf("Value using double pointer=%d\n",*dptr);
   return 0;
}
