// 6. WAP to input 10 integers in an 1-D array and find the biggest one using function call by value with return.
#include <stdio.h>
int biggest_element(int[], int); // declaration

int main()
{
    int a[10];
    printf("Enter the array elements: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("%d is the biggest number.", biggest_element(a, 10)); // calling
    return 0;
}

int biggest_element(int a[], int n) // definition
{
    int se = a[0];
    for (int i = 1; i < n; i++)
    {
        if (se < a[i])
            se = a[i];
    }
    return se;
}