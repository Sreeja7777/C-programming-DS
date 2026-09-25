#include <stdio.h>

int main ()
{
 float a,b,am,hm;

 printf("Enter two numbers: ");
 scanf("%f %f", &a, &b);

 am = (a + b)/2;
 hm = (a * b)/ (a + b);

 printf("Arithmetic Mean is %.2f\n\n", am);
 printf("Harmonic Mean is %.2f\n\n", hm);

 return 0;
 }
