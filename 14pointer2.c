
#include <stdio.h>

int main()
{
    char str[]="deepika";
    char *s1=str;
    for(int i=0;i<8;i++)
    {
        printf("%c",*str);
        s1++;
    }
    return 0;
}