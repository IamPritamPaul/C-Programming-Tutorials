#include <stdio.h>
struct abc
{
    int a;
    float b;
};
struct abc create_structure(int i, float f)
{
    struct abc var1;
    var1.a = i;
    var1.b = f;
    return var1;
}
void display(struct abc x)
{
    printf("%d\t%0.2f\n", x.a, x.b);
}
int main()
{
    struct abc var2 = create_structure(12, 14.5);
    display(var2);
}