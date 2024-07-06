#include <stdio.h>
struct abc
{
    int a;
    float b;
};

// x=var1

void display(struct abc x)
{
    printf("%d\t%0.2f\n", x.a, x.b);
}

void input(struct abc *p)
{
    printf("Enter any number: ");
    scanf("%d", &p->a);
    printf("Enter any float: ");
    scanf("%f", &p->b);
}

int main()
{
    struct abc var1;
    // struct abc *p=&var1;
    input(&var1);
    display(var1);
}