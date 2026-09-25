//Swapping values of a and b without a temporary variable using arithmetic

#include <stdio.h>
int main() {
    int a, b;
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);

    printf("Before swap: a = %d, b = %d\n", a, b);

    a = a + b;  // sum of a and b
    b = a - b;  // original a
    a = a - b;  // original b

    printf("After swap: a = %d, b = %d\n", a, b);
    return 0;
}

