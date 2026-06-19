/* Swap 2 nos without using 3rd variable */

/* Using Arithmetic operations */

#include <stdio.h>

int main()
{
    int a = 10, b = 20;

    a = a + b;
    b = a - b;
    a = a - b;
    printf("%d %d \n", a,b);
    return 0;
}

/* Using Bitwise operaters */

int main()
{
    int a = 10, b = 20;

     a = a ^ b;
     b = a ^ b;
     a = a ^ b;
     printf("%d %d \n", a,b);
     return 0;
}
