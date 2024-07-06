/*
A
A B
A B C
A B C B
A B C B A
*/
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the final character (capital letter): ");
    scanf("%c", &ch); // E
    for (int i = 0; i < 2 * (ch - 65 + 1) - 1; i++)
    {
        char c = 'A';
        for (int j = 0; j <= i; j++)
        {
            printf("%c ", c);
            // needs improvement
            if (j <= (ch - c))
                c++;
            else
                c--;
        }
        printf("\n");
    }
}