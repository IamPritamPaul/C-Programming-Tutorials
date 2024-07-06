#include <stdio.h>
int main()
{
    int x;
    printf("%d", &x); // address of operator
    printf("\n%x", &x);
    printf("\n%X", &x);
    printf("\n%p", &x);
    return 0;
}