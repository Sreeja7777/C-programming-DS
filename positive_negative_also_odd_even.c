//Check if number is positive; if yes, check odd or even

#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num > 0) {
        if(num % 2 == 0)
            printf("Positive and Even\n");
        else
            printf("Positive and Odd\n");
    } else {
        printf("Number is not positive.\n");
    }
    return 0;
}

/*First check if the number is positive, if yes then check if its positive and even or positive and odd;
If its not positive in the first place then it is not positive*/
