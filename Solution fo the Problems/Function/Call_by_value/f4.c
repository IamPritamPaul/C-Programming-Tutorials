// 4. Write a program to input any character and print the ASCII value of that character using function by value with return.

#include <stdio.h>
/* int type_change(char ch)
{
    return ch;
} */
char type_change(char ch)
{
    return ch;
}
int main()

{
    char c;
    int i;
    printf("enter a character : ");
    scanf("%c", &c);
    printf("the ASCII value of %c is %d\n", c, type_change(c));
    return 0;
}