//Checking if characters r vowel using Logical Operators

#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    // Check for lowercase vowels
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("%c is a vowel.\n", ch);
    }
    else
    {
        printf("%c is not a vowel.\n", ch);
    }

    return 0;
}
