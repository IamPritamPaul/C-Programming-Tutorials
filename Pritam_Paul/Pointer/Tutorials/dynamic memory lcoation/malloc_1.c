#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p = (int *)malloc(40);
    printf("%d", *p);
}