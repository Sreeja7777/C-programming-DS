//Calculate the average of 3 numbers aft askin input of 3 numbers:

#include <stdio.h>

int main(){
    int a, b, c;
    float avg;
    scanf("%f %f %f",&a,&b,&c);
//User Input above
    avg = (a+b+c)/3.0;
    printf("Average of 3 numbers is: %.2f");

    return 0;
    }
