// Write a program to input three numbers and find the smallest one (using ternary operator or conditional operator).
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three number: ");
    scanf("%d%d%d", &a, &b, &c);
    a < b ? a < c ? printf("%d is the smallest number.\n", a) : printf("%d is the smallest number.\n", c) : b < c ? printf("%d is the smallest number.\n", b)
                                                                                                                  : printf("%d is the smallest number.\n", c);
    return 0;
}