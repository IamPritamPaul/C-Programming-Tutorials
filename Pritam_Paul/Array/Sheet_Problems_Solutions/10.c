// WAP to input 10 integers in an 1-D array and add one element at any position(take it as input) and print the new array.
#include <stdio.h>
void display(int a[], int x)
{
    printf("\nThe array is : ");
    for (int i = 0; i < x; i++)
    {
        printf("%d\t", a[i]);
    }
}
int main()

{
    int arr[5], new_num, position;
    printf("Enter the array (5 elements) : ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    display(arr, 5);
    printf("\nEnter a new number : ");
    scanf("%d", &new_num);
    do
    {
        printf("\nEnter a valid position : ");
        scanf("%d", &position);
    } while (position > 6 || position < 1);
    int new_arr[6];
    position -= 1;
    new_arr[position] = new_num;
    for (int j = 0; j < position; j++)
    {
        new_arr[j] = arr[j];
    }
    for (int j = position + 1; j < 6; j++)
    {
        new_arr[j] = arr[j - 1];
    }
    display(new_arr, 6);
    return 0;
}