#include <stdio.h>

int main() {
    FILE *file;
    char ch;
    int words = 0;

    file = fopen("sample.txt", "r");

    if(file == NULL) {
        printf("File not found");
        return 0;
    }

    while((ch = fgetc(file)) != EOF) {
        if(ch == ' ' || ch == '\n') {
            words++;
        }
    }

    fclose(file);

    printf("Total Words = %d", words + 1);

    return 0;
}