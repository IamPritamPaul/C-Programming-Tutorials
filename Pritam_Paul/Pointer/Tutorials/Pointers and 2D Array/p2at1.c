#include <stdio.h>
int main()
{
    int arr[3][4] = {{0, 1, 2, 3}, {10, 11, 12, 13}, {20, 21, 22, 23}};
    printf("\n%d", *(*arr + 7));
    // printf("\n%d", *(*(arr + 1) + 2));
    // printf("\n%d", *(arr + 2));
    return 0;
}