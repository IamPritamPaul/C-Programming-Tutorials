// 15. WAP to input 10 elements in an 1-D array and reverse the array
#include <stdio.h>
void display(int arr[], int n)
{
    printf("\nThe array is : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}
int main()
{
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    display(arr, 10);
    // two pointer technique
    int i = 0, j = 9;
    while (i < j)
    {
        arr[i] = arr[i] ^ arr[j];
        arr[j] = arr[i] ^ arr[j];
        arr[i] = arr[i] ^ arr[j];
        i++;
        j--;
    }
    printf("\nAfter reversing.");
    display(arr, 10);
    return 0;
}