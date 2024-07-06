// Write a program to input any alphabet and print the capital letter if the character is small and print the small letter if the character is capital letter.
#include <stdio.h>
int main()
{
    char c;
    printf("Enter any character: ");
    scanf("%c", &c);
    if (c >= 'a' && c <= 'z')
    {
        c -= 32;
        printf("%c\n", c);
    }
    else if (c >= 'A' && c <= 'Z')
    {
        c += 32;
        printf("%c\n", c);
    }
    else
    {
        printf("Invalid character\n");
    }
    return 0;
}