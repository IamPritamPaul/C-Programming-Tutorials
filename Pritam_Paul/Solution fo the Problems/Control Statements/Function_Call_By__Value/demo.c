#include <stdio.h>

int sum(int, int); // function declaration

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    int c = sum(a, b); // function call (by value)  a,b are called as actual parameters
    printf("%d is the sum\n", c);

    // printf("%d is the sum.\n",sum(a,b));
    return 0;
}

int sum(int x, int y) // x and y are called as formal parameters
{
    return x + y;
}