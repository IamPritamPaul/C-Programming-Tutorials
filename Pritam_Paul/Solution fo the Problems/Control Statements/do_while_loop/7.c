// WAP to input any number and fins the sum of the digits of that number untill you get a single digit number
#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number:- ");
    scanf("%d", &n);
    int sum;
    do
    {
        sum = 0;
        do
        {
            int d = n % 10;
            sum += d;
            n /= 10;
        } while (n > 0); // 27
        // n = sum;

    } while (sum > 9);
    printf("%d\n", sum);
    return 0;
}