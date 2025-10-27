#include <stdio.h>
int main()
{
  float dollars,pounds;
  printf("Enter amount in Dollars:");
  scanf("%f",&dollars);
  pounds=(dollars*48)/70;
  printf("%.2f Dollar(s)=%.2f Pound(s)\n",dollars,pounds);
  return 0;
}
