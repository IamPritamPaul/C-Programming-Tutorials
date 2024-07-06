#include <stdio.h>

int main()
{
    int arr[10];
    // input
    printf("Enter the array: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    // print
    printf("The array is : ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}