// 43. Write a program to input any number 'n' and digit 'd' also and check the frequency of d in n using function call by value with return.

#include <stdio.h>

int frequency(int n, int d)
{
    int f = 0;
    while (n > 0)
    {
        if (d == n % 10)
        {
            f++;
        }
        n /= 10;
    }
    return f;
}

int main()
{
    int n, d;
    printf("Enter any number:- ");
    scanf("%d", &n);
    printf("Enter the digit whose frequency you want to check: ");
    scanf("%d", &d);
    printf("The frequency of %d in %d is %d\n", d, n, frequency(n, d));
    return 0;
}