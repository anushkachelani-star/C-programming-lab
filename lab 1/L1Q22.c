#include <stdio.h>
int main()
{
    float gross,discount,net;
    printf("Enter the gross sales:");
    scanf("%f",&gross);
    discount=0.10*gross;
    net=gross-discount;
    printf("Gross Sales=%.2f\n",gross);
    printf("Discount(10%%)=%.2f\n",discount);
    printf("Net Sales=%.2f\n",net);
    return 0;
}
