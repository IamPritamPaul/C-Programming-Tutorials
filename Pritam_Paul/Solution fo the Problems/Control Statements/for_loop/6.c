// WAP to input an integer and findout the sum of all the digits of that number.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number: - ");
    scanf("%d", &n);
    int sum = 0;
    for (int i = n; i > 0; i /= 10)
    {
        sum += (i % 10);
    }
    printf("%d is the sum of the digits.\n", sum);
    return 0;
}