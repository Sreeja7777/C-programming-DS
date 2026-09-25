//Write an uppercase character and print in lowercase

#include <stdio.h>
int main() {
    char ch;
    printf("Enter an uppercase character: ");
    scanf("%c", &ch);
    if(ch >= 'A' && ch <= 'Z') {
        printf("Lowercase: %c\n", ch + 32);
    } else {
        printf("Input is not an uppercase letter.\n");
    }
    return 0;
}
