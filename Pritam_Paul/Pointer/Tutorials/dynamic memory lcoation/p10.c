#include <stdio.h>
#include <stdlib.h>
void print_array(int *p, int n)
{
    printf("\nThe array is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", *(p + i));
    }
}
int main()
{
    int *p, *p_new, n, new_number, position;
    printf("How many number u wanna take input: ");
    scanf("%d", &n);
    p = (int *)malloc(n * sizeof(int));
    printf("Enter the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", p + i);
    }
    print_array(p, n);
    printf("\nEnter the position and the number u wanna insert: ");
    scanf("%d%d", &position, &new_number);
    p_new = (int *)malloc((n + 1) * sizeof(int));
    int i = 0, j = 0;
    while (i < position - 1)
    {
        *(p_new + j) = *(p + i);
        i++;
        j++;
    }
    printf("\ni=%d\tj=%d\n", i, j);
    printf("\nNew number: %d\n", new_number);
    *(p_new + i) = new_number;
    i++;
    while (j < n + 1)
    {
        *(p_new + j) = *(p + i);
        j++;
        i++;
    }
    print_array(p_new, n + 1);
}