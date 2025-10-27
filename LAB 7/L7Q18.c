#include <stdio.h>
int main()
{
    char str1[100],str2[100];
    char *p1,*p2;
    int index=0;
    printf("Enter first string:");
    gets(str1);
    printf("Enter second string:");
    gets(str2);
    p1=str1;
    p2=str2;
    while(*p1!='\0'&&*p2!='\0')
    {
        if(*p1!=*p2)
        {
           printf("Strings differ at index %d\n",index);
           printf("str1[%d]='%c'\n",index,*p1);
           printf("str2[%d]='%c'\n",index,*p2);
           return 0;
        }
        p1++;
        p2++;
        index++;
    }
    if(*p1=='\0'&&*p2=='\0')
       printf("Strings are identical.\n");
    else
       printf("Strings differ at index %d(one string ended earlier)\n",index);
       return 0;
}
