#include <stdio.h>
int main()
{
    int arr[3][4] = {{0, 1, 2, 3}, {10, 11, 12, 13}, {20, 21, 22, 23}};
    int(*p)[4] = arr;
    printf("%d", *(*(p + 2) + 1));
    return 0;
}