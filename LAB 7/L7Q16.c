#include <stdio.h>
int main()
{
   int arr[]={1,3,5,7,9,11};
   int n=sizeof(arr)/sizeof(arr[0]);
   int *front=arr;
   int *back=arr+n-1;
   int target=12;
   printf("Pairs that sum to %d:\n",target);
   while(front<back)
   {
         int sum= *front+*back;
         if(sum == target)
         {
            printf("%d+%d=%d\n",*front,*back,sum);
            front++;
            back--;
         }
         else if(sum<target)
         {
            front++;
         }
         else
         {
            back--;
         }
   }
   return 0;
}
