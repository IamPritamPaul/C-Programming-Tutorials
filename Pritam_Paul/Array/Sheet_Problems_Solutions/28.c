// 28. WAP to input 10 characters in an 1-D array and count the number of Capital letters and small letters using function call by value without return
#include <stdio.h>
void count_capital_small(char arr[], int n)
{
    int cc = 0, cs = 0;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] >= 'A' && arr[i] <= 'Z')
        {
            cc++;
        }
        else if (arr[i] >= 'a' && arr[i] <= 'z')
        {
            cs++;
        }
        else
        {
            continue;
        }
    }
    printf("\nThe number of capital letters is: %d\nThe number of small letters is: %d", cc, cs);
}
int main()
{
    char arr[10];
    printf("Enter the characters: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%c", &arr[i]);
        fflush(stdin);
    }
    count_capital_small(arr, 10);
    return 0;
}