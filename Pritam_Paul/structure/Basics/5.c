#include <stdio.h>

struct abc
{
    int a;
    float b;
};
int main()
{
    struct abc a1 = {10, 23.5};
    printf("Integer: %d\tFloat: %f\n", a1.a, a1.b);
    struct abc a2 = a1;
    printf("Integer: %d\tFloat: %f\n", a2.a, a2.b);
}