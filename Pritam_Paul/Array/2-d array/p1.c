// 1. WAP to input the number of ROWs and Columns and input the elements and then print the 2-D array.
#include <stdio.h>
int main()
{
    int row, column;
    printf("Enter the number of rows:- ");
    scanf("%d", &row);
    printf("Enter the number of columns:- ");
    scanf("%d", &column);
    int arr[row][column];
    // taking input
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("Enter any number: ");
            scanf("%d", &arr[i][j]);
        }
    }
    // display_2_d_array(arr, row, column);
    printf("\nThe array is:-\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}