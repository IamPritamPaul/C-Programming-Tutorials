/* for n=5
A --------------- 0
B B ------------- 1
C C C ----------- 2
B B B B --------- 3
A A A A A ------- 4
*/

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of 'n' : ");
    scanf("%d", &n);
    char c = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c ", c);
        }
        if (i < n / 2)
            c++;
        else
            c--;
        printf("\n");
    }
    return 0;
}