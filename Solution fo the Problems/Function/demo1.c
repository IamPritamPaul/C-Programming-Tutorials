// call by value without return
#include <stdio.h>
void sum(int, int); // declaration of the function
int main()
{
    int a, b;
    printf("Enter any two numbers:- ");
    scanf("%d%d", &a, &b);
    sum(a, b);
    return 0;
}

void sum(int a, int b)
{
    printf("%d + %d = %d\n", a, b, a + b);
}