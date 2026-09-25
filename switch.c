#include <stdio.h>

int main() {
    FILE *fp1, *fp2;
    char ch;

    // open source file
    fp1 = fopen("source.txt", "r");
    if(fp1 == NULL) {
        printf("Cannot open source file\n");
        return 0;
    }

    // open destination file
    fp2 = fopen("destination.txt", "w");
    if(fp2 == NULL) {
        printf("Cannot open destination file\n");
        fclose(fp1);
        return 0;
    }

    // copy character by character
    while((ch = fgetc(fp1)) != EOF) {
        fputc(ch, fp2);
    }

    printf("File copied successfully.\n");

    fclose(fp1);
    fclose(fp2);

    return 0;
}
