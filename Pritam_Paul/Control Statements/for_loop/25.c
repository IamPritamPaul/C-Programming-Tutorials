// Write a program to input lower limit and upper limit and print all the prime numbers in that range
#include <stdio.h>
int main()
{
    int ll, ul;
    printf("Enter the lower limit and upper limit:- ");
    scanf("%d%d", &ll, &ul);
    for (int i = ll; i <= ul; i++)
    {
        int count = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
                count++;
        }
        if (count == 2)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}