//logical operator example for checking if someone is eligible for a driver’s license based on age:

#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    // Using logical AND (&&)
    if (age >= 18 && age <= 70)
    {
        printf("You are eligible for a driver's license.\n");
    }
    else
    {
        printf("You are NOT eligible for a driver's license.\n");
    }

    return 0;
}
