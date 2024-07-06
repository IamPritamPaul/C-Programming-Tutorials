// Write a program to input one fractional number and printf the integer part and fractional part differently.
#include <stdio.h>

int main()
{
    float f;
    printf("Enter a float :-  ");
    scanf("%f", &f);
    int x = f;
    f -= x;
    printf("The integer part is : %d\nThe fractinoal part is : %0.2f\n", x, f);
    return 0;
}