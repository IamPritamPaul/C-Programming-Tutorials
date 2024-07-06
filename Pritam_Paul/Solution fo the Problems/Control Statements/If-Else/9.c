// Write a program to input three numbers and find the smallest one (using else-if ladder).
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter any three numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    if (a < b && a < c)
        printf("%d is the smallest number.\n", a);
    else if (b < a && b < c)
        printf("%d is the smallest number.\n", b);
    else
        printf("%d is is the smallest number.\n", c);
    return 0;
}