/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
  int x, rev = 0, rem;  
  printf("Enter an integer: ");
  scanf("%d", &x);

  while (x != 0) {
    rem = x % 10;
    rev = rev * 10 + rem;
    x /= 10;
  }

  printf("Reversed number = %d", rev);

    return 0;
}
