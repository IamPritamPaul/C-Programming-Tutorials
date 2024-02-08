// 30. Write a program to input any number and check it is prime or not using call by value with return.
#include <stdio.h>
#include <math.h>
int check_factor(int x)
{
    int i = 2, count = 0;
    while (i <= x)
    {
        if (x % i == 0)
            count++;
    }
    return count;
}
int check_prime(int n)
{
    if (n == 1)
        return 0;
    int w = sqrt(n);
    return check_factor(w) == 1;
}
int main()
{
    int n;
    printf("Enter any number:- ");
    scanf("%d", &n);
    if (check_prime(n))
    {
        printf("Yes It is a Prime Number.\n");
    }
    else
    {
        printf("No It is not a Prime Number.\n");
    }
    return 0;
}