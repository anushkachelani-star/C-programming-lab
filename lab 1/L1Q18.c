#include <stdio.h>
int main()
{
  float length,breadth,area,perimeter;
  printf("Enter length of the rectangle:");
  scanf("%f",&length);
  printf("Enter breadth of the reactangle:");
  scanf("%f",&breadth);
  area=length*breadth;
  perimeter=2*(length+breadth);
  printf("\nArea of rectangle=%.2f\n,area");
  printf("Perimeter of rectangle=%.2f\n",perimeter);
  return 0;
}
