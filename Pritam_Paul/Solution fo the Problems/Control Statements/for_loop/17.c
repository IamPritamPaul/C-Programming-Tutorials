// Wap to input any number and check weather it is armstrong number (371)
#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Enter any number: - ");
    scanf("%d", &n);
    // find the number of digit
    int copy_n = n;
    int count_digit = 0;
    for (int i = n; i > 0; i /= 10)
    {
        count_digit++;
    }
    // check armstrong or not
    int sum = 0;
    n = copy_n;
    for (int i = n; i > 0; i /= 10)
    {
        int digit = i % 10;
        int p = pow(digit, count_digit);
        sum += p;
    }
    sum == copy_n ? printf("Yes\n") : printf("No\n");
    return 0;
}