// Write a program to input three numbers and find the smallest one (using nested if else).
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter any three numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    if (a < b)
    {
        if (a < c)
        {
            printf("%d is the smallest number.\n", a);
        }
        else
        {
            printf("%d is the smallest number.\n", c);
        }
    }
    else
    {
        if (b < c)
        {
            printf("%d is the smallest number.\n", b);
        }
        else
        {
            printf("%d is the smallest number.\n", c);
        }
    }
    return 0;
}