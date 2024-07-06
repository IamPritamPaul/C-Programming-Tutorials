// Write a program to input two integers and swap them (with using 3rd variable)
#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("Before swapping:  a=%d\tb=%d\n", a, b);
    int c;
    c = a;
    a = b;
    b = c;
    printf("After swapping:  a=%d\tb=%d\n", a, b);

    return 0;
}
