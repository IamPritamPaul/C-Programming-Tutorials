// 31. Write a Program to input any number and check whether it is Armstrong Number (A three digit number in which the sum of cube of all digits is equal to the number. Eg:- 371=33+73+13) or not using function call by value with return.
#include <stdio.h>
// #include <math.h>

int power(int x, int y)
{
    int result = 1;
    for (int i = 1; i <= y; i++)
    {
        result *= x;
    }
    return result;
}
int number_of_digits(int n)
{
    int count = 0;
    while (n > 0)
    {
        count++;
        n /= 10;
    }
    return count;
}
int check_armstrong(int x)
{
    int sum = 0, count, pro;
    count = number_of_digits(x);
    for (int i = x; i >= 1; i /= 10)
    {
        int digit;
        digit = i % 10;
        pro = power(digit, count);
        sum = sum + pro;
    }
    return sum;
}
int main()
{
    int n;
    printf("enter a number : ");
    scanf("%d", &n);
    if (check_armstrong(n) == n)
    {
        printf("armstrong number ");
    }
    else
    {
        printf("not a armstrong number ");
    }
    return 0;
}