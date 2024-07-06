#include <stdio.h>
int main()
{
    /* for (int i = 0; i < 10; i++)
    {
        printf("%d\t", i);
        if (i == 7)
            break;
    } */
    for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j < 10; j++)
        {
            printf("%d,%d\t", i, j);
            if (j == 5)
                break;
        }
        if (i == 5)
            break;
        printf("\n");
    }
    printf("\n");
    return 0;
}