// Write a program to input any character and check whether it is a vowel or not (using a switch case).
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
    /* switch (ch)
    {
    case 'a':
        printf("Vowel\n");
        break;
    case 'A':
        printf("Vowel\n");
        break;
    case 'E':
        printf("Vowel\n");
        break;
    case 'e':
        printf("Vowel\n");
        break;
    case 'I':
        printf("Vowel\n");
        break;
    case 'i':
        printf("Vowel\n");
        break;
    case 'O':
        printf("Vowel\n");
        break;
    case 'o':
        printf("Vowel\n");
        break;
    case 'U':
        printf("Vowel\n");
        break;
    case 'u':
        printf("Vowel\n");
        break;
    default:
        printf("Not a vowel\n");
    } */
    /* switch (ch)
    {
    case 'a':
        printf("Vowel\n");
        // break;
    case 'A':
        printf("Vowel\n");
        // break;
    case 'E':
        printf("Vowel\n");
        // break;
    case 'e':
        printf("Vowel\n");
        // break;
    case 'I':
        printf("Vowel\n");
        // break;
    case 'i':
        printf("Vowel\n");
        // break;
    case 'O':
        printf("Vowel\n");
        // break;
    case 'o':
        printf("Vowel\n");
        // break;
    case 'U':
        printf("Vowel\n");
        // break;
    case 'u':
        printf("Vowel\n");
        // break;
    default:
        printf("Not a vowel\n");
    } */

    switch (ch)
    {
    case 'a':
    case 'A':
    case 'E':
    case 'e':
    case 'I':
    case 'i':
    case 'O':
    case 'o':
    case 'U':
    case 'u':
        printf("Vowel\n");
        break;
    default:
        printf("Not a vowel\n");
    }

    /* switch (ch)
    {
    // case 'a' || 'A' || 'i':  //  expression are not allowed
    case 'a', 'A', 'i': //  invalid
        // case 'A':
        // case 'E':
        // case 'e':
        // case 'I':
        // case 'i':
        // case 'O':
        // case 'o':
        // case 'U':
        // case 'u':
        printf("Vowel\n");
        break;
    default:
        printf("Not a vowel\n");
    }  */
    return 0;
}