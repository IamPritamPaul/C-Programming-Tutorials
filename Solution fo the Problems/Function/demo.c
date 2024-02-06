// call by value with return
#include <stdio.h>
int sum(int, int); // declaration of the function
int main()
{
    int a, b;
    printf("Enter any two numbers:- ");
    scanf("%d%d", &a, &b);
    int c = sum(a, b);
    printf("%d + %d = %d\n", a, b, c);
    return 0;
}

int sum(int a, int b)
{
    int x = a + b;
    return x;
}