#include <stdio.h>
#define PI 3.14
int main()
{

float r, area, circumference;

printf("Enter the radius here: ");
scanf("%f", &r);

area = PI * r * r;
circumference = 2 * PI * r;

printf("Area is %f\n", area);
printf("Circumference is %f\n", circumference);

return 0;
}
