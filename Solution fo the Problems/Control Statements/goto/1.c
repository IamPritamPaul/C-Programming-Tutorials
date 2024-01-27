#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number:- ");
    scanf("%d", &n);
    int i = 0;
statement_1:
    printf("%d\t", i);
    i++;
    if (i < n)
    {
        goto statement_1;
    }
    printf("\n");
    return 0;
}