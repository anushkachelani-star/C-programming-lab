#include <stdio.h>
int main()
{
   char *arr[]={"Maths","Physics","Computer","Yoga","EVS"};
   char **ptr=arr;
   printf("The third string is:%s\n",*(ptr+2));
   return 0;
}
