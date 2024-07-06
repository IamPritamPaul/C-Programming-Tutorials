#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of 'n' upto which fibonacci series would be printed.\n");
    scanf("%d", &n);
    int a = 1, b = 1;
    printf("%d\t%d\t", a, b);
    for (int i = 2; i < n; i++)
    {
        int c = a + b;
        printf("%d\t", c);
        a = b;
        b = c;
    }
    return 0;
}