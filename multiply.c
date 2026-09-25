#include <stdio.h>
int main()
{
    int a, b, c;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    c = a * b;

    printf("The value is %d", c);  // Fixed: Added %d and removed &

    return 0;
}
