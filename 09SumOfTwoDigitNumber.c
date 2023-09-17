/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int sum=0,x,y;
    printf("enter the num ");
    scanf("%d",&x);
    while(x!=0)
    {
        y=x%10;
        sum=sum+y;
        x=x/10;
    }
printf("%d",sum);
    return 0;
}
