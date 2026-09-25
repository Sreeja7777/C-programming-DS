#include <stdio.h>
int main ()
{

float r, h, Volume;

printf("Enter the radius and height of the cylinder respectively: ");
scanf("%f %f", &r, &h);

Volume = 3.14 * r * r * h;

printf("The Volume is %f\n", Volume);

return 0;
}
