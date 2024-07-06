#include <stdio.h>
int main()
{
    int arr[5] = {5, 10, 15, 20, 25};
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", arr + i);
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", *(arr + i));
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", i[arr]);
    }
    return 0;
}