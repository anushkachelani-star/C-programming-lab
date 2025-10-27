#include <stdio.h>
int main()
{
  int i,boys=0,girls=0;
  char sex;
  printf("Enter sex code for 50 students(B for boy,G for girl):\n");
  for(i=1;i<=50;i++)
  {
   printf("Student %d:",i);
   scanf("%c",&sex);
   if(sex=='B'||sex=='b')
    boys++;
   else if(sex=='G'||sex=='g')
    girls++;
   else
   {
   printf("Invalid code!Please enter B or G.\n");
   i--;
   }
  }
  printf("\nTotal Boys=%d\n",boys);
  printf("Total Girls=%d\n",girls);
  return 0;
}
