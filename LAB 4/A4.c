#include <stdio.h>
int main()
{
  int amount;
  int notes[]={500,200,100,50,20,10,5,2,1};
  int noteCount[9]={0};
  int i;
  printf("Enter the amount:");
  scanf("%d",&amount);
  int remaining=amount;
  for(i=0;i<9;i++)
  {
    if(remaining>=notes[i])
    {
      noteCount[i]=remaining/notes[i];
      remaining=remaining%notes[i];
    }
  }
  printf("\nMinimum number of notes required for Rs.%d:\n",amount);
  for(i=0;i<9;i++)
  {
    if(noteCount[i]!=0)
    {
     printf("%d note(s) of Rs.%d\n",noteCount[i],notes[i]);
    }
  }
  return 0;
}
