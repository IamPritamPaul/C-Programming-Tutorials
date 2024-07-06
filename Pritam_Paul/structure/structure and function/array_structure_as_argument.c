#include <stdio.h>
#define size 5
struct abc
{
    int a;
    float b;
};

void display(struct abc x[size])
{
    for (int i = 0; i < size; i++)
    {
        printf("\nDisplaying the value of structure - %d :\n", i + 1);
        printf("%d\t%0.2f\n", x[i].a, x[i].b);
    }
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
    struct abc var1[size];
    for (int i = 0; i < size; i++)
    {
        printf("\nTaking input for var[%d]:\n", i);
        input(&var1[i]);
    }
    display(var1);
    return 0;
}