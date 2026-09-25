#include <stdio.h>

int main() {

    printf("int: size = %d bytes, format = %%d\n", sizeof(int));
    printf("float: size = %d bytes, format = %%f\n", sizeof(float));
    printf("double: size = %d bytes, format = %%lf\n", sizeof(double));
    printf("char: size = %d bytes, format = %%c\n", sizeof(char));

    return 0;
}
