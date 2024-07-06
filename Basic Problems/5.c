// Write a program to input one integer and one float number and find their Sum.
#include <stdio.h>
int main()
{
    int a;
    printf("Enter any integer: ");
    scanf("%d", &a);
    float f;
    printf("Enter any float number: ");
    scanf("%f", &f);
    float f1 = a + f;
    printf("%d + %0.2f = %0.2f\n", a, f, f1);
    return 0;
}