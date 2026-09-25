//Write a program to calculate gross salary (simple)

#include <stdio.h>
int main() {
    float basic, hra, da, gross;
    printf("Enter basic salary: ");
    scanf("%f", &basic);
    // Assuming hra = 20% and da = 30% for any salary here
    hra = 0.20 * basic;
    da = 0.30 * basic;
    gross = basic + hra + da;
    printf("Gross Salary = %.2f\n", gross);
    return 0;
}
