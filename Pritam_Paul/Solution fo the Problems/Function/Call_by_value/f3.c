// 3. Write a program to input any float number and print the integer part and float part differently using function call by value without return.

#include <stdio.h>

void abc(float f)
{
    int x = f;
    f = f - x;
    printf("%d is the integer part\n%0.2f is the float part.\n", x, f);
    return;
}

int main()
{
    float f;
    printf("Ener any flaot: ");
    scanf("%f", &f);
    abc(f);
    return 0;
}