// Write a program to input any character and print the ASCII value of that character.
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
    int n = ch; // type conversion in assignments
    printf("%d is the ASCII value of %c\n", n, ch);
    return 0;
}