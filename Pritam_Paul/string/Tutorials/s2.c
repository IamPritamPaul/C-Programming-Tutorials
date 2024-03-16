#include <stdio.h>
int main()
{
    char s[' '];
    printf("Enter any string:");
    fflush(stdin);
    gets(s);
    for (int i = 0; s[i] != '\0'; i++)
    {
        printf("%c", s[i]);
    }
}