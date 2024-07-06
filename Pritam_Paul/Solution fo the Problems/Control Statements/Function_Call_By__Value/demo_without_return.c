#include <stdio.h>

void sum(int, int); // function declaration

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    sum(a, b); // function call (by value)
    return 0;
}

void sum(int x, int y)
{
    printf("%d + %d = %d\n", x, y, x + y);
}