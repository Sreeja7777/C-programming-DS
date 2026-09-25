//Calculate gross salary with conditions

#include <stdio.h>
int main() {
    float basic, hra, da, gross;
    printf("Enter basic salary: ");
    scanf("%f", &basic);
    if(basic > 10000) {
        hra = 0.20 * basic;
        da = 0.30 * basic;
    } else {
        hra = 0.25 * basic;
        da = 0.35 * basic;
    }
    gross = basic + hra + da;
    printf("Gross Salary = %.2f\n", gross);
    return 0;
}
