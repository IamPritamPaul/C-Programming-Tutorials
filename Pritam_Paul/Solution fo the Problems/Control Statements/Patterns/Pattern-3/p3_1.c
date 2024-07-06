/*
-------- *
------ * *
---- * * *
-- * * * *
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
        for (int j = 0; j < n - 1 - i; j++)
        {
            printf("  ");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}