#include <stdio.h>
int sum_of_array(int *a, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += *(a + i);
    }
    return sum;
}
int main()
{
    int arr[5] = {0, 1, 2, 3, 4};
    int s = sum_of_array(arr, 5);
    printf("%d is the sumof the elements of the array\n", s);
    return 0;
}