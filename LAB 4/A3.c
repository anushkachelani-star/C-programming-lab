#include <stdio.h>
int main()
{
 int arr[5];
 int i,j,temp,choice;
 printf("Enter 5 numbers:\n");
 for(i=0;i<5;i++)
 {
   scanf("%d",arr[i]);
 }
 printf("\nEnter 1 for Ascending order or 2 for Descending order:");
 scanf("%d",&choice);
 for(i=0;i<5-1;i++)
 {
   for(j=0;j<5-i-1;j++)
  {
    if((choice==1 && arr[j]>arr[j+1])||(choice==2 && arr[j]<arr[j+1]))
       {
         temp=arr[j];
         arr[j]=arr[j+1];
         arr[j+1]=temp;
       }
  }
}
printf("\nSorted array:\n");
for(i=0;i<5;i++)
{
  printf("%d",arr[i]);
}
return 0;
}
