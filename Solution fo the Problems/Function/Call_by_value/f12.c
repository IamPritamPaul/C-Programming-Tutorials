// Write a program to input three numbers and find the smallest one (using nested if else)  using function call by value with return.
#include <stdio.h>
int check_smallest(int a, int b, int c)
{
    if (a < b)
    {
        if (a < c)
            return a;
        else
            return c;
    }
    else
    {
        if (b < c)
            return b;
        else
            return c;
    }
}
int main()
{
    int a, b, c;
    printf("Enter any number:- ");
    scanf("%d%d%d", &a, &b, &c);
    printf("%d is the smallest number.\n", check_smallest(a, b, c));
    return 0;
}