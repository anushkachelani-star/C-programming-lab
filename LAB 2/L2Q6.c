#include <stdio.h>
int main()
{
  float m1,m2,m3,total,average;
  printf("Enter marks of three subjects:");
  scanf("%f %f %f",&m1,&m2,&m3);
  if(m1<35||m2<35||m3<35)
  {
    printf("Result:Fail(Scored less than 35 in at least one subject)\n");
  }
  else
  {
    total=m1+m2+m3;
    average=total/3;
     printf("Total Marks:%.2f\n",total);
     printf("Average Marks:%.2f\n",average);
    if(average>=70)
     printf("Grade:Distinction\n");
    else if(average>=60)
     printf("Grade:First Class\n");
    else if(average>=50)
     printf("Grade:Second Class\n");
    else if(average>=35)
     printf("Grade:Third Class\n");
  }
   return 0;
}
