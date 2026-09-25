#include <stdio.h>

#define AREA(l, b) ( (l) * (b) )

int main() {
    int length, breadth, area;

    printf("Enter length: ");
    scanf("%d", &length);

    printf("Enter breadth: ");
    scanf("%d", &breadth);

    area = AREA(length, breadth);

    printf("Area of rectangle = %d\n", area);

    return 0;
}
