#include <stdio.h>
int main()
{
    int arr[5] = {5, 10, 15, 20, 25};
    int *p = arr;
    int(*pa)[5] = &arr;
    printf("%d\t%d", p, pa);
    p++;
    pa++;
    printf("\n%d\t%d", p, pa);
    return 0;
}