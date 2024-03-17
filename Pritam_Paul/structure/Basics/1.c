#include <stdio.h>
struct abc
{
    int a;
    float b;
};
int main()
{
    struct abc var1, var2;
    var1.a = 10;
    var1.b = 20.5;
    var2.a = 35;
    var2.b = 40.5;
    printf("Structure abc - var 1 : a=%d\n", var1.a);
    printf("Structure abc - var 1 : b=%f\n", var1.b);
    printf("Structure abc - var 2 : a=%d\n", var2.a);
    printf("Structure abc - var 2 : b=%f\n", var2.b);
}