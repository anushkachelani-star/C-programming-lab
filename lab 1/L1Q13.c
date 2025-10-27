#include <stdio.h>
int main()
{
   double bytes,kilobytes,megabytes,gigabytes;
   printf("Enter size in Bytes:");
   scanf("%lf",&bytes);
   kilobytes=bytes/1024;
   megabytes=bytes/(1024*1024);
   gigabytes=bytes/(1024*1024*1024);
   printf("\n%.2lf Bytes=%.2lf KB",bytes,kilobytes);
   printf("\n%.2lf Bytes=%.2lf MB",bytes,megabytes);
   printf("\n%.2lf Bytes=%.2lf GB",bytes,gigabytes);
   return 0;
}
