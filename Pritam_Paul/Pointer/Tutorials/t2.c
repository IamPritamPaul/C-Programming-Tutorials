#include <stdio.h>
int main()
{
    int x = 198;
    printf("\n%X", &x);
    int *p = &x;
    printf("\n%X", p);

    printf("\n%d is the number inside x", x);
    printf("\n%d is the number inside x", *p);
    return 0;
}