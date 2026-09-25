//Write lowercase letter and print in uppercase

#include <stdio.h>
int main() {
    char ch;
    printf("Enter a lowercase character: ");
    scanf("%c", &ch);
    if(ch >= 'a' && ch <= 'z') {
        printf("Uppercase: %c\n", ch - 32);
    } else {
        printf("Input is not a lowercase letter.\n");
    }
    return 0;
}
