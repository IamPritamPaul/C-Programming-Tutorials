/*
 *
 * *
 * * *
 * * * *
 * * * * *
 */
#include <stdio.h>
int main()
{
    int n;
    printf("Enter any value of 'n' :-  ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}