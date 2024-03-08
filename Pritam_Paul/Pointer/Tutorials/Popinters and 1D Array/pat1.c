#include <stdio.h>
int main()
{
    int arr[5] = {5, 10, 15, 20, 25};
    // arr is a constant pointer to the array
    printf("\n%d", arr);
    // arr = arr + 1;   through an error as arr is a constant pointer
    printf("\n%d", &arr[0]);
    return 0;
}