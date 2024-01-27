// Write a program to input two numbers and print the sum, difference, multiplication, division of those numbers using call by value with return. (use different functions for different operation)
#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int diff(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

float div(int a, int b)
{
    return (float)a / b;
}

int mod(int a, int b)
{
    return a % b;
}

int main()
{
    int a, b;
    printf("Enter two Number:- ");
    scanf("%d%d", &a, &b);
    printf("%d + %d = %d\n", a, b, add(a, b));
    printf("%d - %d = %d\n", a, b, diff(a, b));
    printf("%d %% %d = %d\n", a, b, mod(a, b));
    printf("%d * %d = %d\n", a, b, mul(a, b));
    printf("%d / %d = %0.3f\n", a, b, div(a, b));
    return 0;
}