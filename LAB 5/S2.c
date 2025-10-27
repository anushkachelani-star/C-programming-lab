#include <stdio.h>
#include <ctype.h>
int main()
{
    char str[100];
    int i;
    printf("Enter a string:");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        str[i]=tolower(str[i]);
    }
    printf("String in lowercase:%s\n",str);
    return 0;
}
