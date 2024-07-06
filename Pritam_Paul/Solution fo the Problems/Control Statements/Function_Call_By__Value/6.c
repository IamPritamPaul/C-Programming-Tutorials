// Write a program to input any number and print “correct” if it is 10 else print “Incorrect” using function call by value with return.

#include <stdio.h>

int check_n(int n)
{
    return n == 10;
}

int main()
{
    printf("Enter any number: ");
    int n;
    scanf("%d", &n);
    if (check_n(n))
    {
        printf("Correct\n");
    }
    else
    {
        printf("Incorrect\n");
    }
    return 0;
}