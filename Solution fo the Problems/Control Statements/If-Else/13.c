// Write a program to input any character and check either it is capital letter or it is a small letter or it is a number.
#include <stdio.h>
int main()
{
    char c;
    printf("Enter any character: ");
    scanf("%c", &c);
    if (c >= 'a' && c <= 'z')
    {
        printf("%c is a small letter\n", c);
    }
    else if (c >= 'A' && c <= 'Z')
    {
        printf("%c is a capital letter\n", c);
    }
    else if (c >= '0' && c <= '9')
    {
        printf("%c is a digit\n", c);
    }
    else
    {
        printf("Invalid character\n");
    }
    return 0;
}