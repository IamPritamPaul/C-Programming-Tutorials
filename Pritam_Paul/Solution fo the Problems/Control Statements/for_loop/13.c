// Write a program to input any number and check if it is perfect or not (factors’ sum)(using for loop).
#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number:- ");
    scanf("%d", &n);
    int sum_of_factors = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum_of_factors += i;
        }
    }
    sum_of_factors == n ? printf("%d is a perfect number.\n", n) : printf("%d is not a perfect number.\n", n);
    return 0;
}