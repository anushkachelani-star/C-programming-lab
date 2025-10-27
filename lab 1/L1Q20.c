#include <stdio.h>
int main()
{
   float height,base,area;
   printf("Enter the height of the triangle:");
   scanf("%f",&height);
   printf("Enter the base of the triangle:");
   scanf("%f",&base);
   area=(height*base)/2;
   printf("Area of the triangle=%.2f\n",area);
   return 0;
}
