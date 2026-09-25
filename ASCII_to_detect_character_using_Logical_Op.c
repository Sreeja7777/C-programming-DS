//ASCII-based program to detect character using Logical operators

#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch >= 65 && ch <= 90) // ASCII for A-Z
    {
        printf("%c is an uppercase letter.\n", ch);
    }
    else if (ch >= 97 && ch <= 122) // ASCII for a-z
    {
        printf("%c is a lowercase letter.\n", ch);
    }
    else if (ch >= 48 && ch <= 57) // ASCII for 0-9
    {
        printf("%c is a digit.\n", ch);
    }
    else
    {
        printf("%c is a special character.\n", ch);
    }

    return 0;
}
