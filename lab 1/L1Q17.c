#include <stdio.h>
int main()
{
  float side,area,perimeter;
  printf("Enter the side length of the square:");
  scanf("%f",&side);
  area=side*side;
  perimeter=4*side;
  printf("\nArea of square=%.2f\n",area);
  printf("Perimeter of square=%.2f\n",perimeter);
  return 0;
}
