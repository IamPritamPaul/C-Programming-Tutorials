#include <stdio.h>
#include <string.h>
int main()
{
    char s[] = "I am Pritam Paul";
    // printf("%d is the length of the string.", strlen(s));
    int l = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        l++;
    }
    printf("%d is the length of the string", l);
}