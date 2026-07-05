#include <stdio.h>

int main() {
    FILE *file;
    char ch;
    int count = 0;

    file = fopen("sample.txt", "r");

    if(file == NULL) {
        printf("File not found");
        return 0;
    }

    while((ch = fgetc(file)) != EOF) {
        count++;
    }

    fclose(file);

    printf("Total Characters = %d", count);

    return 0;
}