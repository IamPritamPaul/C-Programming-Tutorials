#include <stdio.h>
// not done properly
struct abc
{
    int i;
    float f;
};
struct abc *create_structure(int i, float f)
{
    struct abc *var1;
    var1->i = i;
    var1->f = f;
    return var1;
}

void display(struct abc *x)
{
    printf("%d\t%0.2f\n", x->i, x->f);
}

struct abc *sum_of_structures(struct abc *p1, struct abc *p2)
{
    struct abc *p;
    p->i = p1->i + p2->i;
    p->f = p1->f + p2->f;
    printf("\n%d\t%f\n", p->i, p->f);
    return p;
}

int main()
{
    struct abc *var2 = create_structure(12, 14.5);
    printf("\n%d\t%f\n", var2->i, var2->f);
    struct abc *var3 = create_structure(16, 15.5);
    printf("\n%d\t%f\n", var3->i, var3->f);
    struct abc *sum = sum_of_structures(var2, var3);
    display(sum);
}