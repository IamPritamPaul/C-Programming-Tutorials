// Write a program to input two numbers and find the smallest one (using ternary operator or conditional operator).
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter any two numbers: ");
    scanf("%d%d", &a, &b);
    a < b ? printf("%d is the smallest number\n", a) : printf("%d is the smallest number\n", b);
    return 0;
}