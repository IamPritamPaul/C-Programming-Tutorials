#include <stdio.h>
struct abc
{
    int x;
    int *p;
};

struct a2
{
    int a, b, c, d;
};

struct a1
{
    int x;
    struct a2 *p;
};

int main()
{
    struct a1 aa1;
    struct a2 aa2 = {10, 20, 30, 40};
    aa1.p = &aa2;
}