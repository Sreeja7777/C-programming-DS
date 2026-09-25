//Conditional Operator to find maximum value

#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    c = (a < b) ? b : a;
    printf("Maximum value is %d\n", c);
    return 0;
}
