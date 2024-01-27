#include <stdio.h>
int main()
{
    int ll, ul;
    printf("Enter the lower limit and uppper limit: ");
    scanf("%d%d", &ll, &ul);
    for (int i = ll; i <= ul; i++)
    {
        printf("\nMultiplication Table for %d:\n", i);
        for (int j = 1; j <= 10; j++)
        {
            printf("%d * %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }
    return 0;
}