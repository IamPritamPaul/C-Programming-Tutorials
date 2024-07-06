// 8. WAP to input 10 integers in an 1-D array and add one element at the beginning of the array and then print the new array.
#include <stdio.h>
void display_array(int b[], int n)
{
    printf("The array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }
    printf("\n");
}
int main()
{
    int a[10];
    printf("Enter the array: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    display_array(a, 10);
    int b[11];
    // adding new element into the 0th index
    printf("Enter the element to be inserted into the beginning of the array: ");
    int new_element;
    scanf("%d", &new_element);
    b[0] = new_element;
    // copy the array a to array b
    for (int i = 1; i < 11; i++)
    {
        b[i] = a[i - 1];
    }
    display_array(b, 11);
    return 0;
}