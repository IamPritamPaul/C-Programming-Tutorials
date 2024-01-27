#include <stdio.h>
int main()
{
    /* for (int i = 0; i < 10; i++)
    {
        if (i == 5)
            continue;  //all the statements after this won't work and the cursor will go to increment section
        printf("%d\t", i);
    } */
    for (int i = 1; i < 10; i++)
    {
        if (i == 5)
            continue;
        for (int j = 1; j < 10; j++)
        {
            if (j == 5)
                continue;
            printf("%d,%d\t", i, j);
        }
        // if (i == 5)
        //     continue;
        printf("\n");
    }
    printf("\n");
    return 0;
}