#include <stdio.h>
int main()
{
  int a,b;
  printf("Enter first value:");
  scanf("%d",&a);
  printf("Enter second value:");
  scanf("%d",&b);
  if(a>b)
  {
     printf("Largest=%d\n",a);
     printf("Smallest=%d\n",b);
  }
  else if(b>a)
  {
     printf("Largest=%d\n",b);
     printf("Smallest=%d\n",a);
   }
   else
   {
      printf("Both values are equal=%d\n",a);
    }
    return 0;
}
