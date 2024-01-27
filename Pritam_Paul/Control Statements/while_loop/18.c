// Write a program to input any number and check whether it is palindrome or not(using while loop)

#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number:- ");
    scanf("%d", &n);
    int copy_n = n;
    int rev_n = 0;
    while (copy_n)
    {
        int digit = copy_n % 10;
        rev_n = rev_n * 10 + digit;
        copy_n /= 10;
    }
    n == rev_n ? printf("Palindrome\n") : printf("Not palindrome\n");
    return 0;
}