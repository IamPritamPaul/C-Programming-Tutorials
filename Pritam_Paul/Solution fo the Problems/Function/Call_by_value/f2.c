// 2. Write a program to input any float and round off of that float using call by value with return.
#include <stdio.h>

int round_off(float f) // 5.7
{
    int x;
    x = f;
    f = f - x;
    if (f > 0.5)
    {
        x++;
    }
    return x;
}

int main()
{
    float f;
    printf("Enter any float : ");
    scanf("%f", &f);
    printf("%d is the round off of %0.2f\n", round_off(f), f);
    return 0;
}