#include <stdio.h>

int main() {
    FILE *file;
    char ch;

    file = fopen("sample.txt", "r");

    if(file == NULL) {
        printf("File not found");
        return 0;
    }

    printf("File Content:\n");

    while((ch = fgetc(file)) != EOF) {
        printf("%c", ch);
    }

    fclose(file);

    return 0;
}