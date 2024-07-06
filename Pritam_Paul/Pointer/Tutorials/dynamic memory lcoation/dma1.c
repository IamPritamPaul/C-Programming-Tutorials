#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("How many numbers you want to input: ");
    scanf("%d", &n);
    int *p = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter a number: ");
        scanf("%d", p + i);
    }
    printf("\nThe array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", *(p + i));
    }
    return 0;
}