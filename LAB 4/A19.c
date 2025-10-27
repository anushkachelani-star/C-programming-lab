#include <stdio.h>
int main()
{
   int arr[10],n,i,search,found=0;
   printf("Enter number of elements:");
   scanf("%d",&n);
   printf("Enter %d elements:\n",n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }
   printf("Enter the value to search:");
   scanf("%d",&search);
   for(i=0;i<n;i++)
   {
       if(arr[i]==search)
       {
          found=1;
          printf("Value %d found at position %d.\n",search,i+1);
          break;
       }
   }
   if(found==0)
      printf("Value %d not found in the array.\n",search);
      return 0;
}
