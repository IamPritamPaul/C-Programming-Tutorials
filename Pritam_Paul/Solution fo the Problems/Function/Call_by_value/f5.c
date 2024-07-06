// 5. Write a program to input any number and check whether it is positive or negative or zero using function call by value with return.

#include <stdio.h>
char check_int(int n)
{
    if (n == 0)
    {
        return 'z';
    }
    if (n > 0)
    {
        return 'p';
    }
    if (n < 0)
    {
        return 'n';
    }
}
int main()
{
    int a;
    printf("enter a number : ");
    scanf("%d", &a);
    if (check_int(a) == 'p')
    {
        printf("Positive\n");
    }
    if (check_int(a) == 'n')
    {
        printf("Negative\n");
    }
    if (check_int(a) == 'z')
    {
        printf("Zero\n");
    }
    return 0;
}