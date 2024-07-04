
#include <stdio.h>

int main()
{
    char str[]="deepika";
    char *s1=str;
    for(int i=0;i<4;i++)
    {
        printf("%c",*s1);
        s1++;
    }
    return 0;
}