#include <stdio.h>
int main()
{
    int arr[5] = {5, 10, 15, 20, 25};
    int *p = arr;
    // int *p = &arr;
    // int *p = &arr[0];
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", *(p + i));
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", *(arr + i));
    }
    return 0;
}