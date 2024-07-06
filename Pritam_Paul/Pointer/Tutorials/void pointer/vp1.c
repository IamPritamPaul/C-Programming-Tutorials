#include <stdio.h>
int main()
{
    int a = 10;
    float b = 20.6;
    char c = 'a';
    double d = 23.345;
    // int *pa = &a;
    // pa = &b;
    void *vp;
    vp = &a;
    printf("%d\t%d\n", vp, *(int *)vp);
    vp = &b;
    printf("%d\t%f\n", vp, *(float *)vp);
    vp = &c;
    printf("%d\t%c\n", vp, *(char *)vp);
    vp = &d;
    printf("%d\t%lf\n", vp, *(double *)vp);
}