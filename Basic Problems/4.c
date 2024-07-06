// Write a program to input two integers and swap them (without using 3rd variable)

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    // a=5 b=10
    printf("Before swapping:  a=%d\tb=%d\n", a, b);
    // using arithmetic operator
    /*
    a = a + b; // a=15
    b = a - b; // b=5
    a = a - b; // a=10
    */

    // using bitwise XOR operator
    a = a ^ b; // a=6
    b = a ^ b; // b=10
    a = a ^ b; // a=12

    printf("After swapping:  a=%d\tb=%d\n", a, b);

    return 0;
}