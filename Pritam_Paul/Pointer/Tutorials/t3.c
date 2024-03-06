#include <stdio.h>
int main()
{
    short int x = 10;
    short int *p = &x;
    printf("The size of x : %d", sizeof(x));
    printf("\nThe size of p: %d", sizeof(p));
    return 0;
}