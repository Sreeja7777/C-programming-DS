#include <stdio.h>
int main()
{

float F, C, K;

printf("Enter temperature in Farenheit: ");
scanf("%f", &F);

C = (5.0/9) * (F-32);
K = C + 273.15;

printf("Temperture in Celcius is %f\n", C);
printf("Temperture in Kelvin is %f\n", K);

return 0;

}
