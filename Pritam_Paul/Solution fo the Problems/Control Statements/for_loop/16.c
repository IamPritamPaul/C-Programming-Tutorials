// WAP to input any number and check it is prime or not
#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Enter any number:- ");
    scanf("%d", &n);
    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            printf("No\n");
            return 0;
        }
    }
    printf("Yes\n");
    return 0;
}