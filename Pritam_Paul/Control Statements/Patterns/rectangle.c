/*
1 2 3 4 5
* * * * * 1
* * * * * 2
* * * * * 3
* * * * * 4
* * * * * 5
 */
#include <stdio.h>
int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}