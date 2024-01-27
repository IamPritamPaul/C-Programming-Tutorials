// Write a program to print the first ‘n’ natural number in ascending and descending order.(using while loop)
#include <stdio.h>
int main()
{
    int n;
    printf("Enter any natural number :- ");
    scanf("%d", &n);
    int i = 1; // initialisation of the loop
    while (i <= n)
    { // condition/limit
        printf("%d\n", i);
        i++; // increment
    }
    return 0;
}